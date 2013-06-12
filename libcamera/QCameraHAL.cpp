  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>android_device_lge_p350/libcamera/QCameraHAL.cpp at cm-10.1 · PecanCM/android_device_lge_p350</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="http://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <link rel="assets" href="https://a248.e.akamai.net/assets.github.com/">
    <link rel="xhr-socket" href="/_sockets" />
    


    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="1295779" name="octolytics-actor-id" /><meta content="feroxx" name="octolytics-actor-login" /><meta content="a92d63efe14c216b74751c6d03f54d03c3ce52c50be1b03493da9797090a310f" name="octolytics-actor-hash" />

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="F6CkpDzjl+xYq7aZEUrWHoKirZ+D8bnysrF5CyQOpmA=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-72153213debf50e06a825d2dcedd013277e44605.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-49e138635eb90f56d083e157e6d9735efe42ba30.css" media="all" rel="stylesheet" type="text/css" />
    


      <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-4c434fa1705bf526e191eec0cd8fab1a5ce3e326.js" type="text/javascript"></script>
      <script src="https://a248.e.akamai.net/assets.github.com/assets/github-2807f7a14cfa07e4863ccfb987303e8d570d1851.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="47f78d46df854b5292952e11c7cc502a">

        <link data-pjax-transient rel='permalink' href='/PecanCM/android_device_lge_p350/blob/44d4056a3c5f7a6e79dfb14d9e048d1c5b26daca/libcamera/QCameraHAL.cpp'>
    <meta property="og:title" content="android_device_lge_p350"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/PecanCM/android_device_lge_p350"/>
    <meta property="og:image" content="https://secure.gravatar.com/avatar/d9ebb0496cc529c04cac1d384eaafbec?s=420&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="android_device_lge_p350 - LGE P350 Device for CyanogenMod"/>
    <meta property="twitter:card" content="summary"/>
    <meta property="twitter:site" content="@GitHub">
    <meta property="twitter:title" content="PecanCM/android_device_lge_p350"/>

    <meta name="description" content="android_device_lge_p350 - LGE P350 Device for CyanogenMod" />


    <meta content="1951961" name="octolytics-dimension-user_id" /><meta content="PecanCM" name="octolytics-dimension-user_login" /><meta content="6224228" name="octolytics-dimension-repository_id" /><meta content="PecanCM/android_device_lge_p350" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="true" name="octolytics-dimension-repository_is_fork" /><meta content="5534247" name="octolytics-dimension-repository_parent_id" /><meta content="CyanogenMod/android_device_lge_p350" name="octolytics-dimension-repository_parent_nwo" /><meta content="5534247" name="octolytics-dimension-repository_network_root_id" /><meta content="CyanogenMod/android_device_lge_p350" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/PecanCM/android_device_lge_p350/commits/cm-10.1.atom" rel="alternate" title="Recent Commits to android_device_lge_p350:cm-10.1" type="application/atom+xml" />

  </head>


  <body class="logged_in page-blob windows vis-public fork env-production  ">
    <div id="wrapper">

      
      
      

      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/">
  <span class="mega-octicon octicon-mark-github"></span>
</a>

    <div class="divider-vertical"></div>

      <a href="/notifications" class="notification-indicator tooltipped downwards" title="You have no unread notifications">
    <span class="mail-status all-read"></span>
  </a>
  <div class="divider-vertical"></div>


      <div class="command-bar js-command-bar  in-repository">
          <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">
  <a href="/search/advanced" class="advanced-search-icon tooltipped downwards command-bar-search" id="advanced_search" title="Advanced search"><span class="octicon octicon-gear "></span></a>

  <input type="text" data-hotkey="/ s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    data-username="feroxx"
      data-repo="PecanCM/android_device_lge_p350"
      data-branch="cm-10.1"
      data-sha="050fdc33ca6ef8085ec4eb6241eb14d67d987d7d"
  >

    <input type="hidden" name="nwo" value="PecanCM/android_device_lge_p350" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="octicon help tooltipped downwards" title="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

  <div class="divider-vertical"></div>

</form>
        <ul class="top-nav">
            <li class="explore"><a href="/explore">Explore</a></li>
            <li><a href="https://gist.github.com">Gist</a></li>
            <li><a href="/blog">Blog</a></li>
          <li><a href="http://help.github.com">Help</a></li>
        </ul>
      </div>

    

  

    <ul id="user-links">
      <li>
        <a href="/feroxx" class="name">
          <img height="20" src="https://secure.gravatar.com/avatar/f6aefc4181deb594f4cbcdb9c8d690bc?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="20" /> feroxx
        </a>
      </li>

        <li>
          <a href="/new" id="new_repo" class="tooltipped downwards" title="Create a new repo">
            <span class="octicon octicon-repo-create"></span>
          </a>
        </li>

        <li>
          <a href="/settings/profile" id="account_settings"
            class="tooltipped downwards"
            title="Account settings ">
            <span class="octicon octicon-tools"></span>
          </a>
        </li>
        <li>
          <a class="tooltipped downwards" href="/logout" data-method="post" id="logout" title="Sign out">
            <span class="octicon octicon-log-out"></span>
          </a>
        </li>

    </ul>


<div class="js-new-dropdown-contents hidden">
  <ul class="dropdown-menu">
    <li>
      <a href="/new"><span class="octicon octicon-repo-create"></span> New repository</a>
    </li>
    <li>
        <a href="/PecanCM/android_device_lge_p350/issues/new"><span class="octicon octicon-issue-opened"></span> New issue</a>
    </li>
    <li>
    </li>
    <li>
      <a href="/organizations/new"><span class="octicon octicon-list-unordered"></span> New organization</a>
    </li>
  </ul>
</div>


    
  </div>
</div>

      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu ">
          <div class="container">
            <div class="title-actions-bar">
              

<ul class="pagehead-actions">


    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="F6CkpDzjl+xYq7aZEUrWHoKirZ+D8bnysrF5CyQOpmA=" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="6224228" />

    <div class="select-menu js-menu-container js-select-menu">
      <span class="minibutton select-menu-button js-menu-target">
        <span class="js-select-button">
          <span class="octicon octicon-eye-watch"></span>
          Watch
        </span>
      </span>

      <div class="select-menu-modal-holder js-menu-content">
        <div class="select-menu-modal">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container">

            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for discussions in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-watch"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-unwatch"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

    <li class="js-toggler-container js-social-container starring-container ">
      <a href="/PecanCM/android_device_lge_p350/unstar" class="minibutton js-toggler-target star-button starred upwards" title="Unstar this repo" data-remote="true" data-method="post" rel="nofollow">
        <span class="octicon octicon-star-delete"></span>
        <span class="text">Unstar</span>
      </a>
      <a href="/PecanCM/android_device_lge_p350/star" class="minibutton js-toggler-target star-button unstarred upwards" title="Star this repo" data-remote="true" data-method="post" rel="nofollow">
        <span class="octicon octicon-star"></span>
        <span class="text">Star</span>
      </a>
      <a class="social-count js-social-count" href="/PecanCM/android_device_lge_p350/stargazers">9</a>
    </li>

        <li>
          <a href="/PecanCM/android_device_lge_p350/fork" class="minibutton js-toggler-target fork-button lighter upwards" title="Fork this repo" rel="facebox nofollow">
            <span class="octicon octicon-git-branch-create"></span>
            <span class="text">Fork</span>
          </a>
          <a href="/PecanCM/android_device_lge_p350/network" class="social-count">34</a>
        </li>


</ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-octicon octicon-repo-forked"></span>
                <span class="author vcard">
                  <a href="/PecanCM" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">PecanCM</span>
                  </a></span> /
                <strong><a href="/PecanCM/android_device_lge_p350" class="js-current-repository">android_device_lge_p350</a></strong>
                  <span class="fork-flag">
                    <span class="text">forked from <a href="/CyanogenMod/android_device_lge_p350">CyanogenMod/android_device_lge_p350</a></span>
                  </span>
              </h1>
            </div>

            
  <ul class="tabs">
    <li class="pulse-nav"><a href="/PecanCM/android_device_lge_p350/pulse" class="js-selected-navigation-item " data-selected-links="pulse /PecanCM/android_device_lge_p350/pulse" rel="nofollow"><span class="octicon octicon-pulse"></span></a></li>
    <li><a href="/PecanCM/android_device_lge_p350" class="js-selected-navigation-item selected" data-selected-links="repo_source repo_downloads repo_commits repo_tags repo_branches /PecanCM/android_device_lge_p350">Code</a></li>
    <li><a href="/PecanCM/android_device_lge_p350/network" class="js-selected-navigation-item " data-selected-links="repo_network /PecanCM/android_device_lge_p350/network">Network</a></li>
    <li><a href="/PecanCM/android_device_lge_p350/pulls" class="js-selected-navigation-item " data-selected-links="repo_pulls /PecanCM/android_device_lge_p350/pulls">Pull Requests <span class='counter'>0</span></a></li>

      <li><a href="/PecanCM/android_device_lge_p350/issues" class="js-selected-navigation-item " data-selected-links="repo_issues /PecanCM/android_device_lge_p350/issues">Issues <span class='counter'>0</span></a></li>



    <li><a href="/PecanCM/android_device_lge_p350/graphs" class="js-selected-navigation-item " data-selected-links="repo_graphs repo_contributors /PecanCM/android_device_lge_p350/graphs">Graphs</a></li>


  </ul>
  
<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
          <li><a href="/PecanCM/android_device_lge_p350/tags" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_tags /PecanCM/android_device_lge_p350/tags">Tags <span class="counter ">1</span></a></li>
    </ul>
  </span>

  <div class="tabnav-widget scope">


    <div class="select-menu js-menu-container js-select-menu js-branch-menu">
      <a class="minibutton select-menu-button js-menu-target" data-hotkey="w" data-ref="cm-10.1">
        <span class="octicon octicon-git-branch"></span>
        <i>branch:</i>
        <span class="js-select-button">cm-10.1</span>
      </a>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">

        <div class="select-menu-modal">
          <div class="select-menu-header">
            <span class="select-menu-title">Switch branches/tags</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-filters">
            <div class="select-menu-text-filter">
              <input type="text" id="commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
            </div>
            <div class="select-menu-tabs">
              <ul>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
                </li>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
                </li>
              </ul>
            </div><!-- /.select-menu-tabs -->
          </div><!-- /.select-menu-filters -->

          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="branches">

            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/android-4.2.2_r1/libcamera/QCameraHAL.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="android-4.2.2_r1" rel="nofollow" title="android-4.2.2_r1">android-4.2.2_r1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item selected">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/cm-10.1/libcamera/QCameraHAL.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1" rel="nofollow" title="cm-10.1">cm-10.1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/cm-10.1-wip/libcamera/QCameraHAL.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1-wip" rel="nofollow" title="cm-10.1-wip">cm-10.1-wip</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/gingerbread/libcamera/QCameraHAL.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="gingerbread" rel="nofollow" title="gingerbread">gingerbread</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/ics/libcamera/QCameraHAL.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ics" rel="nofollow" title="ics">ics</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/ics-wip/libcamera/QCameraHAL.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ics-wip" rel="nofollow" title="ics-wip">ics-wip</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/jb-wip/libcamera/QCameraHAL.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="jb-wip" rel="nofollow" title="jb-wip">jb-wip</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/jellybean/libcamera/QCameraHAL.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="jellybean" rel="nofollow" title="jellybean">jellybean</a>
                </div> <!-- /.select-menu-item -->
            </div>

              <div class="select-menu-no-results">Nothing to show</div>
          </div> <!-- /.select-menu-list -->


          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="tags">
            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/cm10.1-RC7/libcamera/QCameraHAL.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm10.1-RC7" rel="nofollow" title="cm10.1-RC7">cm10.1-RC7</a>
                </div> <!-- /.select-menu-item -->
            </div>

            <div class="select-menu-no-results">Nothing to show</div>

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/PecanCM/android_device_lge_p350" class="selected js-selected-navigation-item tabnav-tab" data-selected-links="repo_source /PecanCM/android_device_lge_p350">Files</a></li>
    <li><a href="/PecanCM/android_device_lge_p350/commits/cm-10.1" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_commits /PecanCM/android_device_lge_p350/commits/cm-10.1">Commits</a></li>
    <li><a href="/PecanCM/android_device_lge_p350/branches" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_branches /PecanCM/android_device_lge_p350/branches" rel="nofollow">Branches <span class="counter ">8</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:2a9ce0aec36e5897d372a4920a26950b -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:2a9ce0aec36e5897d372a4920a26950b -->


<div id="slider">
    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

        <div class="breadcrumb">
          <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/PecanCM/android_device_lge_p350" class="js-slide-to" data-branch="cm-10.1" data-direction="back" itemscope="url"><span itemprop="title">android_device_lge_p350</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/PecanCM/android_device_lge_p350/tree/cm-10.1/libcamera" class="js-slide-to" data-branch="cm-10.1" data-direction="back" itemscope="url"><span itemprop="title">libcamera</span></a></span><span class="separator"> / </span><strong class="final-path">QCameraHAL.cpp</strong> <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="libcamera/QCameraHAL.cpp" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
        </div>

      <a href="/PecanCM/android_device_lge_p350/find/cm-10.1" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>


        <div class="commit commit-loader file-history-tease js-deferred-content" data-url="/PecanCM/android_device_lge_p350/contributors/cm-10.1/libcamera/QCameraHAL.cpp">
          Fetching contributors…

          <div class="participation">
            <p class="loader-loading"><img alt="Octocat-spinner-32-eaf2f5" height="16" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-32-EAF2F5.gif" width="16" /></p>
            <p class="loader-error">Cannot retrieve contributors at this time</p>
          </div>
        </div>

    </div><!-- ./.frame-meta -->

    <div class="frames">
      <div class="frame" data-permalink-url="/PecanCM/android_device_lge_p350/blob/44d4056a3c5f7a6e79dfb14d9e048d1c5b26daca/libcamera/QCameraHAL.cpp" data-title="android_device_lge_p350/libcamera/QCameraHAL.cpp at cm-10.1 · PecanCM/android_device_lge_p350 · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="octicon octicon-file-text"></b></span>
                <span class="mode" title="File Mode">executable file</span>
                  <span>712 lines (607 sloc)</span>
                <span>24.176 kb</span>
              </div>
              <div class="actions">
                <div class="button-group">
                        <a class="minibutton tooltipped leftwards"
                           title="Clicking this button will automatically fork this project so you can edit the file"
                           href="/PecanCM/android_device_lge_p350/edit/cm-10.1/libcamera/QCameraHAL.cpp"
                           data-method="post" rel="nofollow">Edit</a>
                  <a href="/PecanCM/android_device_lge_p350/raw/cm-10.1/libcamera/QCameraHAL.cpp" class="button minibutton " id="raw-url">Raw</a>
                    <a href="/PecanCM/android_device_lge_p350/blame/cm-10.1/libcamera/QCameraHAL.cpp" class="button minibutton ">Blame</a>
                  <a href="/PecanCM/android_device_lge_p350/commits/cm-10.1/libcamera/QCameraHAL.cpp" class="button minibutton " rel="nofollow">History</a>
                </div><!-- /.button-group -->
              </div><!-- /.actions -->

            </div>
                <div class="blob-wrapper data type-c js-blob-data">
      <table class="file-code file-diff">
        <tr class="file-code-line">
          <td class="blob-line-nums">
            <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>
<span id="L492" rel="#L492">492</span>
<span id="L493" rel="#L493">493</span>
<span id="L494" rel="#L494">494</span>
<span id="L495" rel="#L495">495</span>
<span id="L496" rel="#L496">496</span>
<span id="L497" rel="#L497">497</span>
<span id="L498" rel="#L498">498</span>
<span id="L499" rel="#L499">499</span>
<span id="L500" rel="#L500">500</span>
<span id="L501" rel="#L501">501</span>
<span id="L502" rel="#L502">502</span>
<span id="L503" rel="#L503">503</span>
<span id="L504" rel="#L504">504</span>
<span id="L505" rel="#L505">505</span>
<span id="L506" rel="#L506">506</span>
<span id="L507" rel="#L507">507</span>
<span id="L508" rel="#L508">508</span>
<span id="L509" rel="#L509">509</span>
<span id="L510" rel="#L510">510</span>
<span id="L511" rel="#L511">511</span>
<span id="L512" rel="#L512">512</span>
<span id="L513" rel="#L513">513</span>
<span id="L514" rel="#L514">514</span>
<span id="L515" rel="#L515">515</span>
<span id="L516" rel="#L516">516</span>
<span id="L517" rel="#L517">517</span>
<span id="L518" rel="#L518">518</span>
<span id="L519" rel="#L519">519</span>
<span id="L520" rel="#L520">520</span>
<span id="L521" rel="#L521">521</span>
<span id="L522" rel="#L522">522</span>
<span id="L523" rel="#L523">523</span>
<span id="L524" rel="#L524">524</span>
<span id="L525" rel="#L525">525</span>
<span id="L526" rel="#L526">526</span>
<span id="L527" rel="#L527">527</span>
<span id="L528" rel="#L528">528</span>
<span id="L529" rel="#L529">529</span>
<span id="L530" rel="#L530">530</span>
<span id="L531" rel="#L531">531</span>
<span id="L532" rel="#L532">532</span>
<span id="L533" rel="#L533">533</span>
<span id="L534" rel="#L534">534</span>
<span id="L535" rel="#L535">535</span>
<span id="L536" rel="#L536">536</span>
<span id="L537" rel="#L537">537</span>
<span id="L538" rel="#L538">538</span>
<span id="L539" rel="#L539">539</span>
<span id="L540" rel="#L540">540</span>
<span id="L541" rel="#L541">541</span>
<span id="L542" rel="#L542">542</span>
<span id="L543" rel="#L543">543</span>
<span id="L544" rel="#L544">544</span>
<span id="L545" rel="#L545">545</span>
<span id="L546" rel="#L546">546</span>
<span id="L547" rel="#L547">547</span>
<span id="L548" rel="#L548">548</span>
<span id="L549" rel="#L549">549</span>
<span id="L550" rel="#L550">550</span>
<span id="L551" rel="#L551">551</span>
<span id="L552" rel="#L552">552</span>
<span id="L553" rel="#L553">553</span>
<span id="L554" rel="#L554">554</span>
<span id="L555" rel="#L555">555</span>
<span id="L556" rel="#L556">556</span>
<span id="L557" rel="#L557">557</span>
<span id="L558" rel="#L558">558</span>
<span id="L559" rel="#L559">559</span>
<span id="L560" rel="#L560">560</span>
<span id="L561" rel="#L561">561</span>
<span id="L562" rel="#L562">562</span>
<span id="L563" rel="#L563">563</span>
<span id="L564" rel="#L564">564</span>
<span id="L565" rel="#L565">565</span>
<span id="L566" rel="#L566">566</span>
<span id="L567" rel="#L567">567</span>
<span id="L568" rel="#L568">568</span>
<span id="L569" rel="#L569">569</span>
<span id="L570" rel="#L570">570</span>
<span id="L571" rel="#L571">571</span>
<span id="L572" rel="#L572">572</span>
<span id="L573" rel="#L573">573</span>
<span id="L574" rel="#L574">574</span>
<span id="L575" rel="#L575">575</span>
<span id="L576" rel="#L576">576</span>
<span id="L577" rel="#L577">577</span>
<span id="L578" rel="#L578">578</span>
<span id="L579" rel="#L579">579</span>
<span id="L580" rel="#L580">580</span>
<span id="L581" rel="#L581">581</span>
<span id="L582" rel="#L582">582</span>
<span id="L583" rel="#L583">583</span>
<span id="L584" rel="#L584">584</span>
<span id="L585" rel="#L585">585</span>
<span id="L586" rel="#L586">586</span>
<span id="L587" rel="#L587">587</span>
<span id="L588" rel="#L588">588</span>
<span id="L589" rel="#L589">589</span>
<span id="L590" rel="#L590">590</span>
<span id="L591" rel="#L591">591</span>
<span id="L592" rel="#L592">592</span>
<span id="L593" rel="#L593">593</span>
<span id="L594" rel="#L594">594</span>
<span id="L595" rel="#L595">595</span>
<span id="L596" rel="#L596">596</span>
<span id="L597" rel="#L597">597</span>
<span id="L598" rel="#L598">598</span>
<span id="L599" rel="#L599">599</span>
<span id="L600" rel="#L600">600</span>
<span id="L601" rel="#L601">601</span>
<span id="L602" rel="#L602">602</span>
<span id="L603" rel="#L603">603</span>
<span id="L604" rel="#L604">604</span>
<span id="L605" rel="#L605">605</span>
<span id="L606" rel="#L606">606</span>
<span id="L607" rel="#L607">607</span>
<span id="L608" rel="#L608">608</span>
<span id="L609" rel="#L609">609</span>
<span id="L610" rel="#L610">610</span>
<span id="L611" rel="#L611">611</span>
<span id="L612" rel="#L612">612</span>
<span id="L613" rel="#L613">613</span>
<span id="L614" rel="#L614">614</span>
<span id="L615" rel="#L615">615</span>
<span id="L616" rel="#L616">616</span>
<span id="L617" rel="#L617">617</span>
<span id="L618" rel="#L618">618</span>
<span id="L619" rel="#L619">619</span>
<span id="L620" rel="#L620">620</span>
<span id="L621" rel="#L621">621</span>
<span id="L622" rel="#L622">622</span>
<span id="L623" rel="#L623">623</span>
<span id="L624" rel="#L624">624</span>
<span id="L625" rel="#L625">625</span>
<span id="L626" rel="#L626">626</span>
<span id="L627" rel="#L627">627</span>
<span id="L628" rel="#L628">628</span>
<span id="L629" rel="#L629">629</span>
<span id="L630" rel="#L630">630</span>
<span id="L631" rel="#L631">631</span>
<span id="L632" rel="#L632">632</span>
<span id="L633" rel="#L633">633</span>
<span id="L634" rel="#L634">634</span>
<span id="L635" rel="#L635">635</span>
<span id="L636" rel="#L636">636</span>
<span id="L637" rel="#L637">637</span>
<span id="L638" rel="#L638">638</span>
<span id="L639" rel="#L639">639</span>
<span id="L640" rel="#L640">640</span>
<span id="L641" rel="#L641">641</span>
<span id="L642" rel="#L642">642</span>
<span id="L643" rel="#L643">643</span>
<span id="L644" rel="#L644">644</span>
<span id="L645" rel="#L645">645</span>
<span id="L646" rel="#L646">646</span>
<span id="L647" rel="#L647">647</span>
<span id="L648" rel="#L648">648</span>
<span id="L649" rel="#L649">649</span>
<span id="L650" rel="#L650">650</span>
<span id="L651" rel="#L651">651</span>
<span id="L652" rel="#L652">652</span>
<span id="L653" rel="#L653">653</span>
<span id="L654" rel="#L654">654</span>
<span id="L655" rel="#L655">655</span>
<span id="L656" rel="#L656">656</span>
<span id="L657" rel="#L657">657</span>
<span id="L658" rel="#L658">658</span>
<span id="L659" rel="#L659">659</span>
<span id="L660" rel="#L660">660</span>
<span id="L661" rel="#L661">661</span>
<span id="L662" rel="#L662">662</span>
<span id="L663" rel="#L663">663</span>
<span id="L664" rel="#L664">664</span>
<span id="L665" rel="#L665">665</span>
<span id="L666" rel="#L666">666</span>
<span id="L667" rel="#L667">667</span>
<span id="L668" rel="#L668">668</span>
<span id="L669" rel="#L669">669</span>
<span id="L670" rel="#L670">670</span>
<span id="L671" rel="#L671">671</span>
<span id="L672" rel="#L672">672</span>
<span id="L673" rel="#L673">673</span>
<span id="L674" rel="#L674">674</span>
<span id="L675" rel="#L675">675</span>
<span id="L676" rel="#L676">676</span>
<span id="L677" rel="#L677">677</span>
<span id="L678" rel="#L678">678</span>
<span id="L679" rel="#L679">679</span>
<span id="L680" rel="#L680">680</span>
<span id="L681" rel="#L681">681</span>
<span id="L682" rel="#L682">682</span>
<span id="L683" rel="#L683">683</span>
<span id="L684" rel="#L684">684</span>
<span id="L685" rel="#L685">685</span>
<span id="L686" rel="#L686">686</span>
<span id="L687" rel="#L687">687</span>
<span id="L688" rel="#L688">688</span>
<span id="L689" rel="#L689">689</span>
<span id="L690" rel="#L690">690</span>
<span id="L691" rel="#L691">691</span>
<span id="L692" rel="#L692">692</span>
<span id="L693" rel="#L693">693</span>
<span id="L694" rel="#L694">694</span>
<span id="L695" rel="#L695">695</span>
<span id="L696" rel="#L696">696</span>
<span id="L697" rel="#L697">697</span>
<span id="L698" rel="#L698">698</span>
<span id="L699" rel="#L699">699</span>
<span id="L700" rel="#L700">700</span>
<span id="L701" rel="#L701">701</span>
<span id="L702" rel="#L702">702</span>
<span id="L703" rel="#L703">703</span>
<span id="L704" rel="#L704">704</span>
<span id="L705" rel="#L705">705</span>
<span id="L706" rel="#L706">706</span>
<span id="L707" rel="#L707">707</span>
<span id="L708" rel="#L708">708</span>
<span id="L709" rel="#L709">709</span>
<span id="L710" rel="#L710">710</span>
<span id="L711" rel="#L711">711</span>

          </td>
          <td class="blob-line-code">
                  <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * Copyright (C) 2012, Raviprasad V Mummidi.</span></div><div class='line' id='LC3'><span class="cm"> *</span></div><div class='line' id='LC4'><span class="cm"> * Licensed under the Apache License, Version 2.0 (the &quot;License&quot;);</span></div><div class='line' id='LC5'><span class="cm"> * you may not use this file except in compliance with the License.</span></div><div class='line' id='LC6'><span class="cm"> * You may obtain a copy of the License at</span></div><div class='line' id='LC7'><span class="cm"> *</span></div><div class='line' id='LC8'><span class="cm"> *      http://www.apache.org/licenses/LICENSE-2.0</span></div><div class='line' id='LC9'><span class="cm"> *</span></div><div class='line' id='LC10'><span class="cm"> * Unless required by applicable law or agreed to in writing, software</span></div><div class='line' id='LC11'><span class="cm"> * distributed under the License is distributed on an &quot;AS IS&quot; BASIS,</span></div><div class='line' id='LC12'><span class="cm"> * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.</span></div><div class='line' id='LC13'><span class="cm"> * See the License for the specific language governing permissions and</span></div><div class='line' id='LC14'><span class="cm"> * limitations under the License.</span></div><div class='line' id='LC15'><span class="cm"> */</span></div><div class='line' id='LC16'><br/></div><div class='line' id='LC17'><span class="cp">#define LOG_TAG &quot;QCameraHAL&quot;</span></div><div class='line' id='LC18'><span class="cp">#define THE_WRAPPER</span></div><div class='line' id='LC19'><span class="cp">#include &lt;camera/CameraHardwareInterface.h&gt;</span></div><div class='line' id='LC20'><span class="cp">#include &lt;hardware/hardware.h&gt;</span></div><div class='line' id='LC21'><span class="cp">#include &lt;hardware/camera.h&gt;</span></div><div class='line' id='LC22'><span class="cp">#include &lt;binder/IMemory.h&gt;</span></div><div class='line' id='LC23'><span class="cp">#include &lt;fcntl.h&gt;</span></div><div class='line' id='LC24'><span class="cp">#include &lt;linux/ioctl.h&gt;</span></div><div class='line' id='LC25'><span class="cp">#include &lt;linux/msm_mdp.h&gt;</span></div><div class='line' id='LC26'><span class="cp">#include &lt;gralloc_priv.h&gt;</span></div><div class='line' id='LC27'><span class="cp">#include &lt;ui/GraphicBufferMapper.h&gt;</span></div><div class='line' id='LC28'><span class="cp">#include &lt;dlfcn.h&gt;</span></div><div class='line' id='LC29'><span class="cp">#include &lt;utils/Vector.h&gt;</span></div><div class='line' id='LC30'><br/></div><div class='line' id='LC31'><span class="cm">/* include QCamera Hardware Interface Header*/</span></div><div class='line' id='LC32'><span class="cp">#include &quot;QCameraHAL.h&quot;</span></div><div class='line' id='LC33'><br/></div><div class='line' id='LC34'><span class="k">extern</span> <span class="s">&quot;C&quot;</span> <span class="p">{</span></div><div class='line' id='LC35'><span class="cp">#include &lt;sys/time.h&gt;</span></div><div class='line' id='LC36'><span class="p">}</span></div><div class='line' id='LC37'><br/></div><div class='line' id='LC38'><span class="cp">#define NO_ERROR 0</span></div><div class='line' id='LC39'><br/></div><div class='line' id='LC40'><span class="k">struct</span> <span class="n">blitreq</span> <span class="p">{</span></div><div class='line' id='LC41'>&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC42'>&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">mdp_blit_req</span> <span class="n">req</span><span class="p">;</span></div><div class='line' id='LC43'><span class="p">};</span></div><div class='line' id='LC44'><br/></div><div class='line' id='LC45'><span class="cm">/* HAL function implementation goes here*/</span></div><div class='line' id='LC46'><br/></div><div class='line' id='LC47'><span class="cm">/**</span></div><div class='line' id='LC48'><span class="cm"> * The functions need to be provided by the camera HAL.</span></div><div class='line' id='LC49'><span class="cm"> *</span></div><div class='line' id='LC50'><span class="cm"> * If getNumberOfCameras() returns N, the valid cameraId for getCameraInfo()</span></div><div class='line' id='LC51'><span class="cm"> * and openCameraHardware() is 0 to N-1.</span></div><div class='line' id='LC52'><span class="cm"> */</span></div><div class='line' id='LC53'><br/></div><div class='line' id='LC54'><span class="cm">/* Prototypes and extern functions. */</span></div><div class='line' id='LC55'><span class="k">extern</span> <span class="s">&quot;C&quot;</span> <span class="n">android</span><span class="o">::</span><span class="n">sp</span><span class="o">&lt;</span><span class="n">android</span><span class="o">::</span><span class="n">CameraHardwareInterface</span><span class="o">&gt;</span> <span class="n">HAL_openCameraHardware</span><span class="p">(</span><span class="kt">int</span> <span class="n">id</span><span class="p">,</span> <span class="kt">int</span> <span class="n">mode</span><span class="p">);</span></div><div class='line' id='LC56'><span class="k">extern</span> <span class="s">&quot;C&quot;</span> <span class="kt">int</span> <span class="n">HAL_getNumberOfCameras</span><span class="p">();</span></div><div class='line' id='LC57'><span class="k">extern</span> <span class="s">&quot;C&quot;</span> <span class="kt">void</span> <span class="n">HAL_getCameraInfo</span><span class="p">(</span><span class="kt">int</span> <span class="n">cameraId</span><span class="p">,</span> <span class="k">struct</span> <span class="n">CameraInfo</span><span class="o">*</span> <span class="n">cameraInfo</span><span class="p">);</span></div><div class='line' id='LC58'><br/></div><div class='line' id='LC59'><span class="kt">int</span> <span class="nf">qcamera_device_open</span><span class="p">(</span><span class="k">const</span> <span class="kt">hw_module_t</span><span class="o">*</span> <span class="n">module</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">name</span><span class="p">,</span></div><div class='line' id='LC60'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">hw_device_t</span><span class="o">**</span> <span class="n">device</span><span class="p">);</span></div><div class='line' id='LC61'><span class="kt">int</span> <span class="nf">CameraHAL_GetCam_Info</span><span class="p">(</span><span class="kt">int</span> <span class="n">camera_id</span><span class="p">,</span> <span class="k">struct</span> <span class="n">camera_info</span> <span class="o">*</span><span class="n">info</span><span class="p">);</span></div><div class='line' id='LC62'><br/></div><div class='line' id='LC63'><span class="cm">/* Global variables. */</span></div><div class='line' id='LC64'><span class="n">camera_notify_callback</span>         <span class="n">origNotify_cb</span>    <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC65'><span class="n">camera_data_callback</span>           <span class="n">origData_cb</span>      <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC66'><span class="n">camera_data_timestamp_callback</span> <span class="n">origDataTS_cb</span>    <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC67'><span class="n">camera_request_memory</span>          <span class="n">origCamReqMemory</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC68'><span class="kt">bool</span>			       <span class="n">externallyRequestedFrames</span> <span class="o">=</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC69'><span class="n">android</span><span class="o">::</span><span class="n">Vector</span><span class="o">&lt;</span><span class="kt">camera_memory_t</span><span class="o">*&gt;</span>       <span class="n">sentFrames</span><span class="p">;</span></div><div class='line' id='LC70'><br/></div><div class='line' id='LC71'><span class="n">android</span><span class="o">::</span><span class="n">String8</span>          <span class="n">g_str</span><span class="p">;</span></div><div class='line' id='LC72'><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span> <span class="n">camSettings</span><span class="p">;</span></div><div class='line' id='LC73'><span class="kt">preview_stream_ops_t</span>      <span class="o">*</span><span class="n">mWindow</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC74'><span class="n">android</span><span class="o">::</span><span class="n">sp</span><span class="o">&lt;</span><span class="n">android</span><span class="o">::</span><span class="n">CameraHardwareInterface</span><span class="o">&gt;</span> <span class="n">qCamera</span><span class="p">;</span></div><div class='line' id='LC75'><br/></div><div class='line' id='LC76'><span class="k">static</span> <span class="kt">hw_module_methods_t</span> <span class="n">camera_module_methods</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC77'>&nbsp;&nbsp;&nbsp;<span class="nl">open:</span> <span class="n">qcamera_device_open</span></div><div class='line' id='LC78'><span class="p">};</span></div><div class='line' id='LC79'><br/></div><div class='line' id='LC80'><span class="kt">camera_module_t</span> <span class="n">HAL_MODULE_INFO_SYM</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC81'>&nbsp;&nbsp;&nbsp;<span class="nl">common:</span> <span class="p">{</span></div><div class='line' id='LC82'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">tag:</span> <span class="n">HARDWARE_MODULE_TAG</span><span class="p">,</span></div><div class='line' id='LC83'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">version_major:</span> <span class="mi">1</span><span class="p">,</span></div><div class='line' id='LC84'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">version_minor:</span> <span class="mi">1</span><span class="p">,</span></div><div class='line' id='LC85'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">id:</span> <span class="n">CAMERA_HARDWARE_MODULE_ID</span><span class="p">,</span></div><div class='line' id='LC86'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">name:</span> <span class="s">&quot;Camera wrapper for LGEP350&quot;</span><span class="p">,</span></div><div class='line' id='LC87'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">author:</span> <span class="s">&quot;Raviprasad V Mummidi/PecanCM Team&quot;</span><span class="p">,</span></div><div class='line' id='LC88'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">methods:</span> <span class="o">&amp;</span><span class="n">camera_module_methods</span><span class="p">,</span></div><div class='line' id='LC89'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">dso:</span> <span class="nb">NULL</span><span class="p">,</span></div><div class='line' id='LC90'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">reserved:</span> <span class="p">{</span><span class="mi">0</span><span class="p">},</span></div><div class='line' id='LC91'>&nbsp;&nbsp;&nbsp;<span class="p">},</span></div><div class='line' id='LC92'>&nbsp;&nbsp;&nbsp;<span class="nl">get_number_of_cameras:</span> <span class="n">HAL_getNumberOfCameras</span><span class="p">,</span></div><div class='line' id='LC93'>&nbsp;&nbsp;&nbsp;<span class="nl">get_camera_info:</span> <span class="n">CameraHAL_GetCam_Info</span><span class="p">,</span></div><div class='line' id='LC94'><span class="p">};</span></div><div class='line' id='LC95'><br/></div><div class='line' id='LC96'><span class="kt">int</span> <span class="nf">CameraHAL_GetCam_Info</span><span class="p">(</span><span class="kt">int</span> <span class="n">camera_id</span><span class="p">,</span> <span class="k">struct</span> <span class="n">camera_info</span> <span class="o">*</span><span class="n">info</span><span class="p">)</span></div><div class='line' id='LC97'><span class="p">{</span></div><div class='line' id='LC98'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;CameraHAL_GetCam_Info:</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC99'>&nbsp;&nbsp;&nbsp;<span class="n">HAL_getCameraInfo</span><span class="p">(</span><span class="n">camera_id</span><span class="p">,</span> <span class="p">(</span><span class="k">struct</span> <span class="n">CameraInfo</span><span class="o">*</span><span class="p">)</span> <span class="n">info</span><span class="p">);</span></div><div class='line' id='LC100'>&nbsp;&nbsp;&nbsp;<span class="cm">/* Disregard that... */</span></div><div class='line' id='LC101'>&nbsp;&nbsp;&nbsp;<span class="n">info</span><span class="o">-&gt;</span><span class="n">facing</span>      <span class="o">=</span> <span class="n">CAMERA_FACING_BACK</span><span class="p">;</span></div><div class='line' id='LC102'>&nbsp;&nbsp;&nbsp;<span class="n">info</span><span class="o">-&gt;</span><span class="n">orientation</span> <span class="o">=</span> <span class="mi">90</span><span class="p">;</span></div><div class='line' id='LC103'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">NO_ERROR</span><span class="p">;</span></div><div class='line' id='LC104'><span class="p">}</span></div><div class='line' id='LC105'><br/></div><div class='line' id='LC106'><span class="cm">/* HAL helper functions. */</span></div><div class='line' id='LC107'><span class="kt">void</span> <span class="nf">CameraHAL_NotifyCb</span><span class="p">(</span><span class="kt">int32_t</span> <span class="n">msg_type</span><span class="p">,</span> <span class="kt">int32_t</span> <span class="n">ext1</span><span class="p">,</span></div><div class='line' id='LC108'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int32_t</span> <span class="n">ext2</span><span class="p">,</span> <span class="kt">void</span> <span class="o">*</span><span class="n">user</span><span class="p">)</span></div><div class='line' id='LC109'><span class="p">{</span></div><div class='line' id='LC110'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;CameraHAL_NotifyCb: msg_type:%d ext1:%d ext2:%d user:%p</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC111'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">msg_type</span><span class="p">,</span> <span class="n">ext1</span><span class="p">,</span> <span class="n">ext2</span><span class="p">,</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC112'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">origNotify_cb</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC113'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">origNotify_cb</span><span class="p">(</span><span class="n">msg_type</span><span class="p">,</span> <span class="n">ext1</span><span class="p">,</span> <span class="n">ext2</span><span class="p">,</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC114'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC115'><span class="p">}</span></div><div class='line' id='LC116'><br/></div><div class='line' id='LC117'><span class="kt">bool</span> <span class="nf">CameraHAL_CopyBuffers_Hw</span><span class="p">(</span><span class="kt">int</span> <span class="n">srcFd</span><span class="p">,</span> <span class="kt">int</span> <span class="n">destFd</span><span class="p">,</span></div><div class='line' id='LC118'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">size_t</span> <span class="n">srcOffset</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">destOffset</span><span class="p">,</span></div><div class='line' id='LC119'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">srcFormat</span><span class="p">,</span> <span class="kt">int</span> <span class="n">destFormat</span><span class="p">,</span></div><div class='line' id='LC120'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">x</span><span class="p">,</span> <span class="kt">int</span> <span class="n">y</span><span class="p">,</span> <span class="kt">int</span> <span class="n">w</span><span class="p">,</span> <span class="kt">int</span> <span class="n">h</span><span class="p">)</span></div><div class='line' id='LC121'><span class="p">{</span></div><div class='line' id='LC122'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">blitreq</span> <span class="n">blit</span><span class="p">;</span></div><div class='line' id='LC123'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span>   <span class="n">success</span> <span class="o">=</span> <span class="nb">true</span><span class="p">;</span></div><div class='line' id='LC124'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span>    <span class="n">fb_fd</span> <span class="o">=</span> <span class="n">open</span><span class="p">(</span><span class="s">&quot;/dev/graphics/fb0&quot;</span><span class="p">,</span> <span class="n">O_RDWR</span><span class="p">);</span></div><div class='line' id='LC125'><br/></div><div class='line' id='LC126'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">fb_fd</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC127'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGD</span><span class="p">(</span><span class="s">&quot;CameraHAL_CopyBuffers_Hw: Error opening /dev/graphics/fb0</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC128'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC129'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC130'><br/></div><div class='line' id='LC131'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;CameraHAL_CopyBuffers_Hw: srcFD:%d destFD:%d srcOffset:%#x&quot;</span></div><div class='line' id='LC132'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">&quot; destOffset:%#x x:%d y:%d w:%d h:%d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">srcFd</span><span class="p">,</span> <span class="n">destFd</span><span class="p">,</span> <span class="n">srcOffset</span><span class="p">,</span></div><div class='line' id='LC133'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">destOffset</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">y</span><span class="p">,</span> <span class="n">w</span><span class="p">,</span> <span class="n">h</span><span class="p">);</span></div><div class='line' id='LC134'><br/></div><div class='line' id='LC135'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">memset</span><span class="p">(</span><span class="o">&amp;</span><span class="n">blit</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">blit</span><span class="p">));</span></div><div class='line' id='LC136'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">count</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC137'><br/></div><div class='line' id='LC138'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">flags</span>       <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC139'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">alpha</span>       <span class="o">=</span> <span class="mh">0xff</span><span class="p">;</span></div><div class='line' id='LC140'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">transp_mask</span> <span class="o">=</span> <span class="mh">0xffffffff</span><span class="p">;</span></div><div class='line' id='LC141'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">sharpening_strength</span> <span class="o">=</span> <span class="mi">64</span><span class="p">;</span>  <span class="cm">/* -127 &lt;--&gt; 127, default 64 */</span></div><div class='line' id='LC142'><br/></div><div class='line' id='LC143'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">src</span><span class="p">.</span><span class="n">width</span>     <span class="o">=</span> <span class="n">w</span><span class="p">;</span></div><div class='line' id='LC144'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">src</span><span class="p">.</span><span class="n">height</span>    <span class="o">=</span> <span class="n">h</span><span class="p">;</span></div><div class='line' id='LC145'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">src</span><span class="p">.</span><span class="n">offset</span>    <span class="o">=</span> <span class="n">srcOffset</span><span class="p">;</span></div><div class='line' id='LC146'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">src</span><span class="p">.</span><span class="n">memory_id</span> <span class="o">=</span> <span class="n">srcFd</span><span class="p">;</span></div><div class='line' id='LC147'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">src</span><span class="p">.</span><span class="n">format</span>    <span class="o">=</span> <span class="n">srcFormat</span><span class="p">;</span></div><div class='line' id='LC148'><br/></div><div class='line' id='LC149'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">dst</span><span class="p">.</span><span class="n">width</span>     <span class="o">=</span> <span class="n">w</span><span class="p">;</span></div><div class='line' id='LC150'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">dst</span><span class="p">.</span><span class="n">height</span>    <span class="o">=</span> <span class="n">h</span><span class="p">;</span></div><div class='line' id='LC151'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">dst</span><span class="p">.</span><span class="n">offset</span>    <span class="o">=</span> <span class="n">destOffset</span><span class="p">;</span></div><div class='line' id='LC152'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">dst</span><span class="p">.</span><span class="n">memory_id</span> <span class="o">=</span> <span class="n">destFd</span><span class="p">;</span></div><div class='line' id='LC153'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">dst</span><span class="p">.</span><span class="n">format</span>    <span class="o">=</span> <span class="n">destFormat</span><span class="p">;</span></div><div class='line' id='LC154'><br/></div><div class='line' id='LC155'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">src_rect</span><span class="p">.</span><span class="n">x</span> <span class="o">=</span> <span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">dst_rect</span><span class="p">.</span><span class="n">x</span> <span class="o">=</span> <span class="n">x</span><span class="p">;</span></div><div class='line' id='LC156'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">src_rect</span><span class="p">.</span><span class="n">y</span> <span class="o">=</span> <span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">dst_rect</span><span class="p">.</span><span class="n">y</span> <span class="o">=</span> <span class="n">y</span><span class="p">;</span></div><div class='line' id='LC157'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">src_rect</span><span class="p">.</span><span class="n">w</span> <span class="o">=</span> <span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">dst_rect</span><span class="p">.</span><span class="n">w</span> <span class="o">=</span> <span class="n">w</span><span class="p">;</span></div><div class='line' id='LC158'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">src_rect</span><span class="p">.</span><span class="n">h</span> <span class="o">=</span> <span class="n">blit</span><span class="p">.</span><span class="n">req</span><span class="p">.</span><span class="n">dst_rect</span><span class="p">.</span><span class="n">h</span> <span class="o">=</span> <span class="n">h</span><span class="p">;</span></div><div class='line' id='LC159'><br/></div><div class='line' id='LC160'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">ioctl</span><span class="p">(</span><span class="n">fb_fd</span><span class="p">,</span> <span class="n">MSMFB_BLIT</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">blit</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC161'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;CameraHAL_CopyBuffers_Hw: MSMFB_BLIT failed = %d %s</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC162'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">errno</span><span class="p">,</span> <span class="n">strerror</span><span class="p">(</span><span class="n">errno</span><span class="p">));</span></div><div class='line' id='LC163'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">success</span> <span class="o">=</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC164'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC165'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">close</span><span class="p">(</span><span class="n">fb_fd</span><span class="p">);</span></div><div class='line' id='LC166'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">success</span><span class="p">;</span></div><div class='line' id='LC167'><span class="p">}</span></div><div class='line' id='LC168'><br/></div><div class='line' id='LC169'><span class="kt">void</span> <span class="nf">CameraHal_Decode_Sw</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="o">*</span> <span class="n">rgb</span><span class="p">,</span> <span class="kt">char</span><span class="o">*</span> <span class="n">yuv420sp</span><span class="p">,</span> <span class="kt">int</span> <span class="n">width</span><span class="p">,</span> <span class="kt">int</span> <span class="n">height</span><span class="p">)</span></div><div class='line' id='LC170'><span class="p">{</span></div><div class='line' id='LC171'>&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">frameSize</span> <span class="o">=</span> <span class="n">width</span> <span class="o">*</span> <span class="n">height</span><span class="p">;</span></div><div class='line' id='LC172'><br/></div><div class='line' id='LC173'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">previewEnabled</span><span class="p">())</span> <span class="k">return</span><span class="p">;</span></div><div class='line' id='LC174'><br/></div><div class='line' id='LC175'>&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">j</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span> <span class="n">yp</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">j</span> <span class="o">&lt;</span> <span class="n">height</span><span class="p">;</span> <span class="n">j</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC176'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">uvp</span> <span class="o">=</span> <span class="n">frameSize</span> <span class="o">+</span> <span class="p">(</span><span class="n">j</span> <span class="o">&gt;&gt;</span> <span class="mi">1</span><span class="p">)</span> <span class="o">*</span> <span class="n">width</span><span class="p">,</span> <span class="n">u</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span> <span class="n">v</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC177'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">width</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">,</span> <span class="n">yp</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC178'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">y</span> <span class="o">=</span> <span class="p">(</span><span class="mh">0xff</span> <span class="o">&amp;</span> <span class="p">((</span><span class="kt">int</span><span class="p">)</span> <span class="n">yuv420sp</span><span class="p">[</span><span class="n">yp</span><span class="p">]))</span> <span class="o">-</span> <span class="mi">16</span><span class="p">;</span></div><div class='line' id='LC179'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">y</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="n">y</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC180'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">((</span><span class="n">i</span> <span class="o">&amp;</span> <span class="mi">1</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC181'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">v</span> <span class="o">=</span> <span class="p">(</span><span class="mh">0xff</span> <span class="o">&amp;</span> <span class="n">yuv420sp</span><span class="p">[</span><span class="n">uvp</span><span class="o">++</span><span class="p">])</span> <span class="o">-</span> <span class="mi">128</span><span class="p">;</span></div><div class='line' id='LC182'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">u</span> <span class="o">=</span> <span class="p">(</span><span class="mh">0xff</span> <span class="o">&amp;</span> <span class="n">yuv420sp</span><span class="p">[</span><span class="n">uvp</span><span class="o">++</span><span class="p">])</span> <span class="o">-</span> <span class="mi">128</span><span class="p">;</span></div><div class='line' id='LC183'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC184'><br/></div><div class='line' id='LC185'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">y1192</span> <span class="o">=</span> <span class="mi">1192</span> <span class="o">*</span> <span class="n">y</span><span class="p">;</span></div><div class='line' id='LC186'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">r</span> <span class="o">=</span> <span class="p">(</span><span class="n">y1192</span> <span class="o">+</span> <span class="mi">1634</span> <span class="o">*</span> <span class="n">v</span><span class="p">);</span></div><div class='line' id='LC187'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">g</span> <span class="o">=</span> <span class="p">(</span><span class="n">y1192</span> <span class="o">-</span> <span class="mi">833</span> <span class="o">*</span> <span class="n">v</span> <span class="o">-</span> <span class="mi">400</span> <span class="o">*</span> <span class="n">u</span><span class="p">);</span></div><div class='line' id='LC188'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">b</span> <span class="o">=</span> <span class="p">(</span><span class="n">y1192</span> <span class="o">+</span> <span class="mi">2066</span> <span class="o">*</span> <span class="n">u</span><span class="p">);</span></div><div class='line' id='LC189'><br/></div><div class='line' id='LC190'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">r</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="n">r</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">r</span> <span class="o">&gt;</span> <span class="mi">262143</span><span class="p">)</span> <span class="n">r</span> <span class="o">=</span> <span class="mi">262143</span><span class="p">;</span></div><div class='line' id='LC191'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">g</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="n">g</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">g</span> <span class="o">&gt;</span> <span class="mi">262143</span><span class="p">)</span> <span class="n">g</span> <span class="o">=</span> <span class="mi">262143</span><span class="p">;</span></div><div class='line' id='LC192'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">b</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="n">b</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">b</span> <span class="o">&gt;</span> <span class="mi">262143</span><span class="p">)</span> <span class="n">b</span> <span class="o">=</span> <span class="mi">262143</span><span class="p">;</span></div><div class='line' id='LC193'><br/></div><div class='line' id='LC194'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">rgb</span><span class="p">[</span><span class="n">yp</span><span class="p">]</span> <span class="o">=</span> <span class="mh">0xff000000</span> <span class="o">|</span> <span class="p">((</span><span class="n">b</span> <span class="o">&lt;&lt;</span> <span class="mi">6</span><span class="p">)</span> <span class="o">&amp;</span> <span class="mh">0xff0000</span><span class="p">)</span> <span class="o">|</span></div><div class='line' id='LC195'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">((</span><span class="n">g</span> <span class="o">&gt;&gt;</span> <span class="mi">2</span><span class="p">)</span> <span class="o">&amp;</span> <span class="mh">0xff00</span><span class="p">)</span> <span class="o">|</span> <span class="p">((</span><span class="n">r</span> <span class="o">&gt;&gt;</span> <span class="mi">10</span><span class="p">)</span> <span class="o">&amp;</span> <span class="mh">0xff</span><span class="p">);</span></div><div class='line' id='LC196'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC197'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC198'><span class="p">}</span></div><div class='line' id='LC199'><br/></div><div class='line' id='LC200'><br/></div><div class='line' id='LC201'><br/></div><div class='line' id='LC202'><span class="kt">void</span> <span class="nf">CameraHAL_CopyBuffers_Sw</span><span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="n">dest</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">src</span><span class="p">,</span> <span class="kt">int</span> <span class="n">size</span><span class="p">)</span></div><div class='line' id='LC203'><span class="p">{</span></div><div class='line' id='LC204'>&nbsp;&nbsp;&nbsp;<span class="kt">int</span>       <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC205'>&nbsp;&nbsp;&nbsp;<span class="kt">int</span>       <span class="n">numWords</span>  <span class="o">=</span> <span class="n">size</span> <span class="o">/</span> <span class="k">sizeof</span><span class="p">(</span><span class="kt">unsigned</span><span class="p">);</span></div><div class='line' id='LC206'>&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="o">*</span><span class="n">srcWords</span>  <span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="o">*</span><span class="p">)</span><span class="n">src</span><span class="p">;</span></div><div class='line' id='LC207'>&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="o">*</span><span class="n">destWords</span> <span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="o">*</span><span class="p">)</span><span class="n">dest</span><span class="p">;</span></div><div class='line' id='LC208'><br/></div><div class='line' id='LC209'>&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">numWords</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC210'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">((</span><span class="n">i</span> <span class="o">%</span> <span class="mi">8</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="p">(</span><span class="n">i</span> <span class="o">+</span> <span class="mi">8</span><span class="p">)</span> <span class="o">&lt;</span> <span class="n">numWords</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC211'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__builtin_prefetch</span><span class="p">(</span><span class="n">srcWords</span>  <span class="o">+</span> <span class="mi">8</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC212'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__builtin_prefetch</span><span class="p">(</span><span class="n">destWords</span> <span class="o">+</span> <span class="mi">8</span><span class="p">,</span> <span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC213'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC214'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span><span class="n">destWords</span><span class="o">++</span> <span class="o">=</span> <span class="o">*</span><span class="n">srcWords</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC215'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC216'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">__builtin_expect</span><span class="p">((</span><span class="n">size</span> <span class="o">-</span> <span class="p">(</span><span class="n">numWords</span> <span class="o">*</span> <span class="k">sizeof</span><span class="p">(</span><span class="kt">unsigned</span><span class="p">)))</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC217'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">numBytes</span> <span class="o">=</span> <span class="n">size</span> <span class="o">-</span> <span class="p">(</span><span class="n">numWords</span> <span class="o">*</span> <span class="k">sizeof</span><span class="p">(</span><span class="kt">unsigned</span><span class="p">));</span></div><div class='line' id='LC218'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">char</span> <span class="o">*</span><span class="n">destBytes</span> <span class="o">=</span> <span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="p">)</span><span class="n">destWords</span><span class="p">;</span></div><div class='line' id='LC219'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">char</span> <span class="o">*</span><span class="n">srcBytes</span>  <span class="o">=</span> <span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="p">)</span><span class="n">srcWords</span><span class="p">;</span></div><div class='line' id='LC220'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">numBytes</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC221'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span><span class="n">destBytes</span><span class="o">++</span> <span class="o">=</span> <span class="o">*</span><span class="n">srcBytes</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC222'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC223'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC224'><span class="p">}</span></div><div class='line' id='LC225'><br/></div><div class='line' id='LC226'><span class="kt">void</span> <span class="nf">CameraHAL_HandlePreviewData</span><span class="p">(</span><span class="k">const</span> <span class="n">android</span><span class="o">::</span><span class="n">sp</span><span class="o">&lt;</span><span class="n">android</span><span class="o">::</span><span class="n">IMemory</span><span class="o">&gt;&amp;</span> <span class="n">dataPtr</span><span class="p">,</span></div><div class='line' id='LC227'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">preview_stream_ops_t</span> <span class="o">*</span><span class="n">mWindow</span><span class="p">,</span></div><div class='line' id='LC228'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">camera_request_memory</span> <span class="n">getMemory</span><span class="p">,</span></div><div class='line' id='LC229'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int32_t</span> <span class="n">previewWidth</span><span class="p">,</span> <span class="kt">int32_t</span> <span class="n">previewHeight</span><span class="p">)</span></div><div class='line' id='LC230'><span class="p">{</span></div><div class='line' id='LC231'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">mWindow</span> <span class="o">!=</span> <span class="nb">NULL</span> <span class="o">&amp;&amp;</span> <span class="n">getMemory</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC232'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">ssize_t</span>  <span class="n">offset</span><span class="p">;</span></div><div class='line' id='LC233'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">size_t</span>   <span class="n">size</span><span class="p">;</span></div><div class='line' id='LC234'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int32_t</span>  <span class="n">previewFormat</span> <span class="o">=</span> <span class="n">MDP_Y_CBCR_H2V2</span><span class="p">;</span></div><div class='line' id='LC235'><br/></div><div class='line' id='LC236'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">android</span><span class="o">::</span><span class="kt">status_t</span> <span class="n">retVal</span><span class="p">;</span></div><div class='line' id='LC237'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">android</span><span class="o">::</span><span class="n">sp</span><span class="o">&lt;</span><span class="n">android</span><span class="o">::</span><span class="n">IMemoryHeap</span><span class="o">&gt;</span> <span class="n">mHeap</span> <span class="o">=</span> <span class="n">dataPtr</span><span class="o">-&gt;</span><span class="n">getMemory</span><span class="p">(</span><span class="o">&amp;</span><span class="n">offset</span><span class="p">,</span></div><div class='line' id='LC238'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">&amp;</span><span class="n">size</span><span class="p">);</span></div><div class='line' id='LC239'><br/></div><div class='line' id='LC240'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;CameraHAL_HandlePreviewData: previewWidth:%d previewHeight:%d &quot;</span></div><div class='line' id='LC241'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">&quot;offset:%#x size:%#x base:%p</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">previewWidth</span><span class="p">,</span> <span class="n">previewHeight</span><span class="p">,</span></div><div class='line' id='LC242'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">(</span><span class="kt">unsigned</span><span class="p">)</span><span class="n">offset</span><span class="p">,</span> <span class="n">size</span><span class="p">,</span> <span class="n">mHeap</span> <span class="o">!=</span> <span class="nb">NULL</span> <span class="o">?</span> <span class="n">mHeap</span><span class="o">-&gt;</span><span class="n">base</span><span class="p">()</span> <span class="o">:</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC243'><br/></div><div class='line' id='LC244'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mWindow</span><span class="o">-&gt;</span><span class="n">set_usage</span><span class="p">(</span><span class="n">mWindow</span><span class="p">,</span> <span class="n">GRALLOC_USAGE_PRIVATE_0</span> <span class="o">|</span></div><div class='line' id='LC245'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">GRALLOC_USAGE_SW_READ_OFTEN</span><span class="p">);</span></div><div class='line' id='LC246'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">retVal</span> <span class="o">=</span> <span class="n">mWindow</span><span class="o">-&gt;</span><span class="n">set_buffers_geometry</span><span class="p">(</span><span class="n">mWindow</span><span class="p">,</span></div><div class='line' id='LC247'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">previewWidth</span><span class="p">,</span> <span class="n">previewHeight</span><span class="p">,</span></div><div class='line' id='LC248'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">HAL_PIXEL_FORMAT_YCrCb_420_SP</span><span class="p">);</span></div><div class='line' id='LC249'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">retVal</span> <span class="o">==</span> <span class="n">NO_ERROR</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC250'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int32_t</span>          <span class="n">stride</span><span class="p">;</span></div><div class='line' id='LC251'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">buffer_handle_t</span> <span class="o">*</span><span class="n">bufHandle</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC252'><br/></div><div class='line' id='LC253'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;CameraHAL_HandlePreviewData: dequeueing buffer</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC254'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">retVal</span> <span class="o">=</span> <span class="n">mWindow</span><span class="o">-&gt;</span><span class="n">dequeue_buffer</span><span class="p">(</span><span class="n">mWindow</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">bufHandle</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">stride</span><span class="p">);</span></div><div class='line' id='LC255'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">retVal</span> <span class="o">==</span> <span class="n">NO_ERROR</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC256'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">retVal</span> <span class="o">=</span> <span class="n">mWindow</span><span class="o">-&gt;</span><span class="n">lock_buffer</span><span class="p">(</span><span class="n">mWindow</span><span class="p">,</span> <span class="n">bufHandle</span><span class="p">);</span></div><div class='line' id='LC257'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">retVal</span> <span class="o">==</span> <span class="n">NO_ERROR</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC258'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">private_handle_t</span> <span class="k">const</span> <span class="o">*</span><span class="n">privHandle</span> <span class="o">=</span></div><div class='line' id='LC259'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">reinterpret_cast</span><span class="o">&lt;</span><span class="kt">private_handle_t</span> <span class="k">const</span> <span class="o">*&gt;</span><span class="p">(</span><span class="o">*</span><span class="n">bufHandle</span><span class="p">);</span></div><div class='line' id='LC260'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CameraHAL_CopyBuffers_Hw</span><span class="p">(</span><span class="n">mHeap</span><span class="o">-&gt;</span><span class="n">getHeapID</span><span class="p">(),</span> <span class="n">privHandle</span><span class="o">-&gt;</span><span class="n">fd</span><span class="p">,</span></div><div class='line' id='LC261'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">offset</span><span class="p">,</span> <span class="n">privHandle</span><span class="o">-&gt;</span><span class="n">offset</span><span class="p">,</span></div><div class='line' id='LC262'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">previewFormat</span><span class="p">,</span> <span class="n">previewFormat</span><span class="p">,</span></div><div class='line' id='LC263'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">previewWidth</span><span class="p">,</span></div><div class='line' id='LC264'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">previewHeight</span><span class="p">);</span></div><div class='line' id='LC265'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mWindow</span><span class="o">-&gt;</span><span class="n">enqueue_buffer</span><span class="p">(</span><span class="n">mWindow</span><span class="p">,</span> <span class="n">bufHandle</span><span class="p">);</span></div><div class='line' id='LC266'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;CameraHAL_HandlePreviewData: enqueued buffer</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC267'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC268'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGE</span><span class="p">(</span><span class="s">&quot;CameraHAL_HandlePreviewData: ERROR locking the buffer</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC269'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mWindow</span><span class="o">-&gt;</span><span class="n">cancel_buffer</span><span class="p">(</span><span class="n">mWindow</span><span class="p">,</span> <span class="n">bufHandle</span><span class="p">);</span></div><div class='line' id='LC270'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC271'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC272'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGE</span><span class="p">(</span><span class="s">&quot;CameraHAL_HandlePreviewData: ERROR dequeueing the buffer</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC273'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC274'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC275'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC276'><span class="p">}</span></div><div class='line' id='LC277'><br/></div><div class='line' id='LC278'><span class="kt">camera_memory_t</span> <span class="o">*</span></div><div class='line' id='LC279'><span class="nf">CameraHAL_GenClientData</span><span class="p">(</span><span class="k">const</span> <span class="n">android</span><span class="o">::</span><span class="n">sp</span><span class="o">&lt;</span><span class="n">android</span><span class="o">::</span><span class="n">IMemory</span><span class="o">&gt;</span> <span class="o">&amp;</span><span class="n">dataPtr</span><span class="p">,</span></div><div class='line' id='LC280'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">camera_request_memory</span> <span class="n">reqClientMemory</span><span class="p">,</span></div><div class='line' id='LC281'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="o">*</span><span class="n">user</span><span class="p">)</span></div><div class='line' id='LC282'><span class="p">{</span></div><div class='line' id='LC283'>&nbsp;&nbsp;&nbsp;<span class="kt">ssize_t</span>          <span class="n">offset</span><span class="p">;</span></div><div class='line' id='LC284'>&nbsp;&nbsp;&nbsp;<span class="kt">size_t</span>           <span class="n">size</span><span class="p">;</span></div><div class='line' id='LC285'>&nbsp;&nbsp;&nbsp;<span class="kt">camera_memory_t</span> <span class="o">*</span><span class="n">clientData</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC286'><br/></div><div class='line' id='LC287'>&nbsp;&nbsp;&nbsp;<span class="n">android</span><span class="o">::</span><span class="n">sp</span><span class="o">&lt;</span><span class="n">android</span><span class="o">::</span><span class="n">IMemoryHeap</span><span class="o">&gt;</span> <span class="n">mHeap</span> <span class="o">=</span> <span class="n">dataPtr</span><span class="o">-&gt;</span><span class="n">getMemory</span><span class="p">(</span><span class="o">&amp;</span><span class="n">offset</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">size</span><span class="p">);</span></div><div class='line' id='LC288'><br/></div><div class='line' id='LC289'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;CameraHAL_GenClientData: offset:%#x size:%#x base:%p</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC290'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">(</span><span class="kt">unsigned</span><span class="p">)</span><span class="n">offset</span><span class="p">,</span> <span class="n">size</span><span class="p">,</span> <span class="n">mHeap</span> <span class="o">!=</span> <span class="nb">NULL</span> <span class="o">?</span> <span class="n">mHeap</span><span class="o">-&gt;</span><span class="n">base</span><span class="p">()</span> <span class="o">:</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC291'><br/></div><div class='line' id='LC292'>&nbsp;&nbsp;&nbsp;<span class="n">clientData</span> <span class="o">=</span> <span class="n">reqClientMemory</span><span class="p">(</span><span class="o">-</span><span class="mi">1</span><span class="p">,</span> <span class="n">size</span><span class="p">,</span> <span class="mi">1</span><span class="p">,</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC293'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">clientData</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC294'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">memcpy</span><span class="p">(</span><span class="n">clientData</span><span class="o">-&gt;</span><span class="n">data</span><span class="p">,</span> <span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="p">)(</span><span class="n">mHeap</span><span class="o">-&gt;</span><span class="n">base</span><span class="p">())</span> <span class="o">+</span> <span class="n">offset</span><span class="p">,</span> <span class="n">size</span><span class="p">);</span></div><div class='line' id='LC295'>&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC296'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;CameraHAL_GenClientData: ERROR allocating memory from client</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC297'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC298'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">clientData</span><span class="p">;</span></div><div class='line' id='LC299'><span class="p">}</span></div><div class='line' id='LC300'><br/></div><div class='line' id='LC301'><span class="kt">void</span> <span class="nf">CameraHAL_DataCb</span><span class="p">(</span><span class="kt">int32_t</span> <span class="n">msg_type</span><span class="p">,</span> <span class="k">const</span> <span class="n">android</span><span class="o">::</span><span class="n">sp</span><span class="o">&lt;</span><span class="n">android</span><span class="o">::</span><span class="n">IMemory</span><span class="o">&gt;&amp;</span> <span class="n">dataPtr</span><span class="p">,</span></div><div class='line' id='LC302'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="o">*</span><span class="n">user</span><span class="p">)</span></div><div class='line' id='LC303'><span class="p">{</span></div><div class='line' id='LC304'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;CameraHAL_DataCb: msg_type:%d user:%p</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">msg_type</span><span class="p">,</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC305'><br/></div><div class='line' id='LC306'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">((</span><span class="n">msg_type</span> <span class="o">!=</span> <span class="n">CAMERA_MSG_PREVIEW_FRAME</span> <span class="o">||</span> <span class="n">externallyRequestedFrames</span><span class="p">)</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC307'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">origData_cb</span> <span class="o">!=</span> <span class="nb">NULL</span> <span class="o">&amp;&amp;</span> <span class="n">origCamReqMemory</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC308'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">camera_memory_t</span> <span class="o">*</span><span class="n">clientData</span> <span class="o">=</span> <span class="n">CameraHAL_GenClientData</span><span class="p">(</span><span class="n">dataPtr</span><span class="p">,</span></div><div class='line' id='LC309'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">origCamReqMemory</span><span class="p">,</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC310'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">clientData</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC311'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;CameraHAL_DataCb: Posting %d data to client</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span><span class="n">msg_type</span><span class="p">);</span></div><div class='line' id='LC312'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">origData_cb</span><span class="p">(</span><span class="n">msg_type</span><span class="p">,</span> <span class="n">clientData</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC313'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">clientData</span><span class="o">-&gt;</span><span class="n">release</span><span class="p">(</span><span class="n">clientData</span><span class="p">);</span></div><div class='line' id='LC314'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC315'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC316'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">msg_type</span> <span class="o">==</span> <span class="n">CAMERA_MSG_PREVIEW_FRAME</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC317'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int32_t</span> <span class="n">previewWidth</span><span class="p">,</span> <span class="n">previewHeight</span><span class="p">;</span></div><div class='line' id='LC318'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span> <span class="n">hwParameters</span> <span class="o">=</span> <span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">getParameters</span><span class="p">();</span></div><div class='line' id='LC319'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">hwParameters</span><span class="p">.</span><span class="n">getPreviewSize</span><span class="p">(</span><span class="o">&amp;</span><span class="n">previewWidth</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">previewHeight</span><span class="p">);</span></div><div class='line' id='LC320'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CameraHAL_HandlePreviewData</span><span class="p">(</span><span class="n">dataPtr</span><span class="p">,</span> <span class="n">mWindow</span><span class="p">,</span> <span class="n">origCamReqMemory</span><span class="p">,</span></div><div class='line' id='LC321'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">previewWidth</span><span class="p">,</span> <span class="n">previewHeight</span><span class="p">);</span></div><div class='line' id='LC322'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC323'><span class="p">}</span></div><div class='line' id='LC324'><br/></div><div class='line' id='LC325'><span class="kt">void</span> <span class="nf">CameraHAL_DataTSCb</span><span class="p">(</span><span class="kt">nsecs_t</span> <span class="n">timestamp</span><span class="p">,</span> <span class="kt">int32_t</span> <span class="n">msg_type</span><span class="p">,</span></div><div class='line' id='LC326'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">android</span><span class="o">::</span><span class="n">sp</span><span class="o">&lt;</span><span class="n">android</span><span class="o">::</span><span class="n">IMemory</span><span class="o">&gt;&amp;</span> <span class="n">dataPtr</span><span class="p">,</span> <span class="kt">void</span> <span class="o">*</span><span class="n">user</span><span class="p">)</span></div><div class='line' id='LC327'><span class="p">{</span></div><div class='line' id='LC328'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGD</span><span class="p">(</span><span class="s">&quot;CameraHAL_DataTSCb: timestamp:%lld now:%lld msg_type:%d user:%p</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC329'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">timestamp</span> <span class="o">/</span><span class="mi">1000</span><span class="p">,</span> <span class="n">systemTime</span><span class="p">(),</span> <span class="n">msg_type</span><span class="p">,</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC330'><br/></div><div class='line' id='LC331'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">origDataTS_cb</span> <span class="o">!=</span> <span class="nb">NULL</span> <span class="o">&amp;&amp;</span> <span class="n">origCamReqMemory</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC332'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">camera_memory_t</span> <span class="o">*</span><span class="n">clientData</span> <span class="o">=</span> <span class="n">CameraHAL_GenClientData</span><span class="p">(</span><span class="n">dataPtr</span><span class="p">,</span></div><div class='line' id='LC333'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">origCamReqMemory</span><span class="p">,</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC334'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">clientData</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC335'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;CameraHAL_DataTSCb: Posting data to client timestamp:%lld</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC336'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">systemTime</span><span class="p">());</span></div><div class='line' id='LC337'><br/></div><div class='line' id='LC338'>	 <span class="n">sentFrames</span><span class="p">.</span><span class="n">push_back</span><span class="p">(</span><span class="n">clientData</span><span class="p">);</span></div><div class='line' id='LC339'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">origDataTS_cb</span><span class="p">(</span><span class="n">timestamp</span><span class="p">,</span> <span class="n">msg_type</span><span class="p">,</span> <span class="n">sentFrames</span><span class="p">.</span><span class="n">top</span><span class="p">(),</span> <span class="mi">0</span><span class="p">,</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC340'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">releaseRecordingFrame</span><span class="p">(</span><span class="n">dataPtr</span><span class="p">);</span></div><div class='line' id='LC341'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC342'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGD</span><span class="p">(</span><span class="s">&quot;CameraHAL_DataTSCb: ERROR allocating memory from client</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC343'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC344'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC345'><span class="p">}</span></div><div class='line' id='LC346'><br/></div><div class='line' id='LC347'><span class="kt">void</span> <span class="nf">CameraHAL_FixupParams</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span> <span class="o">&amp;</span><span class="n">settings</span><span class="p">)</span></div><div class='line' id='LC348'><span class="p">{</span></div><div class='line' id='LC349'>&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">preview_sizes</span> <span class="o">=</span></div><div class='line' id='LC350'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">&quot;640x480,576x432,480x320,384x288,352x288,320x240,240x160,176x144&quot;</span><span class="p">;</span></div><div class='line' id='LC351'>&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">video_sizes</span> <span class="o">=</span></div><div class='line' id='LC352'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">&quot;640x480,352x288,320x240,176x144&quot;</span><span class="p">;</span></div><div class='line' id='LC353'>&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">preferred_size</span>       <span class="o">=</span> <span class="s">&quot;480x320&quot;</span><span class="p">;</span></div><div class='line' id='LC354'>&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">preview_frame_rates</span>  <span class="o">=</span> <span class="s">&quot;10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25&quot;</span><span class="p">;</span></div><div class='line' id='LC355'>&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">preferred_frame_rate</span> <span class="o">=</span> <span class="s">&quot;15&quot;</span><span class="p">;</span></div><div class='line' id='LC356'>&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">frame_rate_range</span>     <span class="o">=</span> <span class="s">&quot;(10,25)&quot;</span><span class="p">;</span></div><div class='line' id='LC357'>&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">preferred_horizontal_viewing_angle</span> <span class="o">=</span> <span class="s">&quot;51.2&quot;</span><span class="p">;</span></div><div class='line' id='LC358'>&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">preferred_vertical_viewing_angle</span> <span class="o">=</span> <span class="s">&quot;39.4&quot;</span><span class="p">;</span></div><div class='line' id='LC359'><br/></div><div class='line' id='LC360'>&nbsp;&nbsp;&nbsp;<span class="n">settings</span><span class="p">.</span><span class="n">set</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_VIDEO_FRAME_FORMAT</span><span class="p">,</span></div><div class='line' id='LC361'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">PIXEL_FORMAT_YUV420SP</span><span class="p">);</span></div><div class='line' id='LC362'><br/></div><div class='line' id='LC363'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">settings</span><span class="p">.</span><span class="n">get</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_SUPPORTED_PREVIEW_SIZES</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC364'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">settings</span><span class="p">.</span><span class="n">set</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_SUPPORTED_PREVIEW_SIZES</span><span class="p">,</span></div><div class='line' id='LC365'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">preview_sizes</span><span class="p">);</span></div><div class='line' id='LC366'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC367'><br/></div><div class='line' id='LC368'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">settings</span><span class="p">.</span><span class="n">get</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_SUPPORTED_VIDEO_SIZES</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC369'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">settings</span><span class="p">.</span><span class="n">set</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_SUPPORTED_VIDEO_SIZES</span><span class="p">,</span></div><div class='line' id='LC370'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">video_sizes</span><span class="p">);</span></div><div class='line' id='LC371'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC372'><br/></div><div class='line' id='LC373'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">settings</span><span class="p">.</span><span class="n">get</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_VIDEO_SIZE</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC374'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">settings</span><span class="p">.</span><span class="n">set</span><span class="p">(</span><span class="s">&quot;record-size&quot;</span><span class="p">,</span> <span class="n">preferred_size</span><span class="p">);</span></div><div class='line' id='LC375'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">settings</span><span class="p">.</span><span class="n">set</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_VIDEO_SIZE</span><span class="p">,</span> <span class="n">preferred_size</span><span class="p">);</span></div><div class='line' id='LC376'>&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC377'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">settings</span><span class="p">.</span><span class="n">set</span><span class="p">(</span><span class="s">&quot;record-size&quot;</span><span class="p">,</span> <span class="n">settings</span><span class="p">.</span><span class="n">get</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_VIDEO_SIZE</span><span class="p">));</span></div><div class='line' id='LC378'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC379'><br/></div><div class='line' id='LC380'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">settings</span><span class="p">.</span><span class="n">get</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_PREFERRED_PREVIEW_SIZE_FOR_VIDEO</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC381'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">settings</span><span class="p">.</span><span class="n">set</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_PREFERRED_PREVIEW_SIZE_FOR_VIDEO</span><span class="p">,</span></div><div class='line' id='LC382'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">preferred_size</span><span class="p">);</span></div><div class='line' id='LC383'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC384'><br/></div><div class='line' id='LC385'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">settings</span><span class="p">.</span><span class="n">get</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_SUPPORTED_PREVIEW_FRAME_RATES</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC386'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">settings</span><span class="p">.</span><span class="n">set</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_SUPPORTED_PREVIEW_FRAME_RATES</span><span class="p">,</span></div><div class='line' id='LC387'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">preview_frame_rates</span><span class="p">);</span></div><div class='line' id='LC388'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC389'><br/></div><div class='line' id='LC390'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">settings</span><span class="p">.</span><span class="n">get</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_PREVIEW_FRAME_RATE</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC391'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">settings</span><span class="p">.</span><span class="n">set</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_PREVIEW_FRAME_RATE</span><span class="p">,</span></div><div class='line' id='LC392'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">preferred_frame_rate</span><span class="p">);</span></div><div class='line' id='LC393'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC394'><br/></div><div class='line' id='LC395'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">settings</span><span class="p">.</span><span class="n">get</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_SUPPORTED_PREVIEW_FPS_RANGE</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC396'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGD</span><span class="p">(</span><span class="s">&quot;Setting KEY_PREVIEW_FPS_RANGE: %s</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">frame_rate_range</span><span class="p">);</span></div><div class='line' id='LC397'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">settings</span><span class="p">.</span><span class="n">set</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_SUPPORTED_PREVIEW_FPS_RANGE</span><span class="p">,</span></div><div class='line' id='LC398'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">frame_rate_range</span><span class="p">);</span></div><div class='line' id='LC399'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC400'><br/></div><div class='line' id='LC401'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">settings</span><span class="p">.</span><span class="n">get</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_HORIZONTAL_VIEW_ANGLE</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC402'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">settings</span><span class="p">.</span><span class="n">set</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_HORIZONTAL_VIEW_ANGLE</span><span class="p">,</span></div><div class='line' id='LC403'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">preferred_horizontal_viewing_angle</span><span class="p">);</span></div><div class='line' id='LC404'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC405'><br/></div><div class='line' id='LC406'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">settings</span><span class="p">.</span><span class="n">get</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_VERTICAL_VIEW_ANGLE</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC407'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">settings</span><span class="p">.</span><span class="n">set</span><span class="p">(</span><span class="n">android</span><span class="o">::</span><span class="n">CameraParameters</span><span class="o">::</span><span class="n">KEY_VERTICAL_VIEW_ANGLE</span><span class="p">,</span></div><div class='line' id='LC408'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">preferred_vertical_viewing_angle</span><span class="p">);</span></div><div class='line' id='LC409'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC410'><span class="p">}</span></div><div class='line' id='LC411'><br/></div><div class='line' id='LC412'><span class="k">static</span> <span class="kt">void</span> <span class="nf">releaseCameraFrames</span><span class="p">()</span></div><div class='line' id='LC413'><span class="p">{</span></div><div class='line' id='LC414'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">android</span><span class="o">::</span><span class="n">Vector</span><span class="o">&lt;</span><span class="kt">camera_memory_t</span><span class="o">*&gt;::</span><span class="n">iterator</span> <span class="n">it</span><span class="p">;</span></div><div class='line' id='LC415'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="n">it</span> <span class="o">=</span> <span class="n">sentFrames</span><span class="p">.</span><span class="n">begin</span><span class="p">();</span> <span class="n">it</span> <span class="o">!=</span> <span class="n">sentFrames</span><span class="p">.</span><span class="n">end</span><span class="p">();</span> <span class="o">++</span><span class="n">it</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC416'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">(</span><span class="o">*</span><span class="n">it</span><span class="p">)</span><span class="o">-&gt;</span><span class="n">release</span><span class="p">(</span><span class="o">*</span><span class="n">it</span><span class="p">);</span></div><div class='line' id='LC417'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC418'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sentFrames</span><span class="p">.</span><span class="n">clear</span><span class="p">();</span></div><div class='line' id='LC419'><span class="p">}</span></div><div class='line' id='LC420'><br/></div><div class='line' id='LC421'><span class="cm">/* Hardware Camera interface handlers. */</span></div><div class='line' id='LC422'><span class="kt">int</span> <span class="nf">qcamera_set_preview_window</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">,</span></div><div class='line' id='LC423'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">preview_stream_ops</span> <span class="o">*</span><span class="n">window</span><span class="p">)</span></div><div class='line' id='LC424'><span class="p">{</span></div><div class='line' id='LC425'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_set_preview_window : Window :%p</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">window</span><span class="p">);</span></div><div class='line' id='LC426'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">device</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC427'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGE</span><span class="p">(</span><span class="s">&quot;qcamera_set_preview_window : Invalid device.</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC428'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC429'>&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC430'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_set_preview_window : window :%p</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">window</span><span class="p">);</span></div><div class='line' id='LC431'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mWindow</span> <span class="o">=</span> <span class="n">window</span><span class="p">;</span></div><div class='line' id='LC432'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC433'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC434'><span class="p">}</span></div><div class='line' id='LC435'><br/></div><div class='line' id='LC436'><span class="kt">void</span> <span class="nf">qcamera_set_callbacks</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">,</span></div><div class='line' id='LC437'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">camera_notify_callback</span> <span class="n">notify_cb</span><span class="p">,</span></div><div class='line' id='LC438'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">camera_data_callback</span> <span class="n">data_cb</span><span class="p">,</span></div><div class='line' id='LC439'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">camera_data_timestamp_callback</span> <span class="n">data_cb_timestamp</span><span class="p">,</span></div><div class='line' id='LC440'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">camera_request_memory</span> <span class="n">get_memory</span><span class="p">,</span> <span class="kt">void</span> <span class="o">*</span><span class="n">user</span><span class="p">)</span></div><div class='line' id='LC441'><span class="p">{</span></div><div class='line' id='LC442'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_set_callbacks: notify_cb: %p, data_cb: %p &quot;</span></div><div class='line' id='LC443'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="s">&quot;data_cb_timestamp: %p, get_memory: %p, user :%p&quot;</span><span class="p">,</span></div><div class='line' id='LC444'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">notify_cb</span><span class="p">,</span> <span class="n">data_cb</span><span class="p">,</span> <span class="n">data_cb_timestamp</span><span class="p">,</span> <span class="n">get_memory</span><span class="p">,</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC445'><br/></div><div class='line' id='LC446'>&nbsp;&nbsp;&nbsp;<span class="n">origNotify_cb</span>    <span class="o">=</span> <span class="n">notify_cb</span><span class="p">;</span></div><div class='line' id='LC447'>&nbsp;&nbsp;&nbsp;<span class="n">origData_cb</span>      <span class="o">=</span> <span class="n">data_cb</span><span class="p">;</span></div><div class='line' id='LC448'>&nbsp;&nbsp;&nbsp;<span class="n">origDataTS_cb</span>    <span class="o">=</span> <span class="n">data_cb_timestamp</span><span class="p">;</span></div><div class='line' id='LC449'>&nbsp;&nbsp;&nbsp;<span class="n">origCamReqMemory</span> <span class="o">=</span> <span class="n">get_memory</span><span class="p">;</span></div><div class='line' id='LC450'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">setCallbacks</span><span class="p">(</span><span class="n">CameraHAL_NotifyCb</span><span class="p">,</span> <span class="n">CameraHAL_DataCb</span><span class="p">,</span></div><div class='line' id='LC451'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CameraHAL_DataTSCb</span><span class="p">,</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC452'><span class="p">}</span></div><div class='line' id='LC453'><br/></div><div class='line' id='LC454'><span class="kt">void</span> <span class="nf">qcamera_enable_msg_type</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">,</span> <span class="kt">int32_t</span> <span class="n">msg_type</span><span class="p">)</span></div><div class='line' id='LC455'><span class="p">{</span></div><div class='line' id='LC456'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">msg_type</span> <span class="o">&amp;</span> <span class="n">CAMERA_MSG_PREVIEW_FRAME</span><span class="p">)</span></div><div class='line' id='LC457'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">externallyRequestedFrames</span> <span class="o">=</span> <span class="nb">true</span><span class="p">;</span></div><div class='line' id='LC458'><br/></div><div class='line' id='LC459'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">enableMsgType</span><span class="p">(</span><span class="n">msg_type</span><span class="p">);</span></div><div class='line' id='LC460'><span class="p">}</span></div><div class='line' id='LC461'><br/></div><div class='line' id='LC462'><span class="kt">void</span> <span class="nf">qcamera_disable_msg_type</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">,</span> <span class="kt">int32_t</span> <span class="n">msg_type</span><span class="p">)</span></div><div class='line' id='LC463'><span class="p">{</span></div><div class='line' id='LC464'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">msg_type</span> <span class="o">&amp;</span> <span class="n">CAMERA_MSG_PREVIEW_FRAME</span><span class="p">)</span></div><div class='line' id='LC465'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">externallyRequestedFrames</span> <span class="o">=</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC466'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_disable_msg_type: msg_type:%d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">msg_type</span><span class="p">);</span></div><div class='line' id='LC467'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">msg_type</span> <span class="o">==</span> <span class="n">CAMERA_MSG_VIDEO_FRAME</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC468'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ALOGW</span><span class="p">(</span><span class="s">&quot;%s: releasing stale video frames&quot;</span><span class="p">,</span> <span class="n">__FUNCTION__</span><span class="p">);</span></div><div class='line' id='LC469'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">releaseCameraFrames</span><span class="p">();</span></div><div class='line' id='LC470'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC471'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">disableMsgType</span><span class="p">(</span><span class="n">msg_type</span><span class="p">);</span></div><div class='line' id='LC472'><span class="p">}</span></div><div class='line' id='LC473'><br/></div><div class='line' id='LC474'><span class="kt">int</span> <span class="nf">qcamera_msg_type_enabled</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">,</span> <span class="kt">int32_t</span> <span class="n">msg_type</span><span class="p">)</span></div><div class='line' id='LC475'><span class="p">{</span></div><div class='line' id='LC476'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_msg_type_enabled: msg_type:%d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">msg_type</span><span class="p">);</span></div><div class='line' id='LC477'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">msgTypeEnabled</span><span class="p">(</span><span class="n">msg_type</span><span class="p">);</span></div><div class='line' id='LC478'><span class="p">}</span></div><div class='line' id='LC479'><br/></div><div class='line' id='LC480'><span class="kt">int</span> <span class="nf">qcamera_start_preview</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">)</span></div><div class='line' id='LC481'><span class="p">{</span></div><div class='line' id='LC482'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_start_preview: Enabling CAMERA_MSG_PREVIEW_FRAME</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC483'><br/></div><div class='line' id='LC484'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">enableMsgType</span><span class="p">(</span><span class="n">CAMERA_MSG_PREVIEW_FRAME</span><span class="p">);</span></div><div class='line' id='LC485'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">startPreview</span><span class="p">();</span></div><div class='line' id='LC486'><span class="p">}</span></div><div class='line' id='LC487'><br/></div><div class='line' id='LC488'><span class="kt">void</span> <span class="nf">qcamera_stop_preview</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">)</span></div><div class='line' id='LC489'><span class="p">{</span></div><div class='line' id='LC490'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_stop_preview:</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC491'><br/></div><div class='line' id='LC492'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">disableMsgType</span><span class="p">(</span><span class="n">CAMERA_MSG_PREVIEW_FRAME</span><span class="p">);</span></div><div class='line' id='LC493'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">stopPreview</span><span class="p">();</span></div><div class='line' id='LC494'><span class="p">}</span></div><div class='line' id='LC495'><br/></div><div class='line' id='LC496'><span class="kt">int</span> <span class="nf">qcamera_preview_enabled</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">)</span></div><div class='line' id='LC497'><span class="p">{</span></div><div class='line' id='LC498'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_preview_enabled:</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC499'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">previewEnabled</span><span class="p">()</span> <span class="o">?</span> <span class="mi">1</span> <span class="o">:</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC500'><span class="p">}</span></div><div class='line' id='LC501'><br/></div><div class='line' id='LC502'><span class="kt">int</span> <span class="nf">qcamera_store_meta_data_in_buffers</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">,</span> <span class="kt">int</span> <span class="n">enable</span><span class="p">)</span></div><div class='line' id='LC503'><span class="p">{</span></div><div class='line' id='LC504'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_store_meta_data_in_buffers:</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC505'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC506'><span class="p">}</span></div><div class='line' id='LC507'><br/></div><div class='line' id='LC508'><span class="kt">int</span> <span class="nf">qcamera_start_recording</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">)</span></div><div class='line' id='LC509'><span class="p">{</span></div><div class='line' id='LC510'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_start_recording</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC511'><br/></div><div class='line' id='LC512'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">enableMsgType</span><span class="p">(</span><span class="n">CAMERA_MSG_VIDEO_FRAME</span><span class="p">);</span></div><div class='line' id='LC513'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">startRecording</span><span class="p">();</span></div><div class='line' id='LC514'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">NO_ERROR</span><span class="p">;</span></div><div class='line' id='LC515'><span class="p">}</span></div><div class='line' id='LC516'><br/></div><div class='line' id='LC517'><span class="kt">void</span> <span class="nf">qcamera_stop_recording</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">)</span></div><div class='line' id='LC518'><span class="p">{</span></div><div class='line' id='LC519'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_stop_recording:</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC520'><br/></div><div class='line' id='LC521'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">disableMsgType</span><span class="p">(</span><span class="n">CAMERA_MSG_VIDEO_FRAME</span><span class="p">);</span></div><div class='line' id='LC522'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">stopRecording</span><span class="p">();</span></div><div class='line' id='LC523'><span class="p">}</span></div><div class='line' id='LC524'><br/></div><div class='line' id='LC525'><span class="kt">int</span> <span class="nf">qcamera_recording_enabled</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">)</span></div><div class='line' id='LC526'><span class="p">{</span></div><div class='line' id='LC527'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_recording_enabled:</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC528'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="p">(</span><span class="kt">int</span><span class="p">)</span><span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">recordingEnabled</span><span class="p">();</span></div><div class='line' id='LC529'><span class="p">}</span></div><div class='line' id='LC530'><br/></div><div class='line' id='LC531'><span class="kt">void</span> <span class="nf">qcamera_release_recording_frame</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">,</span></div><div class='line' id='LC532'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">void</span> <span class="o">*</span><span class="n">opaque</span><span class="p">)</span></div><div class='line' id='LC533'><span class="p">{</span></div><div class='line' id='LC534'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_release_recording_frame: opaque:%p</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">opaque</span><span class="p">);</span></div><div class='line' id='LC535'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">opaque</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC536'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">android</span><span class="o">::</span><span class="n">Vector</span><span class="o">&lt;</span><span class="kt">camera_memory_t</span><span class="o">*&gt;::</span><span class="n">iterator</span> <span class="n">it</span><span class="p">;</span></div><div class='line' id='LC537'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="n">it</span> <span class="o">=</span> <span class="n">sentFrames</span><span class="p">.</span><span class="n">begin</span><span class="p">();</span> <span class="n">it</span> <span class="o">!=</span> <span class="n">sentFrames</span><span class="p">.</span><span class="n">end</span><span class="p">();</span> <span class="o">++</span><span class="n">it</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC538'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">camera_memory_t</span> <span class="o">*</span><span class="n">mem</span> <span class="o">=</span> <span class="o">*</span><span class="n">it</span><span class="p">;</span></div><div class='line' id='LC539'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">mem</span><span class="o">-&gt;</span><span class="n">data</span> <span class="o">==</span> <span class="n">opaque</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC540'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mem</span><span class="o">-&gt;</span><span class="n">release</span><span class="p">(</span><span class="n">mem</span><span class="p">);</span></div><div class='line' id='LC541'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sentFrames</span><span class="p">.</span><span class="n">erase</span><span class="p">(</span><span class="n">it</span><span class="p">);</span></div><div class='line' id='LC542'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC543'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC544'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC545'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC546'><span class="p">}</span></div><div class='line' id='LC547'><br/></div><div class='line' id='LC548'><span class="kt">int</span> <span class="nf">qcamera_auto_focus</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">)</span></div><div class='line' id='LC549'><span class="p">{</span></div><div class='line' id='LC550'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_auto_focus:</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC551'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">autoFocus</span><span class="p">();</span></div><div class='line' id='LC552'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">NO_ERROR</span><span class="p">;</span></div><div class='line' id='LC553'><span class="p">}</span></div><div class='line' id='LC554'><br/></div><div class='line' id='LC555'><span class="kt">int</span> <span class="nf">qcamera_cancel_auto_focus</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">)</span></div><div class='line' id='LC556'><span class="p">{</span></div><div class='line' id='LC557'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_cancel_auto_focus:</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC558'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">cancelAutoFocus</span><span class="p">();</span></div><div class='line' id='LC559'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">NO_ERROR</span><span class="p">;</span></div><div class='line' id='LC560'><span class="p">}</span></div><div class='line' id='LC561'><br/></div><div class='line' id='LC562'><span class="kt">int</span> <span class="nf">qcamera_take_picture</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">)</span></div><div class='line' id='LC563'><span class="p">{</span></div><div class='line' id='LC564'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_take_picture:</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC565'><br/></div><div class='line' id='LC566'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">enableMsgType</span><span class="p">(</span><span class="n">CAMERA_MSG_SHUTTER</span> <span class="o">|</span></div><div class='line' id='LC567'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_MSG_POSTVIEW_FRAME</span> <span class="o">|</span></div><div class='line' id='LC568'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_MSG_RAW_IMAGE</span> <span class="o">|</span></div><div class='line' id='LC569'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_MSG_COMPRESSED_IMAGE</span><span class="p">);</span></div><div class='line' id='LC570'><br/></div><div class='line' id='LC571'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">takePicture</span><span class="p">();</span></div><div class='line' id='LC572'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">NO_ERROR</span><span class="p">;</span></div><div class='line' id='LC573'><span class="p">}</span></div><div class='line' id='LC574'><br/></div><div class='line' id='LC575'><span class="kt">int</span> <span class="nf">qcamera_cancel_picture</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">)</span></div><div class='line' id='LC576'><span class="p">{</span></div><div class='line' id='LC577'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;camera_cancel_picture:</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC578'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">cancelPicture</span><span class="p">();</span></div><div class='line' id='LC579'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">NO_ERROR</span><span class="p">;</span></div><div class='line' id='LC580'><span class="p">}</span></div><div class='line' id='LC581'><br/></div><div class='line' id='LC582'><span class="kt">int</span> <span class="nf">qcamera_set_parameters</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">params</span><span class="p">)</span></div><div class='line' id='LC583'><span class="p">{</span></div><div class='line' id='LC584'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_set_parameters: %s</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC585'>&nbsp;&nbsp;&nbsp;<span class="n">g_str</span> <span class="o">=</span> <span class="n">android</span><span class="o">::</span><span class="n">String8</span><span class="p">(</span><span class="n">params</span><span class="p">);</span></div><div class='line' id='LC586'>&nbsp;&nbsp;&nbsp;<span class="n">camSettings</span><span class="p">.</span><span class="n">unflatten</span><span class="p">(</span><span class="n">g_str</span><span class="p">);</span></div><div class='line' id='LC587'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">setParameters</span><span class="p">(</span><span class="n">camSettings</span><span class="p">);</span></div><div class='line' id='LC588'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">NO_ERROR</span><span class="p">;</span></div><div class='line' id='LC589'><span class="p">}</span></div><div class='line' id='LC590'><br/></div><div class='line' id='LC591'><span class="kt">char</span><span class="o">*</span></div><div class='line' id='LC592'><span class="nf">qcamera_get_parameters</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">)</span></div><div class='line' id='LC593'><span class="p">{</span></div><div class='line' id='LC594'>&nbsp;&nbsp;&nbsp;<span class="kt">char</span> <span class="o">*</span><span class="n">rc</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC595'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_get_parameters</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC596'>&nbsp;&nbsp;&nbsp;<span class="n">camSettings</span> <span class="o">=</span> <span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">getParameters</span><span class="p">();</span></div><div class='line' id='LC597'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_get_parameters: after calling qCamera-&gt;getParameters()</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC598'>&nbsp;&nbsp;&nbsp;<span class="n">CameraHAL_FixupParams</span><span class="p">(</span><span class="n">camSettings</span><span class="p">);</span></div><div class='line' id='LC599'>&nbsp;&nbsp;&nbsp;<span class="n">g_str</span> <span class="o">=</span> <span class="n">camSettings</span><span class="p">.</span><span class="n">flatten</span><span class="p">();</span></div><div class='line' id='LC600'>&nbsp;&nbsp;&nbsp;<span class="n">rc</span> <span class="o">=</span> <span class="n">strdup</span><span class="p">((</span><span class="kt">char</span> <span class="o">*</span><span class="p">)</span><span class="n">g_str</span><span class="p">.</span><span class="n">string</span><span class="p">());</span></div><div class='line' id='LC601'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;camera_get_parameters: returning rc:%p :%s</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC602'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">rc</span><span class="p">,</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="o">?</span> <span class="n">rc</span> <span class="o">:</span> <span class="s">&quot;EMPTY STRING&quot;</span><span class="p">);</span></div><div class='line' id='LC603'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC604'><span class="p">}</span></div><div class='line' id='LC605'><br/></div><div class='line' id='LC606'><span class="kt">void</span> <span class="nf">qcamera_put_parameters</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span><span class="n">device</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">params</span><span class="p">)</span></div><div class='line' id='LC607'><span class="p">{</span></div><div class='line' id='LC608'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_put_parameters: params:%p %s&quot;</span><span class="p">,</span> <span class="n">params</span><span class="p">,</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC609'>&nbsp;&nbsp;&nbsp;<span class="n">free</span><span class="p">(</span><span class="n">params</span><span class="p">);</span></div><div class='line' id='LC610'><span class="p">}</span></div><div class='line' id='LC611'><br/></div><div class='line' id='LC612'><br/></div><div class='line' id='LC613'><span class="kt">int</span> <span class="nf">qcamera_send_command</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">,</span> <span class="kt">int32_t</span> <span class="n">cmd</span><span class="p">,</span></div><div class='line' id='LC614'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int32_t</span> <span class="n">arg0</span><span class="p">,</span> <span class="kt">int32_t</span> <span class="n">arg1</span><span class="p">)</span></div><div class='line' id='LC615'><span class="p">{</span></div><div class='line' id='LC616'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_send_command: cmd:%d arg0:%d arg1:%d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC617'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">cmd</span><span class="p">,</span> <span class="n">arg0</span><span class="p">,</span> <span class="n">arg1</span><span class="p">);</span></div><div class='line' id='LC618'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">sendCommand</span><span class="p">(</span><span class="n">cmd</span><span class="p">,</span> <span class="n">arg0</span><span class="p">,</span> <span class="n">arg1</span><span class="p">);</span></div><div class='line' id='LC619'><span class="p">}</span></div><div class='line' id='LC620'><br/></div><div class='line' id='LC621'><span class="kt">void</span> <span class="nf">qcamera_release</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">)</span></div><div class='line' id='LC622'><span class="p">{</span></div><div class='line' id='LC623'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;camera_release:</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC624'>&nbsp;&nbsp;&nbsp;<span class="n">releaseCameraFrames</span><span class="p">();</span></div><div class='line' id='LC625'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">release</span><span class="p">();</span></div><div class='line' id='LC626'><span class="p">}</span></div><div class='line' id='LC627'><br/></div><div class='line' id='LC628'><span class="kt">int</span> <span class="nf">qcamera_dump</span><span class="p">(</span><span class="k">struct</span> <span class="n">camera_device</span> <span class="o">*</span> <span class="n">device</span><span class="p">,</span> <span class="kt">int</span> <span class="n">fd</span><span class="p">)</span></div><div class='line' id='LC629'><span class="p">{</span></div><div class='line' id='LC630'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGV</span><span class="p">(</span><span class="s">&quot;qcamera_dump:</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC631'>&nbsp;&nbsp;&nbsp;<span class="n">android</span><span class="o">::</span><span class="n">Vector</span><span class="o">&lt;</span><span class="n">android</span><span class="o">::</span><span class="n">String16</span><span class="o">&gt;</span> <span class="n">args</span><span class="p">;</span></div><div class='line' id='LC632'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">qCamera</span><span class="o">-&gt;</span><span class="n">dump</span><span class="p">(</span><span class="n">fd</span><span class="p">,</span> <span class="n">args</span><span class="p">);</span></div><div class='line' id='LC633'><span class="p">}</span></div><div class='line' id='LC634'><br/></div><div class='line' id='LC635'><span class="kt">int</span> <span class="nf">camera_device_close</span><span class="p">(</span><span class="kt">hw_device_t</span><span class="o">*</span> <span class="n">device</span><span class="p">)</span></div><div class='line' id='LC636'><span class="p">{</span></div><div class='line' id='LC637'>&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC638'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGD</span><span class="p">(</span><span class="s">&quot;camera_device_close</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC639'>&nbsp;&nbsp;&nbsp;<span class="kt">camera_device_t</span> <span class="o">*</span><span class="n">cameraDev</span> <span class="o">=</span> <span class="p">(</span><span class="kt">camera_device_t</span> <span class="o">*</span><span class="p">)</span><span class="n">device</span><span class="p">;</span></div><div class='line' id='LC640'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">cameraDev</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC641'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">camera_device_ops_t</span> <span class="o">*</span><span class="n">camera_ops</span> <span class="o">=</span> <span class="n">cameraDev</span><span class="o">-&gt;</span><span class="n">ops</span><span class="p">;</span></div><div class='line' id='LC642'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">camera_ops</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC643'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">qCamera</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC644'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span><span class="p">.</span><span class="n">clear</span><span class="p">();</span></div><div class='line' id='LC645'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC646'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">free</span><span class="p">(</span><span class="n">camera_ops</span><span class="p">);</span></div><div class='line' id='LC647'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC648'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">free</span><span class="p">(</span><span class="n">cameraDev</span><span class="p">);</span></div><div class='line' id='LC649'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">rc</span> <span class="o">=</span> <span class="n">NO_ERROR</span><span class="p">;</span></div><div class='line' id='LC650'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC651'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC652'><span class="p">}</span></div><div class='line' id='LC653'><br/></div><div class='line' id='LC654'><span class="kt">void</span> <span class="nf">sighandle</span><span class="p">(</span><span class="kt">int</span> <span class="n">s</span><span class="p">){</span></div><div class='line' id='LC655'>&nbsp;&nbsp;<span class="c1">//abort();</span></div><div class='line' id='LC656'><span class="p">}</span></div><div class='line' id='LC657'><br/></div><div class='line' id='LC658'><span class="kt">int</span> <span class="nf">qcamera_device_open</span><span class="p">(</span><span class="k">const</span> <span class="kt">hw_module_t</span><span class="o">*</span> <span class="n">module</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">name</span><span class="p">,</span></div><div class='line' id='LC659'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">hw_device_t</span><span class="o">**</span> <span class="n">device</span><span class="p">)</span></div><div class='line' id='LC660'><span class="p">{</span></div><div class='line' id='LC661'><br/></div><div class='line' id='LC662'>&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">cameraId</span> <span class="o">=</span> <span class="n">atoi</span><span class="p">(</span><span class="n">name</span><span class="p">);</span></div><div class='line' id='LC663'>&nbsp;&nbsp;&nbsp;<span class="n">signal</span><span class="p">(</span><span class="n">SIGFPE</span><span class="p">,(</span><span class="o">*</span><span class="n">sighandle</span><span class="p">));</span></div><div class='line' id='LC664'><br/></div><div class='line' id='LC665'>&nbsp;&nbsp;&nbsp;<span class="n">ALOGD</span><span class="p">(</span><span class="s">&quot;qcamera_device_open: name:%s device:%p cameraId:%d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC666'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">name</span><span class="p">,</span> <span class="n">device</span><span class="p">,</span> <span class="n">cameraId</span><span class="p">);</span></div><div class='line' id='LC667'><br/></div><div class='line' id='LC668'>&nbsp;&nbsp;&nbsp;<span class="n">qCamera</span> <span class="o">=</span> <span class="n">HAL_openCameraHardware</span><span class="p">(</span><span class="n">cameraId</span><span class="p">,</span> <span class="mi">5</span><span class="p">);</span></div><div class='line' id='LC669'>&nbsp;&nbsp;&nbsp;<span class="kt">camera_device_t</span><span class="o">*</span> <span class="n">camera_device</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC670'>&nbsp;&nbsp;&nbsp;<span class="kt">camera_device_ops_t</span><span class="o">*</span> <span class="n">camera_ops</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC671'><br/></div><div class='line' id='LC672'>&nbsp;&nbsp;&nbsp;<span class="n">camera_device</span> <span class="o">=</span> <span class="p">(</span><span class="kt">camera_device_t</span><span class="o">*</span><span class="p">)</span><span class="n">malloc</span><span class="p">(</span><span class="k">sizeof</span><span class="p">(</span><span class="o">*</span><span class="n">camera_device</span><span class="p">));</span></div><div class='line' id='LC673'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span> <span class="o">=</span> <span class="p">(</span><span class="kt">camera_device_ops_t</span><span class="o">*</span><span class="p">)</span><span class="n">malloc</span><span class="p">(</span><span class="k">sizeof</span><span class="p">(</span><span class="o">*</span><span class="n">camera_ops</span><span class="p">));</span></div><div class='line' id='LC674'>&nbsp;&nbsp;&nbsp;<span class="n">memset</span><span class="p">(</span><span class="n">camera_device</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="o">*</span><span class="n">camera_device</span><span class="p">));</span></div><div class='line' id='LC675'>&nbsp;&nbsp;&nbsp;<span class="n">memset</span><span class="p">(</span><span class="n">camera_ops</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="o">*</span><span class="n">camera_ops</span><span class="p">));</span></div><div class='line' id='LC676'><br/></div><div class='line' id='LC677'>&nbsp;&nbsp;&nbsp;<span class="n">camera_device</span><span class="o">-&gt;</span><span class="n">common</span><span class="p">.</span><span class="n">tag</span>              <span class="o">=</span> <span class="n">HARDWARE_DEVICE_TAG</span><span class="p">;</span></div><div class='line' id='LC678'>&nbsp;&nbsp;&nbsp;<span class="n">camera_device</span><span class="o">-&gt;</span><span class="n">common</span><span class="p">.</span><span class="n">version</span>          <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC679'>&nbsp;&nbsp;&nbsp;<span class="n">camera_device</span><span class="o">-&gt;</span><span class="n">common</span><span class="p">.</span><span class="n">module</span>           <span class="o">=</span> <span class="p">(</span><span class="kt">hw_module_t</span> <span class="o">*</span><span class="p">)(</span><span class="n">module</span><span class="p">);</span></div><div class='line' id='LC680'>&nbsp;&nbsp;&nbsp;<span class="n">camera_device</span><span class="o">-&gt;</span><span class="n">common</span><span class="p">.</span><span class="n">close</span>            <span class="o">=</span> <span class="n">camera_device_close</span><span class="p">;</span></div><div class='line' id='LC681'>&nbsp;&nbsp;&nbsp;<span class="n">camera_device</span><span class="o">-&gt;</span><span class="n">ops</span>                     <span class="o">=</span> <span class="n">camera_ops</span><span class="p">;</span></div><div class='line' id='LC682'><br/></div><div class='line' id='LC683'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">set_preview_window</span>         <span class="o">=</span> <span class="n">qcamera_set_preview_window</span><span class="p">;</span></div><div class='line' id='LC684'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">set_callbacks</span>              <span class="o">=</span> <span class="n">qcamera_set_callbacks</span><span class="p">;</span></div><div class='line' id='LC685'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">enable_msg_type</span>            <span class="o">=</span> <span class="n">qcamera_enable_msg_type</span><span class="p">;</span></div><div class='line' id='LC686'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">disable_msg_type</span>           <span class="o">=</span> <span class="n">qcamera_disable_msg_type</span><span class="p">;</span></div><div class='line' id='LC687'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">msg_type_enabled</span>           <span class="o">=</span> <span class="n">qcamera_msg_type_enabled</span><span class="p">;</span></div><div class='line' id='LC688'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">start_preview</span>              <span class="o">=</span> <span class="n">qcamera_start_preview</span><span class="p">;</span></div><div class='line' id='LC689'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">stop_preview</span>               <span class="o">=</span> <span class="n">qcamera_stop_preview</span><span class="p">;</span></div><div class='line' id='LC690'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">preview_enabled</span>            <span class="o">=</span> <span class="n">qcamera_preview_enabled</span><span class="p">;</span></div><div class='line' id='LC691'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">store_meta_data_in_buffers</span> <span class="o">=</span> <span class="n">qcamera_store_meta_data_in_buffers</span><span class="p">;</span></div><div class='line' id='LC692'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">start_recording</span>            <span class="o">=</span> <span class="n">qcamera_start_recording</span><span class="p">;</span></div><div class='line' id='LC693'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">stop_recording</span>             <span class="o">=</span> <span class="n">qcamera_stop_recording</span><span class="p">;</span></div><div class='line' id='LC694'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">recording_enabled</span>          <span class="o">=</span> <span class="n">qcamera_recording_enabled</span><span class="p">;</span></div><div class='line' id='LC695'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">release_recording_frame</span>    <span class="o">=</span> <span class="n">qcamera_release_recording_frame</span><span class="p">;</span></div><div class='line' id='LC696'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">auto_focus</span>                 <span class="o">=</span> <span class="n">qcamera_auto_focus</span><span class="p">;</span></div><div class='line' id='LC697'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">cancel_auto_focus</span>          <span class="o">=</span> <span class="n">qcamera_cancel_auto_focus</span><span class="p">;</span></div><div class='line' id='LC698'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">take_picture</span>               <span class="o">=</span> <span class="n">qcamera_take_picture</span><span class="p">;</span></div><div class='line' id='LC699'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">cancel_picture</span>             <span class="o">=</span> <span class="n">qcamera_cancel_picture</span><span class="p">;</span></div><div class='line' id='LC700'><br/></div><div class='line' id='LC701'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">set_parameters</span>             <span class="o">=</span> <span class="n">qcamera_set_parameters</span><span class="p">;</span></div><div class='line' id='LC702'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">get_parameters</span>             <span class="o">=</span> <span class="n">qcamera_get_parameters</span><span class="p">;</span></div><div class='line' id='LC703'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">put_parameters</span>             <span class="o">=</span> <span class="n">qcamera_put_parameters</span><span class="p">;</span></div><div class='line' id='LC704'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">send_command</span>               <span class="o">=</span> <span class="n">qcamera_send_command</span><span class="p">;</span></div><div class='line' id='LC705'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">release</span>                    <span class="o">=</span> <span class="n">qcamera_release</span><span class="p">;</span></div><div class='line' id='LC706'>&nbsp;&nbsp;&nbsp;<span class="n">camera_ops</span><span class="o">-&gt;</span><span class="n">dump</span>                       <span class="o">=</span> <span class="n">qcamera_dump</span><span class="p">;</span></div><div class='line' id='LC707'><br/></div><div class='line' id='LC708'>&nbsp;&nbsp;&nbsp;<span class="o">*</span><span class="n">device</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">camera_device</span><span class="o">-&gt;</span><span class="n">common</span><span class="p">;</span></div><div class='line' id='LC709'><br/></div><div class='line' id='LC710'>&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">NO_ERROR</span><span class="p">;</span></div><div class='line' id='LC711'><span class="p">}</span></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>

        <a href="#jump-to-line" rel="facebox" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
        <div id="jump-to-line" style="display:none">
          <h2>Jump to Line</h2>
          <form accept-charset="UTF-8" class="js-jump-to-line-form">
            <input class="textfield js-jump-to-line-field" type="text">
            <div class="full-button">
              <button type="submit" class="button">Go</button>
            </div>
          </form>
        </div>

      </div>
    </div>
</div>

<div id="js-frame-loading-template" class="frame frame-loading large-loading-area" style="display:none;">
  <img class="js-frame-loading-spinner" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif" height="64" width="64">
</div>


        </div>
      </div>
      <div class="modal-backdrop"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer">
  <div class="container clearfix">

      <dl class="footer_nav">
        <dt>GitHub</dt>
        <dd><a href="/about">About us</a></dd>
        <dd><a href="/blog">Blog</a></dd>
        <dd><a href="/contact">Contact &amp; support</a></dd>
        <dd><a href="http://enterprise.github.com/">GitHub Enterprise</a></dd>
        <dd><a href="http://status.github.com/">Site status</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Applications</dt>
        <dd><a href="http://mac.github.com/">GitHub for Mac</a></dd>
        <dd><a href="http://windows.github.com/">GitHub for Windows</a></dd>
        <dd><a href="http://eclipse.github.com/">GitHub for Eclipse</a></dd>
        <dd><a href="http://mobile.github.com/">GitHub mobile apps</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Services</dt>
        <dd><a href="http://get.gaug.es/">Gauges: Web analytics</a></dd>
        <dd><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></dd>
        <dd><a href="https://gist.github.com">Gist: Code snippets</a></dd>
        <dd><a href="http://jobs.github.com/">Job board</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Documentation</dt>
        <dd><a href="http://help.github.com/">GitHub Help</a></dd>
        <dd><a href="http://developer.github.com/">Developer API</a></dd>
        <dd><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></dd>
        <dd><a href="http://pages.github.com/">GitHub Pages</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>More</dt>
        <dd><a href="http://training.github.com/">Training</a></dd>
        <dd><a href="/edu">Students &amp; teachers</a></dd>
        <dd><a href="http://shop.github.com">The Shop</a></dd>
        <dd><a href="/plans">Plans &amp; pricing</a></dd>
        <dd><a href="http://octodex.github.com/">The Octodex</a></dd>
      </dl>

      <hr class="footer-divider">


    <p class="right">&copy; 2013 <span title="0.31531s from fe4.rs.github.com">GitHub</span>, Inc. All rights reserved.</p>
    <a class="left" href="/">
      <span class="mega-octicon octicon-mark-github"></span>
    </a>
    <ul id="legal">
        <li><a href="/site/terms">Terms of Service</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
    </ul>

  </div><!-- /.container -->

</div><!-- /.#footer -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/PecanCM/android_device_lge_p350/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="octicon octicon-remove-close ajax-error-dismiss"></a>
    </div>

    
    <span id='server_response_time' data-time='0.31605' data-host='fe4'></span>
    
  </body>
</html>

