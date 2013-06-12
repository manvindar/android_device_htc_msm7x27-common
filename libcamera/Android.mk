LOCAL_PATH := $(call my-dir)


## Make libcamera


# When zero we link against libmmcamera; when 1, we dlopen libmmcamera.
DLOPEN_LIBMMCAMERA:=1

include $(CLEAR_VARS)
LOCAL_MODULE_TAGS := optional

LOCAL_PRELINK_MODULE := false

LOCAL_SRC_FILES:= QualcommCameraHardware.cpp

LOCAL_CFLAGS:= -DDLOPEN_LIBMMCAMERA=$(DLOPEN_LIBMMCAMERA)

ifeq "$(findstring msm7627,$(QCOM_TARGET_PRODUCT))" "msm7627"
LOCAL_CFLAGS+= -DNUM_PREVIEW_BUFFERS=6 -D_ANDROID_
else
LOCAL_CFLAGS+= -DNUM_PREVIEW_BUFFERS=2 -D_ANDROID_
endif

LOCAL_C_INCLUDES+= \
    $(TARGET_OUT_HEADERS)/mm-camera \
    $(TARGET_OUT_HEADERS)/mm-camera/common \
    $(TARGET_OUT_HEADERS)/mm-camera \
    $(TARGET_OUT_HEADERS)/mm-still/jpeg \

LOCAL_SHARED_LIBRARIES:= libutils libui libcamera_client liblog libcutils

LOCAL_SHARED_LIBRARIES+= libbinder
ifneq ($(DLOPEN_LIBMMCAMERA),1)
LOCAL_SHARED_LIBRARIES+= liboemcamera
else
LOCAL_SHARED_LIBRARIES+= libdl
endif

ifeq ($(BOARD_CAMERA_HAVE_ADDITIONAL_ISO),true)
	LOCAL_CFLAGS += -DADDITIONAL_ISO_MODES
endif

LOCAL_MODULE:= libcamera
include $(BUILD_SHARED_LIBRARY)


## Make camera wrapper


include $(CLEAR_VARS)

LOCAL_C_FLAGS        += -O3
LOCAL_MODULE_TAGS    := optional
LOCAL_MODULE_PATH    := $(TARGET_OUT_SHARED_LIBRARIES)/hw
LOCAL_MODULE         := camera.p350
LOCAL_SRC_FILES      := QCameraHAL.cpp
LOCAL_PRELINK_MODULE := false

LOCAL_SHARED_LIBRARIES := liblog libdl libutils libcamera_client libbinder libcutils libhardware libcamera libui
LOCAL_C_INCLUDES       := frameworks/base/services \
                          frameworks/base/include \
                          frameworks/av/include \
                          frameworks/native/include \
                          hardware/libhardware/include \
                          hardware/qcom/display-legacy/libgralloc

include $(BUILD_SHARED_LIBRARY)
