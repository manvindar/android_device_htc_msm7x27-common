  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>android_device_lge_p350/include/camera/CameraHardwareInterface.h at cm-10.1 · PecanCM/android_device_lge_p350</title>
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

        <link data-pjax-transient rel='permalink' href='/PecanCM/android_device_lge_p350/blob/44d4056a3c5f7a6e79dfb14d9e048d1c5b26daca/include/camera/CameraHardwareInterface.h'>
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
                  <a href="/PecanCM/android_device_lge_p350/blob/android-4.2.2_r1/include/camera/CameraHardwareInterface.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="android-4.2.2_r1" rel="nofollow" title="android-4.2.2_r1">android-4.2.2_r1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item selected">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/cm-10.1/include/camera/CameraHardwareInterface.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1" rel="nofollow" title="cm-10.1">cm-10.1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/cm-10.1-wip/include/camera/CameraHardwareInterface.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1-wip" rel="nofollow" title="cm-10.1-wip">cm-10.1-wip</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/gingerbread/include/camera/CameraHardwareInterface.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="gingerbread" rel="nofollow" title="gingerbread">gingerbread</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/ics/include/camera/CameraHardwareInterface.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ics" rel="nofollow" title="ics">ics</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/ics-wip/include/camera/CameraHardwareInterface.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ics-wip" rel="nofollow" title="ics-wip">ics-wip</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/jb-wip/include/camera/CameraHardwareInterface.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="jb-wip" rel="nofollow" title="jb-wip">jb-wip</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/jellybean/include/camera/CameraHardwareInterface.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="jellybean" rel="nofollow" title="jellybean">jellybean</a>
                </div> <!-- /.select-menu-item -->
            </div>

              <div class="select-menu-no-results">Nothing to show</div>
          </div> <!-- /.select-menu-list -->


          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="tags">
            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/cm10.1-RC7/include/camera/CameraHardwareInterface.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm10.1-RC7" rel="nofollow" title="cm10.1-RC7">cm10.1-RC7</a>
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
          


<!-- blob contrib key: blob_contributors:v21:147f08ccbe8402e6dc09df002df997fc -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:147f08ccbe8402e6dc09df002df997fc -->


<div id="slider">
    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

        <div class="breadcrumb">
          <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/PecanCM/android_device_lge_p350" class="js-slide-to" data-branch="cm-10.1" data-direction="back" itemscope="url"><span itemprop="title">android_device_lge_p350</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/PecanCM/android_device_lge_p350/tree/cm-10.1/include" class="js-slide-to" data-branch="cm-10.1" data-direction="back" itemscope="url"><span itemprop="title">include</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/PecanCM/android_device_lge_p350/tree/cm-10.1/include/camera" class="js-slide-to" data-branch="cm-10.1" data-direction="back" itemscope="url"><span itemprop="title">camera</span></a></span><span class="separator"> / </span><strong class="final-path">CameraHardwareInterface.h</strong> <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="include/camera/CameraHardwareInterface.h" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
        </div>

      <a href="/PecanCM/android_device_lge_p350/find/cm-10.1" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>


        
  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/bcce06c7ac113f588537910e1907e023?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
    <span class="author"><a href="/RonGokhale" rel="author">RonGokhale</a></span>
    <time class="js-relative-date" datetime="2013-05-15T08:09:50-07:00" title="2013-05-15 08:09:50">May 15, 2013</time>
    <div class="commit-title">
        <a href="/PecanCM/android_device_lge_p350/commit/50dfbe15bd98c922874c7f7b92b6cee1fa2dcc1c" class="message">p350: cleanup QCameraHAL.h</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong> contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
        <li class="facebox-user-list-item">
          <img height="24" src="https://secure.gravatar.com/avatar/bcce06c7ac113f588537910e1907e023?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/RonGokhale">RonGokhale</a>
        </li>
      </ul>
    </div>
  </div>


    </div><!-- ./.frame-meta -->

    <div class="frames">
      <div class="frame" data-permalink-url="/PecanCM/android_device_lge_p350/blob/44d4056a3c5f7a6e79dfb14d9e048d1c5b26daca/include/camera/CameraHardwareInterface.h" data-title="android_device_lge_p350/include/camera/CameraHardwareInterface.h at cm-10.1 · PecanCM/android_device_lge_p350 · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="octicon octicon-file-text"></b></span>
                <span class="mode" title="File Mode">executable file</span>
                  <span>227 lines (188 sloc)</span>
                <span>7.83 kb</span>
              </div>
              <div class="actions">
                <div class="button-group">
                        <a class="minibutton tooltipped leftwards"
                           title="Clicking this button will automatically fork this project so you can edit the file"
                           href="/PecanCM/android_device_lge_p350/edit/cm-10.1/include/camera/CameraHardwareInterface.h"
                           data-method="post" rel="nofollow">Edit</a>
                  <a href="/PecanCM/android_device_lge_p350/raw/cm-10.1/include/camera/CameraHardwareInterface.h" class="button minibutton " id="raw-url">Raw</a>
                    <a href="/PecanCM/android_device_lge_p350/blame/cm-10.1/include/camera/CameraHardwareInterface.h" class="button minibutton ">Blame</a>
                  <a href="/PecanCM/android_device_lge_p350/commits/cm-10.1/include/camera/CameraHardwareInterface.h" class="button minibutton " rel="nofollow">History</a>
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

          </td>
          <td class="blob-line-code">
                  <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * Copyright (C) 2008 The Android Open Source Project</span></div><div class='line' id='LC3'><span class="cm"> * Copyright (C) 2010, Code Aurora Forum. All rights reserved.</span></div><div class='line' id='LC4'><span class="cm"> *</span></div><div class='line' id='LC5'><span class="cm"> * Licensed under the Apache License, Version 2.0 (the &quot;License&quot;);</span></div><div class='line' id='LC6'><span class="cm"> * you may not use this file except in compliance with the License.</span></div><div class='line' id='LC7'><span class="cm"> * You may obtain a copy of the License at</span></div><div class='line' id='LC8'><span class="cm"> *</span></div><div class='line' id='LC9'><span class="cm"> *      http://www.apache.org/licenses/LICENSE-2.0</span></div><div class='line' id='LC10'><span class="cm"> *</span></div><div class='line' id='LC11'><span class="cm"> * Unless required by applicable law or agreed to in writing, software</span></div><div class='line' id='LC12'><span class="cm"> * distributed under the License is distributed on an &quot;AS IS&quot; BASIS,</span></div><div class='line' id='LC13'><span class="cm"> * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.</span></div><div class='line' id='LC14'><span class="cm"> * See the License for the specific language governing permissions and</span></div><div class='line' id='LC15'><span class="cm"> * limitations under the License.</span></div><div class='line' id='LC16'><span class="cm"> */</span></div><div class='line' id='LC17'><br/></div><div class='line' id='LC18'><span class="cp">#ifndef ANDROID_HARDWARE_CAMERA_HARDWARE_INTERFACE_H</span></div><div class='line' id='LC19'><span class="cp">#define ANDROID_HARDWARE_CAMERA_HARDWARE_INTERFACE_H</span></div><div class='line' id='LC20'><br/></div><div class='line' id='LC21'><span class="cp">#include &lt;binder/IMemory.h&gt;</span></div><div class='line' id='LC22'><span class="cp">#include &lt;utils/RefBase.h&gt;</span></div><div class='line' id='LC23'><span class="cp">#include &lt;gui/ISurface.h&gt;</span></div><div class='line' id='LC24'><span class="cp">#include &lt;camera/Camera.h&gt;</span></div><div class='line' id='LC25'><span class="cp">#include &lt;camera/CameraParameters.h&gt;</span></div><div class='line' id='LC26'><br/></div><div class='line' id='LC27'><span class="k">namespace</span> <span class="n">android</span> <span class="p">{</span></div><div class='line' id='LC28'><br/></div><div class='line' id='LC29'><span class="k">class</span> <span class="nc">Overlay</span><span class="p">;</span></div><div class='line' id='LC30'><br/></div><div class='line' id='LC31'><span class="cm">/**</span></div><div class='line' id='LC32'><span class="cm"> *  The size of image for display.</span></div><div class='line' id='LC33'><span class="cm"> */</span></div><div class='line' id='LC34'><span class="k">typedef</span> <span class="k">struct</span> <span class="n">image_rect_struct</span></div><div class='line' id='LC35'><span class="p">{</span></div><div class='line' id='LC36'>&nbsp;&nbsp;<span class="kt">uint32_t</span> <span class="n">width</span><span class="p">;</span>      <span class="cm">/* Image width */</span></div><div class='line' id='LC37'>&nbsp;&nbsp;<span class="kt">uint32_t</span> <span class="n">height</span><span class="p">;</span>     <span class="cm">/* Image height */</span></div><div class='line' id='LC38'><span class="p">}</span> <span class="n">image_rect_type</span><span class="p">;</span></div><div class='line' id='LC39'><br/></div><div class='line' id='LC40'><br/></div><div class='line' id='LC41'><span class="k">typedef</span> <span class="nf">void</span> <span class="p">(</span><span class="o">*</span><span class="n">notify_callback</span><span class="p">)(</span><span class="kt">int32_t</span> <span class="n">msgType</span><span class="p">,</span></div><div class='line' id='LC42'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int32_t</span> <span class="n">ext1</span><span class="p">,</span></div><div class='line' id='LC43'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int32_t</span> <span class="n">ext2</span><span class="p">,</span></div><div class='line' id='LC44'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span><span class="o">*</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC45'><br/></div><div class='line' id='LC46'><span class="k">typedef</span> <span class="nf">void</span> <span class="p">(</span><span class="o">*</span><span class="n">data_callback</span><span class="p">)(</span><span class="kt">int32_t</span> <span class="n">msgType</span><span class="p">,</span></div><div class='line' id='LC47'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemory</span><span class="o">&gt;&amp;</span> <span class="n">dataPtr</span><span class="p">,</span></div><div class='line' id='LC48'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span><span class="o">*</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC49'><br/></div><div class='line' id='LC50'><span class="k">typedef</span> <span class="nf">void</span> <span class="p">(</span><span class="o">*</span><span class="n">data_callback_timestamp</span><span class="p">)(</span><span class="kt">nsecs_t</span> <span class="n">timestamp</span><span class="p">,</span></div><div class='line' id='LC51'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int32_t</span> <span class="n">msgType</span><span class="p">,</span></div><div class='line' id='LC52'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemory</span><span class="o">&gt;&amp;</span> <span class="n">dataPtr</span><span class="p">,</span></div><div class='line' id='LC53'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span><span class="o">*</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC54'><br/></div><div class='line' id='LC55'><span class="cm">/**</span></div><div class='line' id='LC56'><span class="cm"> * CameraHardwareInterface.h defines the interface to the</span></div><div class='line' id='LC57'><span class="cm"> * camera hardware abstraction layer, used for setting and getting</span></div><div class='line' id='LC58'><span class="cm"> * parameters, live previewing, and taking pictures.</span></div><div class='line' id='LC59'><span class="cm"> *</span></div><div class='line' id='LC60'><span class="cm"> * It is a referenced counted interface with RefBase as its base class.</span></div><div class='line' id='LC61'><span class="cm"> * CameraService calls openCameraHardware() to retrieve a strong pointer to the</span></div><div class='line' id='LC62'><span class="cm"> * instance of this interface and may be called multiple times. The</span></div><div class='line' id='LC63'><span class="cm"> * following steps describe a typical sequence:</span></div><div class='line' id='LC64'><span class="cm"> *</span></div><div class='line' id='LC65'><span class="cm"> *   -# After CameraService calls openCameraHardware(), getParameters() and</span></div><div class='line' id='LC66'><span class="cm"> *      setParameters() are used to initialize the camera instance.</span></div><div class='line' id='LC67'><span class="cm"> *      CameraService calls getPreviewHeap() to establish access to the</span></div><div class='line' id='LC68'><span class="cm"> *      preview heap so it can be registered with SurfaceFlinger for</span></div><div class='line' id='LC69'><span class="cm"> *      efficient display updating while in preview mode.</span></div><div class='line' id='LC70'><span class="cm"> *   -# startPreview() is called.  The camera instance then periodically</span></div><div class='line' id='LC71'><span class="cm"> *      sends the message CAMERA_MSG_PREVIEW_FRAME (if enabled) each time</span></div><div class='line' id='LC72'><span class="cm"> *      a new preview frame is available.  If data callback code needs to use</span></div><div class='line' id='LC73'><span class="cm"> *      this memory after returning, it must copy the data.</span></div><div class='line' id='LC74'><span class="cm"> *</span></div><div class='line' id='LC75'><span class="cm"> * Prior to taking a picture, CameraService calls autofocus(). When auto</span></div><div class='line' id='LC76'><span class="cm"> * focusing has completed, the camera instance sends a CAMERA_MSG_FOCUS notification,</span></div><div class='line' id='LC77'><span class="cm"> * which informs the application whether focusing was successful. The camera instance</span></div><div class='line' id='LC78'><span class="cm"> * only sends this message once and it is up  to the application to call autoFocus()</span></div><div class='line' id='LC79'><span class="cm"> * again if refocusing is desired.</span></div><div class='line' id='LC80'><span class="cm"> *</span></div><div class='line' id='LC81'><span class="cm"> * CameraService calls takePicture() to request the camera instance take a</span></div><div class='line' id='LC82'><span class="cm"> * picture. At this point, if a shutter, postview, raw, and/or compressed callback</span></div><div class='line' id='LC83'><span class="cm"> * is desired, the corresponding message must be enabled. As with CAMERA_MSG_PREVIEW_FRAME,</span></div><div class='line' id='LC84'><span class="cm"> * any memory provided in a data callback must be copied if it&#39;s needed after returning.</span></div><div class='line' id='LC85'><span class="cm"> */</span></div><div class='line' id='LC86'><span class="k">class</span> <span class="nc">CameraHardwareInterface</span> <span class="o">:</span> <span class="k">public</span> <span class="k">virtual</span> <span class="n">RefBase</span> <span class="p">{</span></div><div class='line' id='LC87'><span class="nl">public:</span></div><div class='line' id='LC88'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="o">~</span><span class="n">CameraHardwareInterface</span><span class="p">()</span> <span class="p">{</span> <span class="p">}</span></div><div class='line' id='LC89'><br/></div><div class='line' id='LC90'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/** Return the IMemoryHeap for the preview image heap */</span></div><div class='line' id='LC91'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemoryHeap</span><span class="o">&gt;</span>         <span class="n">getPreviewHeap</span><span class="p">()</span> <span class="k">const</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC92'><br/></div><div class='line' id='LC93'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/** Return the IMemoryHeap for the raw image heap */</span></div><div class='line' id='LC94'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemoryHeap</span><span class="o">&gt;</span>         <span class="n">getRawHeap</span><span class="p">()</span> <span class="k">const</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC95'><br/></div><div class='line' id='LC96'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">status_t</span> <span class="nf">dummyA</span><span class="p">()</span> <span class="p">{</span> <span class="k">return</span> <span class="mi">0</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC97'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/** Set the notification and data callbacks */</span></div><div class='line' id='LC98'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">setCallbacks</span><span class="p">(</span><span class="n">notify_callback</span> <span class="n">notify_cb</span><span class="p">,</span></div><div class='line' id='LC99'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">data_callback</span> <span class="n">data_cb</span><span class="p">,</span></div><div class='line' id='LC100'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">data_callback_timestamp</span> <span class="n">data_cb_timestamp</span><span class="p">,</span></div><div class='line' id='LC101'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span><span class="o">*</span> <span class="n">user</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC102'><br/></div><div class='line' id='LC103'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC104'><span class="cm">     * The following three functions all take a msgtype,</span></div><div class='line' id='LC105'><span class="cm">     * which is a bitmask of the messages defined in</span></div><div class='line' id='LC106'><span class="cm">     * include/ui/Camera.h</span></div><div class='line' id='LC107'><span class="cm">     */</span></div><div class='line' id='LC108'><br/></div><div class='line' id='LC109'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC110'><span class="cm">     * Enable a message, or set of messages.</span></div><div class='line' id='LC111'><span class="cm">     */</span></div><div class='line' id='LC112'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span>        <span class="n">enableMsgType</span><span class="p">(</span><span class="kt">int32_t</span> <span class="n">msgType</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC113'><br/></div><div class='line' id='LC114'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC115'><span class="cm">     * Disable a message, or a set of messages.</span></div><div class='line' id='LC116'><span class="cm">     */</span></div><div class='line' id='LC117'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span>        <span class="n">disableMsgType</span><span class="p">(</span><span class="kt">int32_t</span> <span class="n">msgType</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC118'><br/></div><div class='line' id='LC119'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC120'><span class="cm">     * Query whether a message, or a set of messages, is enabled.</span></div><div class='line' id='LC121'><span class="cm">     * Note that this is operates as an AND, if any of the messages</span></div><div class='line' id='LC122'><span class="cm">     * queried are off, this will return false.</span></div><div class='line' id='LC123'><span class="cm">     */</span></div><div class='line' id='LC124'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">bool</span>        <span class="n">msgTypeEnabled</span><span class="p">(</span><span class="kt">int32_t</span> <span class="n">msgType</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC125'><br/></div><div class='line' id='LC126'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC127'><span class="cm">     * Start preview mode.</span></div><div class='line' id='LC128'><span class="cm">     */</span></div><div class='line' id='LC129'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">status_t</span>    <span class="n">startPreview</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC130'><br/></div><div class='line' id='LC131'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">status_t</span>    <span class="n">getBufferInfo</span><span class="p">(</span><span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemory</span><span class="o">&gt;&amp;</span> <span class="n">Frame</span><span class="p">,</span> <span class="kt">size_t</span> <span class="o">*</span><span class="n">alignedSize</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC132'><br/></div><div class='line' id='LC133'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">status_t</span> <span class="nf">dummyB</span><span class="p">()</span> <span class="p">{</span> <span class="k">return</span> <span class="mi">0</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC134'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC135'><span class="cm">     * Only used if overlays are used for camera preview.</span></div><div class='line' id='LC136'><span class="cm">     */</span></div><div class='line' id='LC137'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">bool</span>         <span class="nf">useOverlay</span><span class="p">()</span> <span class="p">{</span><span class="k">return</span> <span class="nb">false</span><span class="p">;}</span></div><div class='line' id='LC138'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">status_t</span>     <span class="nf">setOverlay</span><span class="p">(</span><span class="k">const</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">Overlay</span><span class="o">&gt;</span> <span class="o">&amp;</span><span class="n">overlay</span><span class="p">)</span> <span class="p">{</span><span class="k">return</span> <span class="n">BAD_VALUE</span><span class="p">;}</span></div><div class='line' id='LC139'><br/></div><div class='line' id='LC140'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC141'><span class="cm">     * Stop a previously started preview.</span></div><div class='line' id='LC142'><span class="cm">     */</span></div><div class='line' id='LC143'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span>        <span class="n">stopPreview</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC144'><br/></div><div class='line' id='LC145'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC146'><span class="cm">     * Returns true if preview is enabled.</span></div><div class='line' id='LC147'><span class="cm">     */</span></div><div class='line' id='LC148'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">bool</span>        <span class="n">previewEnabled</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC149'><br/></div><div class='line' id='LC150'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC151'><span class="cm">     * Start record mode. When a record image is available a CAMERA_MSG_VIDEO_FRAME</span></div><div class='line' id='LC152'><span class="cm">     * message is sent with the corresponding frame. Every record frame must be released</span></div><div class='line' id='LC153'><span class="cm">     * by calling releaseRecordingFrame().</span></div><div class='line' id='LC154'><span class="cm">     */</span></div><div class='line' id='LC155'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">status_t</span>    <span class="n">startRecording</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC156'><br/></div><div class='line' id='LC157'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC158'><span class="cm">     * Stop a previously started recording.</span></div><div class='line' id='LC159'><span class="cm">     */</span></div><div class='line' id='LC160'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span>        <span class="n">stopRecording</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC161'><br/></div><div class='line' id='LC162'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC163'><span class="cm">     * Returns true if recording is enabled.</span></div><div class='line' id='LC164'><span class="cm">     */</span></div><div class='line' id='LC165'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">bool</span>        <span class="n">recordingEnabled</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC166'><br/></div><div class='line' id='LC167'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC168'><span class="cm">     * Release a record frame previously returned by CAMERA_MSG_VIDEO_FRAME.</span></div><div class='line' id='LC169'><span class="cm">     */</span></div><div class='line' id='LC170'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span>        <span class="n">releaseRecordingFrame</span><span class="p">(</span><span class="k">const</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemory</span><span class="o">&gt;&amp;</span> <span class="n">mem</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC171'><br/></div><div class='line' id='LC172'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC173'><span class="cm">     * Start auto focus, the notification callback routine is called</span></div><div class='line' id='LC174'><span class="cm">     * with CAMERA_MSG_FOCUS once when focusing is complete. autoFocus()</span></div><div class='line' id='LC175'><span class="cm">     * will be called again if another auto focus is needed.</span></div><div class='line' id='LC176'><span class="cm">     */</span></div><div class='line' id='LC177'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">status_t</span>    <span class="n">autoFocus</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC178'><br/></div><div class='line' id='LC179'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC180'><span class="cm">     * Cancels auto-focus function. If the auto-focus is still in progress,</span></div><div class='line' id='LC181'><span class="cm">     * this function will cancel it. Whether the auto-focus is in progress</span></div><div class='line' id='LC182'><span class="cm">     * or not, this function will return the focus position to the default.</span></div><div class='line' id='LC183'><span class="cm">     * If the camera does not support auto-focus, this is a no-op.</span></div><div class='line' id='LC184'><span class="cm">     */</span></div><div class='line' id='LC185'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">status_t</span>    <span class="n">cancelAutoFocus</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC186'><br/></div><div class='line' id='LC187'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC188'><span class="cm">     * Take a picture.</span></div><div class='line' id='LC189'><span class="cm">     */</span></div><div class='line' id='LC190'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">status_t</span>    <span class="n">takePicture</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC191'><br/></div><div class='line' id='LC192'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC193'><span class="cm">     * Cancel a picture that was started with takePicture.  Calling this</span></div><div class='line' id='LC194'><span class="cm">     * method when no picture is being taken is a no-op.</span></div><div class='line' id='LC195'><span class="cm">     */</span></div><div class='line' id='LC196'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">status_t</span>    <span class="n">cancelPicture</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC197'><br/></div><div class='line' id='LC198'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC199'><span class="cm">     * Set the camera parameters. This returns BAD_VALUE if any parameter is</span></div><div class='line' id='LC200'><span class="cm">     * invalid or not supported. */</span></div><div class='line' id='LC201'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">status_t</span>    <span class="n">setParameters</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC202'><br/></div><div class='line' id='LC203'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/** Return the camera parameters. */</span></div><div class='line' id='LC204'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">CameraParameters</span>  <span class="n">getParameters</span><span class="p">()</span> <span class="k">const</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC205'><br/></div><div class='line' id='LC206'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC207'><span class="cm">     * Send command to camera driver.</span></div><div class='line' id='LC208'><span class="cm">     */</span></div><div class='line' id='LC209'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">status_t</span> <span class="n">sendCommand</span><span class="p">(</span><span class="kt">int32_t</span> <span class="n">cmd</span><span class="p">,</span> <span class="kt">int32_t</span> <span class="n">arg1</span><span class="p">,</span> <span class="kt">int32_t</span> <span class="n">arg2</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC210'><br/></div><div class='line' id='LC211'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC212'><span class="cm">     * Release the hardware resources owned by this object.  Note that this is</span></div><div class='line' id='LC213'><span class="cm">     * *not* done in the destructor.</span></div><div class='line' id='LC214'><span class="cm">     */</span></div><div class='line' id='LC215'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">release</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC216'><br/></div><div class='line' id='LC217'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC218'><span class="cm">     * Dump state of the camera hardware</span></div><div class='line' id='LC219'><span class="cm">     */</span></div><div class='line' id='LC220'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">status_t</span> <span class="n">dump</span><span class="p">(</span><span class="kt">int</span> <span class="n">fd</span><span class="p">,</span> <span class="k">const</span> <span class="n">Vector</span><span class="o">&lt;</span><span class="n">String16</span><span class="o">&gt;&amp;</span> <span class="n">args</span><span class="p">)</span> <span class="k">const</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC221'><br/></div><div class='line' id='LC222'><span class="p">};</span></div><div class='line' id='LC223'><br/></div><div class='line' id='LC224'><span class="p">};</span>  <span class="c1">// namespace android</span></div><div class='line' id='LC225'><br/></div><div class='line' id='LC226'><span class="cp">#endif</span></div></pre></div>
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


    <p class="right">&copy; 2013 <span title="0.09810s from fe17.rs.github.com">GitHub</span>, Inc. All rights reserved.</p>
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

    
    <span id='server_response_time' data-time='0.09859' data-host='fe17'></span>
    
  </body>
</html>

