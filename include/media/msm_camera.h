  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>android_device_lge_p350/include/media/msm_camera.h at cm-10.1 · PecanCM/android_device_lge_p350</title>
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

        <link data-pjax-transient rel='permalink' href='/PecanCM/android_device_lge_p350/blob/44d4056a3c5f7a6e79dfb14d9e048d1c5b26daca/include/media/msm_camera.h'>
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
                  <a href="/PecanCM/android_device_lge_p350/blob/android-4.2.2_r1/include/media/msm_camera.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="android-4.2.2_r1" rel="nofollow" title="android-4.2.2_r1">android-4.2.2_r1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item selected">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/cm-10.1/include/media/msm_camera.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1" rel="nofollow" title="cm-10.1">cm-10.1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/cm-10.1-wip/include/media/msm_camera.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1-wip" rel="nofollow" title="cm-10.1-wip">cm-10.1-wip</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/gingerbread/include/media/msm_camera.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="gingerbread" rel="nofollow" title="gingerbread">gingerbread</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/ics/include/media/msm_camera.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ics" rel="nofollow" title="ics">ics</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/ics-wip/include/media/msm_camera.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ics-wip" rel="nofollow" title="ics-wip">ics-wip</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/jb-wip/include/media/msm_camera.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="jb-wip" rel="nofollow" title="jb-wip">jb-wip</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/jellybean/include/media/msm_camera.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="jellybean" rel="nofollow" title="jellybean">jellybean</a>
                </div> <!-- /.select-menu-item -->
            </div>

              <div class="select-menu-no-results">Nothing to show</div>
          </div> <!-- /.select-menu-list -->


          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="tags">
            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/PecanCM/android_device_lge_p350/blob/cm10.1-RC7/include/media/msm_camera.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm10.1-RC7" rel="nofollow" title="cm10.1-RC7">cm10.1-RC7</a>
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
          


<!-- blob contrib key: blob_contributors:v21:11301c5a21d3ed6e8a4b7f480a243a41 -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:11301c5a21d3ed6e8a4b7f480a243a41 -->


<div id="slider">
    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

        <div class="breadcrumb">
          <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/PecanCM/android_device_lge_p350" class="js-slide-to" data-branch="cm-10.1" data-direction="back" itemscope="url"><span itemprop="title">android_device_lge_p350</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/PecanCM/android_device_lge_p350/tree/cm-10.1/include" class="js-slide-to" data-branch="cm-10.1" data-direction="back" itemscope="url"><span itemprop="title">include</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/PecanCM/android_device_lge_p350/tree/cm-10.1/include/media" class="js-slide-to" data-branch="cm-10.1" data-direction="back" itemscope="url"><span itemprop="title">media</span></a></span><span class="separator"> / </span><strong class="final-path">msm_camera.h</strong> <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="include/media/msm_camera.h" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
        </div>

      <a href="/PecanCM/android_device_lge_p350/find/cm-10.1" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>


        
  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/bcce06c7ac113f588537910e1907e023?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
    <span class="author"><a href="/RonGokhale" rel="author">RonGokhale</a></span>
    <time class="js-relative-date" datetime="2013-03-27T14:52:51-07:00" title="2013-03-27 14:52:51">March 27, 2013</time>
    <div class="commit-title">
        <a href="/PecanCM/android_device_lge_p350/commit/cd1168a762b74e59ece4dad3cd6d70b119e0e25f" class="message">p350: update camera and copybit headers</a>
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
      <div class="frame" data-permalink-url="/PecanCM/android_device_lge_p350/blob/44d4056a3c5f7a6e79dfb14d9e048d1c5b26daca/include/media/msm_camera.h" data-title="android_device_lge_p350/include/media/msm_camera.h at cm-10.1 · PecanCM/android_device_lge_p350 · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="octicon octicon-file-text"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>649 lines (548 sloc)</span>
                <span>17.049 kb</span>
              </div>
              <div class="actions">
                <div class="button-group">
                        <a class="minibutton tooltipped leftwards"
                           title="Clicking this button will automatically fork this project so you can edit the file"
                           href="/PecanCM/android_device_lge_p350/edit/cm-10.1/include/media/msm_camera.h"
                           data-method="post" rel="nofollow">Edit</a>
                  <a href="/PecanCM/android_device_lge_p350/raw/cm-10.1/include/media/msm_camera.h" class="button minibutton " id="raw-url">Raw</a>
                    <a href="/PecanCM/android_device_lge_p350/blame/cm-10.1/include/media/msm_camera.h" class="button minibutton ">Blame</a>
                  <a href="/PecanCM/android_device_lge_p350/commits/cm-10.1/include/media/msm_camera.h" class="button minibutton " rel="nofollow">History</a>
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

          </td>
          <td class="blob-line-code">
                  <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/* Copyright (c) 2011, Code Aurora Forum. All rights reserved.</span></div><div class='line' id='LC2'><span class="cm"> *</span></div><div class='line' id='LC3'><span class="cm"> * Redistribution and use in source and binary forms, with or without</span></div><div class='line' id='LC4'><span class="cm"> * modification, are permitted provided that the following conditions</span></div><div class='line' id='LC5'><span class="cm"> * are met:</span></div><div class='line' id='LC6'><span class="cm"> * 1. Redistributions of source code must retain the above copyright</span></div><div class='line' id='LC7'><span class="cm"> *    notice, and the entire permission notice in its entirety,</span></div><div class='line' id='LC8'><span class="cm"> *    including the disclaimer of warranties.</span></div><div class='line' id='LC9'><span class="cm"> * 2. Redistributions in binary form must reproduce the above copyright</span></div><div class='line' id='LC10'><span class="cm"> *    notice, this list of conditions and the following disclaimer in the</span></div><div class='line' id='LC11'><span class="cm"> *    documentation and/or other materials provided with the distribution.</span></div><div class='line' id='LC12'><span class="cm"> * 3. The name of the author may not be used to endorse or promote</span></div><div class='line' id='LC13'><span class="cm"> *    products derived from this software without specific prior</span></div><div class='line' id='LC14'><span class="cm"> *    written permission.</span></div><div class='line' id='LC15'><span class="cm"> *</span></div><div class='line' id='LC16'><span class="cm"> * ALTERNATIVELY, this product may be distributed under the terms of</span></div><div class='line' id='LC17'><span class="cm"> * the GNU General Public License, version 2, in which case the provisions</span></div><div class='line' id='LC18'><span class="cm"> * of the GPL version 2 are required INSTEAD OF the BSD license.</span></div><div class='line' id='LC19'><span class="cm"> *</span></div><div class='line' id='LC20'><span class="cm"> * THIS SOFTWARE IS PROVIDED ``AS IS&#39;&#39; AND ANY EXPRESS OR IMPLIED</span></div><div class='line' id='LC21'><span class="cm"> * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES</span></div><div class='line' id='LC22'><span class="cm"> * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, ALL OF</span></div><div class='line' id='LC23'><span class="cm"> * WHICH ARE HEREBY DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE</span></div><div class='line' id='LC24'><span class="cm"> * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR</span></div><div class='line' id='LC25'><span class="cm"> * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT</span></div><div class='line' id='LC26'><span class="cm"> * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR</span></div><div class='line' id='LC27'><span class="cm"> * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF</span></div><div class='line' id='LC28'><span class="cm"> * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT</span></div><div class='line' id='LC29'><span class="cm"> * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE</span></div><div class='line' id='LC30'><span class="cm"> * USE OF THIS SOFTWARE, EVEN IF NOT ADVISED OF THE POSSIBILITY OF SUCH</span></div><div class='line' id='LC31'><span class="cm"> * DAMAGE.</span></div><div class='line' id='LC32'><span class="cm"> */</span></div><div class='line' id='LC33'><br/></div><div class='line' id='LC34'><span class="cp">#ifndef __LINUX_MSM_CAMERA_H</span></div><div class='line' id='LC35'><span class="cp">#define __LINUX_MSM_CAMERA_H</span></div><div class='line' id='LC36'><br/></div><div class='line' id='LC37'><span class="cp">#ifdef MSM_CAMERA_BIONIC</span></div><div class='line' id='LC38'><span class="cp">#include &lt;sys/types.h&gt;</span></div><div class='line' id='LC39'><span class="cp">#endif</span></div><div class='line' id='LC40'><span class="cp">#include &lt;linux/types.h&gt;</span></div><div class='line' id='LC41'><span class="cp">#include &lt;linux/ioctl.h&gt;</span></div><div class='line' id='LC42'><span class="cp">#ifdef MSM_CAMERA_GCC</span></div><div class='line' id='LC43'><span class="cp">#include &lt;time.h&gt;</span></div><div class='line' id='LC44'><span class="cp">#else</span></div><div class='line' id='LC45'><span class="cp">#include &lt;linux/time.h&gt;</span></div><div class='line' id='LC46'><span class="cp">#endif</span></div><div class='line' id='LC47'><br/></div><div class='line' id='LC48'><span class="cp">#define MSM_CAM_IOCTL_MAGIC &#39;m&#39;</span></div><div class='line' id='LC49'><br/></div><div class='line' id='LC50'><span class="cp">#define MSM_CAM_IOCTL_GET_SENSOR_INFO \</span></div><div class='line' id='LC51'><span class="cp">	_IOR(MSM_CAM_IOCTL_MAGIC, 1, struct msm_camsensor_info *)</span></div><div class='line' id='LC52'><br/></div><div class='line' id='LC53'><span class="cp">#define MSM_CAM_IOCTL_REGISTER_PMEM \</span></div><div class='line' id='LC54'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 2, struct msm_pmem_info *)</span></div><div class='line' id='LC55'><br/></div><div class='line' id='LC56'><span class="cp">#define MSM_CAM_IOCTL_UNREGISTER_PMEM \</span></div><div class='line' id='LC57'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 3, unsigned)</span></div><div class='line' id='LC58'><br/></div><div class='line' id='LC59'><span class="cp">#define MSM_CAM_IOCTL_CTRL_COMMAND \</span></div><div class='line' id='LC60'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 4, struct msm_ctrl_cmd *)</span></div><div class='line' id='LC61'><br/></div><div class='line' id='LC62'><span class="cp">#define MSM_CAM_IOCTL_CONFIG_VFE  \</span></div><div class='line' id='LC63'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 5, struct msm_camera_vfe_cfg_cmd *)</span></div><div class='line' id='LC64'><br/></div><div class='line' id='LC65'><span class="cp">#define MSM_CAM_IOCTL_GET_STATS \</span></div><div class='line' id='LC66'><span class="cp">	_IOR(MSM_CAM_IOCTL_MAGIC, 6, struct msm_camera_stats_event_ctrl *)</span></div><div class='line' id='LC67'><br/></div><div class='line' id='LC68'><span class="cp">#define MSM_CAM_IOCTL_GETFRAME \</span></div><div class='line' id='LC69'><span class="cp">	_IOR(MSM_CAM_IOCTL_MAGIC, 7, struct msm_camera_get_frame *)</span></div><div class='line' id='LC70'><br/></div><div class='line' id='LC71'><span class="cp">#define MSM_CAM_IOCTL_ENABLE_VFE \</span></div><div class='line' id='LC72'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 8, struct camera_enable_cmd *)</span></div><div class='line' id='LC73'><br/></div><div class='line' id='LC74'><span class="cp">#define MSM_CAM_IOCTL_CTRL_CMD_DONE \</span></div><div class='line' id='LC75'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 9, struct camera_cmd *)</span></div><div class='line' id='LC76'><br/></div><div class='line' id='LC77'><span class="cp">#define MSM_CAM_IOCTL_CONFIG_CMD \</span></div><div class='line' id='LC78'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 10, struct camera_cmd *)</span></div><div class='line' id='LC79'><br/></div><div class='line' id='LC80'><span class="cp">#define MSM_CAM_IOCTL_DISABLE_VFE \</span></div><div class='line' id='LC81'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 11, struct camera_enable_cmd *)</span></div><div class='line' id='LC82'><br/></div><div class='line' id='LC83'><span class="cp">#define MSM_CAM_IOCTL_PAD_REG_RESET2 \</span></div><div class='line' id='LC84'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 12, struct camera_enable_cmd *)</span></div><div class='line' id='LC85'><br/></div><div class='line' id='LC86'><span class="cp">#define MSM_CAM_IOCTL_VFE_APPS_RESET \</span></div><div class='line' id='LC87'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 13, struct camera_enable_cmd *)</span></div><div class='line' id='LC88'><br/></div><div class='line' id='LC89'><span class="cp">#define MSM_CAM_IOCTL_RELEASE_FRAME_BUFFER \</span></div><div class='line' id='LC90'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 14, struct camera_enable_cmd *)</span></div><div class='line' id='LC91'><br/></div><div class='line' id='LC92'><span class="cp">#define MSM_CAM_IOCTL_RELEASE_STATS_BUFFER \</span></div><div class='line' id='LC93'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 15, struct msm_stats_buf *)</span></div><div class='line' id='LC94'><br/></div><div class='line' id='LC95'><span class="cp">#define MSM_CAM_IOCTL_AXI_CONFIG \</span></div><div class='line' id='LC96'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 16, struct msm_camera_vfe_cfg_cmd *)</span></div><div class='line' id='LC97'><br/></div><div class='line' id='LC98'><span class="cp">#define MSM_CAM_IOCTL_GET_PICTURE \</span></div><div class='line' id='LC99'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 17, struct msm_camera_ctrl_cmd *)</span></div><div class='line' id='LC100'><br/></div><div class='line' id='LC101'><span class="cp">#define MSM_CAM_IOCTL_SET_CROP \</span></div><div class='line' id='LC102'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 18, struct crop_info *)</span></div><div class='line' id='LC103'><br/></div><div class='line' id='LC104'><span class="cp">#define MSM_CAM_IOCTL_PICT_PP \</span></div><div class='line' id='LC105'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 19, uint8_t *)</span></div><div class='line' id='LC106'><br/></div><div class='line' id='LC107'><span class="cp">#define MSM_CAM_IOCTL_PICT_PP_DONE \</span></div><div class='line' id='LC108'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 20, struct msm_snapshot_pp_status *)</span></div><div class='line' id='LC109'><br/></div><div class='line' id='LC110'><span class="cp">#define MSM_CAM_IOCTL_SENSOR_IO_CFG \</span></div><div class='line' id='LC111'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 21, struct sensor_cfg_data *)</span></div><div class='line' id='LC112'><br/></div><div class='line' id='LC113'><span class="cp">#define MSM_CAM_IOCTL_FLASH_LED_CFG \</span></div><div class='line' id='LC114'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 22, unsigned *)</span></div><div class='line' id='LC115'><br/></div><div class='line' id='LC116'><span class="cp">#define MSM_CAM_IOCTL_UNBLOCK_POLL_FRAME \</span></div><div class='line' id='LC117'><span class="cp">	_IO(MSM_CAM_IOCTL_MAGIC, 23)</span></div><div class='line' id='LC118'><br/></div><div class='line' id='LC119'><span class="cp">#define MSM_CAM_IOCTL_CTRL_COMMAND_2 \</span></div><div class='line' id='LC120'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 24, struct msm_ctrl_cmd *)</span></div><div class='line' id='LC121'><br/></div><div class='line' id='LC122'><span class="cp">#define MSM_CAM_IOCTL_AF_CTRL \</span></div><div class='line' id='LC123'><span class="cp">	_IOR(MSM_CAM_IOCTL_MAGIC, 25, struct msm_ctrl_cmt_t *)</span></div><div class='line' id='LC124'><br/></div><div class='line' id='LC125'><span class="cp">#define MSM_CAM_IOCTL_AF_CTRL_DONE \</span></div><div class='line' id='LC126'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 26, struct msm_ctrl_cmt_t *)</span></div><div class='line' id='LC127'><br/></div><div class='line' id='LC128'><span class="cp">#define MSM_CAM_IOCTL_CONFIG_VPE \</span></div><div class='line' id='LC129'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 27, struct msm_camera_vpe_cfg_cmd *)</span></div><div class='line' id='LC130'><br/></div><div class='line' id='LC131'><span class="cp">#define MSM_CAM_IOCTL_AXI_VPE_CONFIG \</span></div><div class='line' id='LC132'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 28, struct msm_camera_vpe_cfg_cmd *)</span></div><div class='line' id='LC133'><br/></div><div class='line' id='LC134'><span class="cp">#define MSM_CAM_IOCTL_STROBE_FLASH_CFG \</span></div><div class='line' id='LC135'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 29, uint32_t *)</span></div><div class='line' id='LC136'><br/></div><div class='line' id='LC137'><span class="cp">#define MSM_CAM_IOCTL_STROBE_FLASH_CHARGE \</span></div><div class='line' id='LC138'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 30, uint32_t *)</span></div><div class='line' id='LC139'><br/></div><div class='line' id='LC140'><span class="cp">#define MSM_CAM_IOCTL_STROBE_FLASH_RELEASE \</span></div><div class='line' id='LC141'><span class="cp">	_IO(MSM_CAM_IOCTL_MAGIC, 31)</span></div><div class='line' id='LC142'><br/></div><div class='line' id='LC143'><span class="cp">#define MSM_CAM_IOCTL_FLASH_CTRL \</span></div><div class='line' id='LC144'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 32, struct flash_ctrl_data *)</span></div><div class='line' id='LC145'><br/></div><div class='line' id='LC146'><span class="cp">#define MSM_CAM_IOCTL_ERROR_CONFIG \</span></div><div class='line' id='LC147'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 33, uint32_t *)</span></div><div class='line' id='LC148'><br/></div><div class='line' id='LC149'><span class="cp">#define MSM_CAM_IOCTL_ABORT_CAPTURE \</span></div><div class='line' id='LC150'><span class="cp">	_IO(MSM_CAM_IOCTL_MAGIC, 34)</span></div><div class='line' id='LC151'><br/></div><div class='line' id='LC152'><span class="cp">#define MSM_CAM_IOCTL_SET_FD_ROI \</span></div><div class='line' id='LC153'><span class="cp">	_IOW(MSM_CAM_IOCTL_MAGIC, 35, struct fd_roi_info *)</span></div><div class='line' id='LC154'><br/></div><div class='line' id='LC155'><span class="cp">#define MSM_CAM_IOCTL_GET_CAMERA_INFO \</span></div><div class='line' id='LC156'><span class="cp">	_IOR(MSM_CAM_IOCTL_MAGIC, 36, struct msm_camera_info *)</span></div><div class='line' id='LC157'><br/></div><div class='line' id='LC158'><span class="cp">#define MSM_CAMERA_LED_OFF  0</span></div><div class='line' id='LC159'><span class="cp">#define MSM_CAMERA_LED_LOW  1</span></div><div class='line' id='LC160'><span class="cp">#define MSM_CAMERA_LED_HIGH 2</span></div><div class='line' id='LC161'><br/></div><div class='line' id='LC162'><span class="cp">#define MSM_CAMERA_STROBE_FLASH_NONE 0</span></div><div class='line' id='LC163'><span class="cp">#define MSM_CAMERA_STROBE_FLASH_XENON 1</span></div><div class='line' id='LC164'><br/></div><div class='line' id='LC165'><span class="cp">#define MSM_MAX_CAMERA_SENSORS  5</span></div><div class='line' id='LC166'><span class="cp">#define MAX_SENSOR_NAME 32</span></div><div class='line' id='LC167'><br/></div><div class='line' id='LC168'><span class="cp">#define PP_SNAP  0x01</span></div><div class='line' id='LC169'><span class="cp">#define PP_RAW_SNAP ((0x01)&lt;&lt;1)</span></div><div class='line' id='LC170'><span class="cp">#define PP_PREV  ((0x01)&lt;&lt;2)</span></div><div class='line' id='LC171'><span class="cp">#define PP_MASK		(PP_SNAP|PP_RAW_SNAP|PP_PREV)</span></div><div class='line' id='LC172'><br/></div><div class='line' id='LC173'><span class="cp">#define MSM_CAM_CTRL_CMD_DONE  0</span></div><div class='line' id='LC174'><span class="cp">#define MSM_CAM_SENSOR_VFE_CMD 1</span></div><div class='line' id='LC175'><br/></div><div class='line' id='LC176'><span class="cm">/*****************************************************</span></div><div class='line' id='LC177'><span class="cm"> *  structure</span></div><div class='line' id='LC178'><span class="cm"> *****************************************************/</span></div><div class='line' id='LC179'><br/></div><div class='line' id='LC180'><span class="cm">/* define five type of structures for userspace &lt;==&gt; kernel</span></div><div class='line' id='LC181'><span class="cm"> * space communication:</span></div><div class='line' id='LC182'><span class="cm"> * command 1 - 2 are from userspace ==&gt; kernel</span></div><div class='line' id='LC183'><span class="cm"> * command 3 - 4 are from kernel ==&gt; userspace</span></div><div class='line' id='LC184'><span class="cm"> *</span></div><div class='line' id='LC185'><span class="cm"> * 1. control command: control command(from control thread),</span></div><div class='line' id='LC186'><span class="cm"> *                     control status (from config thread);</span></div><div class='line' id='LC187'><span class="cm"> */</span></div><div class='line' id='LC188'><span class="k">struct</span> <span class="n">msm_ctrl_cmd</span> <span class="p">{</span></div><div class='line' id='LC189'>	<span class="kt">uint16_t</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC190'>	<span class="kt">uint16_t</span> <span class="n">length</span><span class="p">;</span></div><div class='line' id='LC191'>	<span class="kt">void</span> <span class="o">*</span><span class="n">value</span><span class="p">;</span></div><div class='line' id='LC192'>	<span class="kt">uint16_t</span> <span class="n">status</span><span class="p">;</span></div><div class='line' id='LC193'>	<span class="kt">uint32_t</span> <span class="n">timeout_ms</span><span class="p">;</span></div><div class='line' id='LC194'>	<span class="kt">int</span> <span class="n">resp_fd</span><span class="p">;</span> <span class="cm">/* FIXME: to be used by the kernel, pass-through for now */</span></div><div class='line' id='LC195'><span class="p">};</span></div><div class='line' id='LC196'><br/></div><div class='line' id='LC197'><span class="k">struct</span> <span class="n">msm_vfe_evt_msg</span> <span class="p">{</span></div><div class='line' id='LC198'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">type</span><span class="p">;</span>	<span class="cm">/* 1 == event (RPC), 0 == message (adsp) */</span></div><div class='line' id='LC199'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">msg_id</span><span class="p">;</span></div><div class='line' id='LC200'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">len</span><span class="p">;</span>	<span class="cm">/* size in, number of bytes out */</span></div><div class='line' id='LC201'><span class="cp">#ifndef CONFIG_MACH_MSM7X27_ALESSI</span></div><div class='line' id='LC202'>	<span class="kt">uint32_t</span> <span class="n">frame_id</span><span class="p">;</span></div><div class='line' id='LC203'><span class="cp">#endif</span></div><div class='line' id='LC204'>	<span class="kt">void</span> <span class="o">*</span><span class="n">data</span><span class="p">;</span></div><div class='line' id='LC205'><span class="p">};</span></div><div class='line' id='LC206'><br/></div><div class='line' id='LC207'><span class="k">struct</span> <span class="n">msm_isp_evt_msg</span> <span class="p">{</span></div><div class='line' id='LC208'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">type</span><span class="p">;</span>	<span class="cm">/* 1 == event (RPC), 0 == message (adsp) */</span></div><div class='line' id='LC209'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">msg_id</span><span class="p">;</span></div><div class='line' id='LC210'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">len</span><span class="p">;</span>	<span class="cm">/* size in, number of bytes out */</span></div><div class='line' id='LC211'>	<span class="cm">/* maximum possible data size that can be</span></div><div class='line' id='LC212'><span class="cm">i	  sent to user space as v4l2 data structure</span></div><div class='line' id='LC213'><span class="cm">	  is only of 64 bytes */</span></div><div class='line' id='LC214'>	<span class="kt">uint8_t</span> <span class="n">data</span><span class="p">[</span><span class="mi">48</span><span class="p">];</span></div><div class='line' id='LC215'><span class="p">};</span></div><div class='line' id='LC216'><span class="k">struct</span> <span class="n">msm_vpe_evt_msg</span> <span class="p">{</span></div><div class='line' id='LC217'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">type</span><span class="p">;</span> <span class="cm">/* 1 == event (RPC), 0 == message (adsp) */</span></div><div class='line' id='LC218'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">msg_id</span><span class="p">;</span></div><div class='line' id='LC219'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">len</span><span class="p">;</span> <span class="cm">/* size in, number of bytes out */</span></div><div class='line' id='LC220'>	<span class="kt">uint32_t</span> <span class="n">frame_id</span><span class="p">;</span></div><div class='line' id='LC221'>	<span class="kt">void</span> <span class="o">*</span><span class="n">data</span><span class="p">;</span></div><div class='line' id='LC222'><span class="p">};</span></div><div class='line' id='LC223'><span class="k">struct</span> <span class="n">msm_isp_stats_event_ctrl</span> <span class="p">{</span></div><div class='line' id='LC224'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">resptype</span><span class="p">;</span></div><div class='line' id='LC225'>	<span class="k">union</span> <span class="p">{</span></div><div class='line' id='LC226'>		<span class="k">struct</span> <span class="n">msm_isp_evt_msg</span> <span class="n">isp_msg</span><span class="p">;</span></div><div class='line' id='LC227'>		<span class="k">struct</span> <span class="n">msm_ctrl_cmd</span> <span class="n">ctrl</span><span class="p">;</span></div><div class='line' id='LC228'>	<span class="p">}</span> <span class="n">isp_data</span><span class="p">;</span></div><div class='line' id='LC229'>	<span class="kt">uint32_t</span> <span class="n">evt_id</span><span class="p">;</span></div><div class='line' id='LC230'><span class="p">};</span></div><div class='line' id='LC231'><br/></div><div class='line' id='LC232'><span class="cp">#define MSM_CAM_RESP_CTRL         0</span></div><div class='line' id='LC233'><span class="cp">#define MSM_CAM_RESP_STAT_EVT_MSG 1</span></div><div class='line' id='LC234'><span class="cp">#define MSM_CAM_RESP_V4L2         2</span></div><div class='line' id='LC235'><span class="cp">#define MSM_CAM_RESP_MAX          3</span></div><div class='line' id='LC236'><br/></div><div class='line' id='LC237'><span class="cm">/* this one is used to send ctrl/status up to config thread */</span></div><div class='line' id='LC238'><span class="k">struct</span> <span class="n">msm_stats_event_ctrl</span> <span class="p">{</span></div><div class='line' id='LC239'>	<span class="cm">/* 0 - ctrl_cmd from control thread,</span></div><div class='line' id='LC240'><span class="cm">	 * 1 - stats/event kernel,</span></div><div class='line' id='LC241'><span class="cm">	 * 2 - V4L control or read request */</span></div><div class='line' id='LC242'>	<span class="kt">int</span> <span class="n">resptype</span><span class="p">;</span></div><div class='line' id='LC243'>	<span class="kt">int</span> <span class="n">timeout_ms</span><span class="p">;</span></div><div class='line' id='LC244'>	<span class="k">struct</span> <span class="n">msm_ctrl_cmd</span> <span class="n">ctrl_cmd</span><span class="p">;</span></div><div class='line' id='LC245'>	<span class="cm">/* struct  vfe_event_t  stats_event; */</span></div><div class='line' id='LC246'>	<span class="k">struct</span> <span class="n">msm_vfe_evt_msg</span> <span class="n">stats_event</span><span class="p">;</span></div><div class='line' id='LC247'><span class="p">};</span></div><div class='line' id='LC248'><br/></div><div class='line' id='LC249'><span class="cm">/* 2. config command: config command(from config thread); */</span></div><div class='line' id='LC250'><span class="k">struct</span> <span class="n">msm_camera_cfg_cmd</span> <span class="p">{</span></div><div class='line' id='LC251'>	<span class="cm">/* what to config:</span></div><div class='line' id='LC252'><span class="cm">	 * 1 - sensor config, 2 - vfe config */</span></div><div class='line' id='LC253'>	<span class="kt">uint16_t</span> <span class="n">cfg_type</span><span class="p">;</span></div><div class='line' id='LC254'><br/></div><div class='line' id='LC255'>	<span class="cm">/* sensor config type */</span></div><div class='line' id='LC256'>	<span class="kt">uint16_t</span> <span class="n">cmd_type</span><span class="p">;</span></div><div class='line' id='LC257'>	<span class="kt">uint16_t</span> <span class="n">queue</span><span class="p">;</span></div><div class='line' id='LC258'>	<span class="kt">uint16_t</span> <span class="n">length</span><span class="p">;</span></div><div class='line' id='LC259'>	<span class="kt">void</span> <span class="o">*</span><span class="n">value</span><span class="p">;</span></div><div class='line' id='LC260'><span class="p">};</span></div><div class='line' id='LC261'><br/></div><div class='line' id='LC262'><span class="cp">#define CMD_GENERAL			0</span></div><div class='line' id='LC263'><span class="cp">#define CMD_AXI_CFG_OUT1		1</span></div><div class='line' id='LC264'><span class="cp">#define CMD_AXI_CFG_SNAP_O1_AND_O2	2</span></div><div class='line' id='LC265'><span class="cp">#define CMD_AXI_CFG_OUT2		3</span></div><div class='line' id='LC266'><span class="cp">#define CMD_PICT_T_AXI_CFG		4</span></div><div class='line' id='LC267'><span class="cp">#define CMD_PICT_M_AXI_CFG		5</span></div><div class='line' id='LC268'><span class="cp">#define CMD_RAW_PICT_AXI_CFG		6</span></div><div class='line' id='LC269'><br/></div><div class='line' id='LC270'><span class="cp">#define CMD_FRAME_BUF_RELEASE		7</span></div><div class='line' id='LC271'><span class="cp">#define CMD_PREV_BUF_CFG		8</span></div><div class='line' id='LC272'><span class="cp">#define CMD_SNAP_BUF_RELEASE		9</span></div><div class='line' id='LC273'><span class="cp">#define CMD_SNAP_BUF_CFG		10</span></div><div class='line' id='LC274'><span class="cp">#define CMD_STATS_DISABLE		11</span></div><div class='line' id='LC275'><span class="cp">#define CMD_STATS_AEC_AWB_ENABLE	12</span></div><div class='line' id='LC276'><span class="cp">#define CMD_STATS_AF_ENABLE		13</span></div><div class='line' id='LC277'><span class="cp">#define CMD_STATS_AEC_ENABLE		14</span></div><div class='line' id='LC278'><span class="cp">#define CMD_STATS_AWB_ENABLE		15</span></div><div class='line' id='LC279'><span class="cp">#define CMD_STATS_ENABLE  		16</span></div><div class='line' id='LC280'><br/></div><div class='line' id='LC281'><span class="cp">#define CMD_STATS_AXI_CFG		17</span></div><div class='line' id='LC282'><span class="cp">#define CMD_STATS_AEC_AXI_CFG		18</span></div><div class='line' id='LC283'><span class="cp">#define CMD_STATS_AF_AXI_CFG 		19</span></div><div class='line' id='LC284'><span class="cp">#define CMD_STATS_AWB_AXI_CFG		20</span></div><div class='line' id='LC285'><span class="cp">#define CMD_STATS_RS_AXI_CFG		21</span></div><div class='line' id='LC286'><span class="cp">#define CMD_STATS_CS_AXI_CFG		22</span></div><div class='line' id='LC287'><span class="cp">#define CMD_STATS_IHIST_AXI_CFG		23</span></div><div class='line' id='LC288'><span class="cp">#define CMD_STATS_SKIN_AXI_CFG		24</span></div><div class='line' id='LC289'><br/></div><div class='line' id='LC290'><span class="cp">#define CMD_STATS_BUF_RELEASE		25</span></div><div class='line' id='LC291'><span class="cp">#define CMD_STATS_AEC_BUF_RELEASE	26</span></div><div class='line' id='LC292'><span class="cp">#define CMD_STATS_AF_BUF_RELEASE	27</span></div><div class='line' id='LC293'><span class="cp">#define CMD_STATS_AWB_BUF_RELEASE	28</span></div><div class='line' id='LC294'><span class="cp">#define CMD_STATS_RS_BUF_RELEASE	29</span></div><div class='line' id='LC295'><span class="cp">#define CMD_STATS_CS_BUF_RELEASE	30</span></div><div class='line' id='LC296'><span class="cp">#define CMD_STATS_IHIST_BUF_RELEASE	31</span></div><div class='line' id='LC297'><span class="cp">#define CMD_STATS_SKIN_BUF_RELEASE	32</span></div><div class='line' id='LC298'><br/></div><div class='line' id='LC299'><span class="cp">#define UPDATE_STATS_INVALID		33</span></div><div class='line' id='LC300'><span class="cp">#define CMD_AXI_CFG_SNAP_GEMINI		34</span></div><div class='line' id='LC301'><span class="cp">#define CMD_AXI_CFG_SNAP		35</span></div><div class='line' id='LC302'><span class="cp">#define CMD_AXI_CFG_PREVIEW		36</span></div><div class='line' id='LC303'><span class="cp">#define CMD_AXI_CFG_VIDEO		37</span></div><div class='line' id='LC304'><br/></div><div class='line' id='LC305'><span class="cp">#define CMD_STATS_IHIST_ENABLE 38</span></div><div class='line' id='LC306'><span class="cp">#define CMD_STATS_RS_ENABLE 39</span></div><div class='line' id='LC307'><span class="cp">#define CMD_STATS_CS_ENABLE 40</span></div><div class='line' id='LC308'><span class="cp">#define CMD_VPE 41</span></div><div class='line' id='LC309'><span class="cp">#define CMD_AXI_CFG_VPE 42</span></div><div class='line' id='LC310'><br/></div><div class='line' id='LC311'><span class="cm">/* vfe config command: config command(from config thread)*/</span></div><div class='line' id='LC312'><span class="k">struct</span> <span class="n">msm_vfe_cfg_cmd</span> <span class="p">{</span></div><div class='line' id='LC313'>	<span class="kt">int</span> <span class="n">cmd_type</span><span class="p">;</span></div><div class='line' id='LC314'>	<span class="kt">uint16_t</span> <span class="n">length</span><span class="p">;</span></div><div class='line' id='LC315'>	<span class="kt">void</span> <span class="o">*</span><span class="n">value</span><span class="p">;</span></div><div class='line' id='LC316'><span class="p">};</span></div><div class='line' id='LC317'><br/></div><div class='line' id='LC318'><span class="k">struct</span> <span class="n">msm_vpe_cfg_cmd</span> <span class="p">{</span></div><div class='line' id='LC319'>	<span class="kt">int</span> <span class="n">cmd_type</span><span class="p">;</span></div><div class='line' id='LC320'>	<span class="kt">uint16_t</span> <span class="n">length</span><span class="p">;</span></div><div class='line' id='LC321'>	<span class="kt">void</span> <span class="o">*</span><span class="n">value</span><span class="p">;</span></div><div class='line' id='LC322'><span class="p">};</span></div><div class='line' id='LC323'><br/></div><div class='line' id='LC324'><span class="cp">#define MAX_CAMERA_ENABLE_NAME_LEN 32</span></div><div class='line' id='LC325'><span class="k">struct</span> <span class="n">camera_enable_cmd</span> <span class="p">{</span></div><div class='line' id='LC326'>	<span class="kt">char</span> <span class="n">name</span><span class="p">[</span><span class="n">MAX_CAMERA_ENABLE_NAME_LEN</span><span class="p">];</span></div><div class='line' id='LC327'><span class="p">};</span></div><div class='line' id='LC328'><br/></div><div class='line' id='LC329'><span class="cp">#define MSM_PMEM_OUTPUT1		0</span></div><div class='line' id='LC330'><span class="cp">#define MSM_PMEM_OUTPUT2		1</span></div><div class='line' id='LC331'><span class="cp">#define MSM_PMEM_OUTPUT1_OUTPUT2	2</span></div><div class='line' id='LC332'><span class="cp">#define MSM_PMEM_THUMBNAIL		3</span></div><div class='line' id='LC333'><span class="cp">#define MSM_PMEM_MAINIMG		4</span></div><div class='line' id='LC334'><span class="cp">#define MSM_PMEM_RAW_MAINIMG		5</span></div><div class='line' id='LC335'><span class="cp">#define MSM_PMEM_AEC_AWB		6</span></div><div class='line' id='LC336'><span class="cp">#define MSM_PMEM_AF			7</span></div><div class='line' id='LC337'><span class="cp">#define MSM_PMEM_AEC			8</span></div><div class='line' id='LC338'><span class="cp">#define MSM_PMEM_AWB			9</span></div><div class='line' id='LC339'><span class="cp">#define MSM_PMEM_RS		    	10</span></div><div class='line' id='LC340'><span class="cp">#define MSM_PMEM_CS	    		11</span></div><div class='line' id='LC341'><span class="cp">#define MSM_PMEM_IHIST			12</span></div><div class='line' id='LC342'><span class="cp">#define MSM_PMEM_SKIN			13</span></div><div class='line' id='LC343'><span class="cp">#define MSM_PMEM_VIDEO			14</span></div><div class='line' id='LC344'><span class="cp">#define MSM_PMEM_PREVIEW		15</span></div><div class='line' id='LC345'><span class="cp">#define MSM_PMEM_VIDEO_VPE		16</span></div><div class='line' id='LC346'><span class="cp">#define MSM_PMEM_MAX			17</span></div><div class='line' id='LC347'><br/></div><div class='line' id='LC348'><span class="cp">#define STAT_AEAW			0</span></div><div class='line' id='LC349'><span class="cp">#define STAT_AEC			1</span></div><div class='line' id='LC350'><span class="cp">#define STAT_AF				2</span></div><div class='line' id='LC351'><span class="cp">#define STAT_AWB			3</span></div><div class='line' id='LC352'><span class="cp">#define STAT_RS				4</span></div><div class='line' id='LC353'><span class="cp">#define STAT_CS				5</span></div><div class='line' id='LC354'><span class="cp">#define STAT_IHIST			6</span></div><div class='line' id='LC355'><span class="cp">#define STAT_SKIN			7</span></div><div class='line' id='LC356'><span class="cp">#define STAT_MAX			8</span></div><div class='line' id='LC357'><br/></div><div class='line' id='LC358'><span class="cp">#define FRAME_PREVIEW_OUTPUT1		0</span></div><div class='line' id='LC359'><span class="cp">#define FRAME_PREVIEW_OUTPUT2		1</span></div><div class='line' id='LC360'><span class="cp">#define FRAME_SNAPSHOT			2</span></div><div class='line' id='LC361'><span class="cp">#define FRAME_THUMBNAIL			3</span></div><div class='line' id='LC362'><span class="cp">#define FRAME_RAW_SNAPSHOT		4</span></div><div class='line' id='LC363'><span class="cp">#define FRAME_MAX			5</span></div><div class='line' id='LC364'><br/></div><div class='line' id='LC365'><span class="k">struct</span> <span class="n">msm_pmem_info</span> <span class="p">{</span></div><div class='line' id='LC366'>	<span class="kt">int</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC367'>	<span class="kt">int</span> <span class="n">fd</span><span class="p">;</span></div><div class='line' id='LC368'>	<span class="kt">void</span> <span class="o">*</span><span class="n">vaddr</span><span class="p">;</span></div><div class='line' id='LC369'>	<span class="kt">uint32_t</span> <span class="n">offset</span><span class="p">;</span></div><div class='line' id='LC370'>	<span class="kt">uint32_t</span> <span class="n">len</span><span class="p">;</span></div><div class='line' id='LC371'>	<span class="kt">uint32_t</span> <span class="n">y_off</span><span class="p">;</span></div><div class='line' id='LC372'>	<span class="kt">uint32_t</span> <span class="n">cbcr_off</span><span class="p">;</span></div><div class='line' id='LC373'>	<span class="kt">uint8_t</span> <span class="n">active</span><span class="p">;</span></div><div class='line' id='LC374'><span class="p">};</span></div><div class='line' id='LC375'><br/></div><div class='line' id='LC376'><span class="k">struct</span> <span class="n">outputCfg</span> <span class="p">{</span></div><div class='line' id='LC377'>	<span class="kt">uint32_t</span> <span class="n">height</span><span class="p">;</span></div><div class='line' id='LC378'>	<span class="kt">uint32_t</span> <span class="n">width</span><span class="p">;</span></div><div class='line' id='LC379'><br/></div><div class='line' id='LC380'>	<span class="kt">uint32_t</span> <span class="n">window_height_firstline</span><span class="p">;</span></div><div class='line' id='LC381'>	<span class="kt">uint32_t</span> <span class="n">window_height_lastline</span><span class="p">;</span></div><div class='line' id='LC382'><span class="p">};</span></div><div class='line' id='LC383'><br/></div><div class='line' id='LC384'><span class="cp">#define OUTPUT_1	0</span></div><div class='line' id='LC385'><span class="cp">#define OUTPUT_2	1</span></div><div class='line' id='LC386'><span class="cp">#define OUTPUT_1_AND_2            2   </span><span class="cm">/* snapshot only */</span><span class="cp"></span></div><div class='line' id='LC387'><span class="cp">#define OUTPUT_1_AND_3            3   </span><span class="cm">/* video */</span><span class="cp"></span></div><div class='line' id='LC388'><span class="cp">#define CAMIF_TO_AXI_VIA_OUTPUT_2 4</span></div><div class='line' id='LC389'><span class="cp">#define OUTPUT_1_AND_CAMIF_TO_AXI_VIA_OUTPUT_2 5</span></div><div class='line' id='LC390'><span class="cp">#define OUTPUT_2_AND_CAMIF_TO_AXI_VIA_OUTPUT_1 6</span></div><div class='line' id='LC391'><span class="cp">#define LAST_AXI_OUTPUT_MODE_ENUM = OUTPUT_2_AND_CAMIF_TO_AXI_VIA_OUTPUT_1 7</span></div><div class='line' id='LC392'><br/></div><div class='line' id='LC393'><span class="cp">#define MSM_FRAME_PREV_1	0</span></div><div class='line' id='LC394'><span class="cp">#define MSM_FRAME_PREV_2	1</span></div><div class='line' id='LC395'><span class="cp">#define MSM_FRAME_ENC		2</span></div><div class='line' id='LC396'><br/></div><div class='line' id='LC397'><span class="cp">#define OUTPUT_TYPE_P		(1&lt;&lt;0)</span></div><div class='line' id='LC398'><span class="cp">#define OUTPUT_TYPE_T		(1&lt;&lt;1)</span></div><div class='line' id='LC399'><span class="cp">#define OUTPUT_TYPE_S		(1&lt;&lt;2)</span></div><div class='line' id='LC400'><span class="cp">#define OUTPUT_TYPE_V		(1&lt;&lt;3)</span></div><div class='line' id='LC401'><span class="cp">#define OUTPUT_TYPE_L		(1&lt;&lt;4)</span></div><div class='line' id='LC402'><br/></div><div class='line' id='LC403'><span class="k">struct</span> <span class="n">fd_roi_info</span> <span class="p">{</span></div><div class='line' id='LC404'>	<span class="kt">void</span> <span class="o">*</span><span class="n">info</span><span class="p">;</span></div><div class='line' id='LC405'>	<span class="kt">int</span> <span class="n">info_len</span><span class="p">;</span></div><div class='line' id='LC406'><span class="p">};</span></div><div class='line' id='LC407'><br/></div><div class='line' id='LC408'><span class="k">struct</span> <span class="n">msm_frame</span> <span class="p">{</span></div><div class='line' id='LC409'>	<span class="k">struct</span> <span class="n">timespec</span> <span class="n">ts</span><span class="p">;</span></div><div class='line' id='LC410'>	<span class="kt">int</span> <span class="n">path</span><span class="p">;</span></div><div class='line' id='LC411'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">buffer</span><span class="p">;</span></div><div class='line' id='LC412'>	<span class="kt">uint32_t</span> <span class="n">y_off</span><span class="p">;</span></div><div class='line' id='LC413'>	<span class="kt">uint32_t</span> <span class="n">cbcr_off</span><span class="p">;</span></div><div class='line' id='LC414'>	<span class="kt">int</span> <span class="n">fd</span><span class="p">;</span></div><div class='line' id='LC415'><br/></div><div class='line' id='LC416'>	<span class="kt">void</span> <span class="o">*</span><span class="n">cropinfo</span><span class="p">;</span></div><div class='line' id='LC417'>	<span class="kt">int</span> <span class="n">croplen</span><span class="p">;</span></div><div class='line' id='LC418'><span class="cp">#ifndef CONFIG_MACH_MSM7X27_ALESSI</span></div><div class='line' id='LC419'>	<span class="kt">uint32_t</span> <span class="n">error_code</span><span class="p">;</span></div><div class='line' id='LC420'>	<span class="k">struct</span> <span class="n">fd_roi_info</span> <span class="n">roi_info</span><span class="p">;</span></div><div class='line' id='LC421'><span class="cp">#endif</span></div><div class='line' id='LC422'><span class="p">};</span></div><div class='line' id='LC423'><br/></div><div class='line' id='LC424'><span class="cp">#define MSM_CAMERA_ERR_MASK (0xFFFFFFFF &amp; 1)</span></div><div class='line' id='LC425'><br/></div><div class='line' id='LC426'><span class="k">struct</span> <span class="n">msm_stats_buf</span> <span class="p">{</span></div><div class='line' id='LC427'>	<span class="kt">int</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC428'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">buffer</span><span class="p">;</span></div><div class='line' id='LC429'>	<span class="kt">int</span> <span class="n">fd</span><span class="p">;</span></div><div class='line' id='LC430'>	<span class="kt">int</span> <span class="n">length</span><span class="p">;</span></div><div class='line' id='LC431'>	<span class="kt">uint32_t</span> <span class="n">frame_id</span><span class="p">;</span></div><div class='line' id='LC432'><span class="p">};</span></div><div class='line' id='LC433'><br/></div><div class='line' id='LC434'><span class="cp">#define MSM_V4L2_VID_CAP_TYPE	0</span></div><div class='line' id='LC435'><span class="cp">#define MSM_V4L2_STREAM_ON	1</span></div><div class='line' id='LC436'><span class="cp">#define MSM_V4L2_STREAM_OFF	2</span></div><div class='line' id='LC437'><span class="cp">#define MSM_V4L2_SNAPSHOT	3</span></div><div class='line' id='LC438'><span class="cp">#define MSM_V4L2_QUERY_CTRL	4</span></div><div class='line' id='LC439'><span class="cp">#define MSM_V4L2_GET_CTRL	5</span></div><div class='line' id='LC440'><span class="cp">#define MSM_V4L2_SET_CTRL	6</span></div><div class='line' id='LC441'><span class="cp">#define MSM_V4L2_QUERY		7</span></div><div class='line' id='LC442'><span class="cp">#define MSM_V4L2_GET_CROP	8</span></div><div class='line' id='LC443'><span class="cp">#define MSM_V4L2_SET_CROP	9</span></div><div class='line' id='LC444'><span class="cp">#define MSM_V4L2_MAX		10</span></div><div class='line' id='LC445'><br/></div><div class='line' id='LC446'><span class="cp">#define V4L2_CAMERA_EXIT 	43</span></div><div class='line' id='LC447'><span class="k">struct</span> <span class="n">crop_info</span> <span class="p">{</span></div><div class='line' id='LC448'>	<span class="kt">void</span> <span class="o">*</span><span class="n">info</span><span class="p">;</span></div><div class='line' id='LC449'>	<span class="kt">int</span> <span class="n">len</span><span class="p">;</span></div><div class='line' id='LC450'><span class="p">};</span></div><div class='line' id='LC451'><br/></div><div class='line' id='LC452'><span class="k">struct</span> <span class="n">msm_postproc</span> <span class="p">{</span></div><div class='line' id='LC453'>	<span class="kt">int</span> <span class="n">ftnum</span><span class="p">;</span></div><div class='line' id='LC454'>	<span class="k">struct</span> <span class="n">msm_frame</span> <span class="n">fthumnail</span><span class="p">;</span></div><div class='line' id='LC455'>	<span class="kt">int</span> <span class="n">fmnum</span><span class="p">;</span></div><div class='line' id='LC456'>	<span class="k">struct</span> <span class="n">msm_frame</span> <span class="n">fmain</span><span class="p">;</span></div><div class='line' id='LC457'><span class="p">};</span></div><div class='line' id='LC458'><br/></div><div class='line' id='LC459'><span class="k">struct</span> <span class="n">msm_snapshot_pp_status</span> <span class="p">{</span></div><div class='line' id='LC460'>	<span class="kt">void</span> <span class="o">*</span><span class="n">status</span><span class="p">;</span></div><div class='line' id='LC461'><span class="p">};</span></div><div class='line' id='LC462'><br/></div><div class='line' id='LC463'><span class="cp">#define CFG_SET_MODE			0</span></div><div class='line' id='LC464'><span class="cp">#define CFG_SET_EFFECT			1</span></div><div class='line' id='LC465'><span class="cp">#define CFG_START			2</span></div><div class='line' id='LC466'><span class="cp">#define CFG_PWR_UP			3</span></div><div class='line' id='LC467'><span class="cp">#define CFG_PWR_DOWN			4</span></div><div class='line' id='LC468'><span class="cp">#define CFG_WRITE_EXPOSURE_GAIN		5</span></div><div class='line' id='LC469'><span class="cp">#define CFG_SET_DEFAULT_FOCUS		6</span></div><div class='line' id='LC470'><span class="cp">#define CFG_MOVE_FOCUS			7</span></div><div class='line' id='LC471'><span class="cp">#define CFG_REGISTER_TO_REAL_GAIN	8</span></div><div class='line' id='LC472'><span class="cp">#define CFG_REAL_TO_REGISTER_GAIN	9</span></div><div class='line' id='LC473'><span class="cp">#define CFG_SET_FPS			10</span></div><div class='line' id='LC474'><span class="cp">#define CFG_SET_PICT_FPS		11</span></div><div class='line' id='LC475'><span class="cp">#define CFG_SET_BRIGHTNESS		12</span></div><div class='line' id='LC476'><span class="cp">#define CFG_SET_CONTRAST		13</span></div><div class='line' id='LC477'><span class="cp">#define CFG_SET_ZOOM			14</span></div><div class='line' id='LC478'><span class="cp">#define CFG_SET_EXPOSURE_MODE		15</span></div><div class='line' id='LC479'><span class="cp">#define CFG_SET_WB			16</span></div><div class='line' id='LC480'><span class="cp">#define CFG_SET_ANTIBANDING		17</span></div><div class='line' id='LC481'><span class="cp">#define CFG_SET_EXP_GAIN		18</span></div><div class='line' id='LC482'><span class="cp">#define CFG_SET_PICT_EXP_GAIN		19</span></div><div class='line' id='LC483'><span class="cp">#define CFG_SET_LENS_SHADING		20</span></div><div class='line' id='LC484'><span class="cp">#define CFG_GET_PICT_FPS		21</span></div><div class='line' id='LC485'><span class="cp">#define CFG_GET_PREV_L_PF		22</span></div><div class='line' id='LC486'><span class="cp">#define CFG_GET_PREV_P_PL		23</span></div><div class='line' id='LC487'><span class="cp">#define CFG_GET_PICT_L_PF		24</span></div><div class='line' id='LC488'><span class="cp">#define CFG_GET_PICT_P_PL		25</span></div><div class='line' id='LC489'><span class="cp">#define CFG_GET_AF_MAX_STEPS		26</span></div><div class='line' id='LC490'><span class="cp">#define CFG_GET_PICT_MAX_EXP_LC		27</span></div><div class='line' id='LC491'><span class="cp">#define CFG_SEND_WB_INFO    28</span></div><div class='line' id='LC492'><span class="cp">#define CFG_MAX 			29</span></div><div class='line' id='LC493'><br/></div><div class='line' id='LC494'><span class="cm">/* LGE_CHANGE_S [junyeong.han@lge.com] Add CFG values for auto focus */</span></div><div class='line' id='LC495'><span class="cm">/* 2010-05-02: Add auto-focus values */</span></div><div class='line' id='LC496'><span class="cm">/* 2010-05-05: Add setting iso values */</span></div><div class='line' id='LC497'><span class="cm">/* 2010-05-14: Add setting scene values */</span></div><div class='line' id='LC498'><span class="c1">//LGE_DEV_PORTING UNIVA</span></div><div class='line' id='LC499'><span class="cp">#if defined (CONFIG_ISX005) || defined (CONFIG_MT9T113) || defined (CONFIG_S5K5CAGA) || defined (CONFIG_MT9P111) || defined (CONFIG_ISX006)</span></div><div class='line' id='LC500'><span class="cp">#define CFG_START_AF_FOCUS	101</span></div><div class='line' id='LC501'><span class="cp">#define CFG_CHECK_AF_DONE	102</span></div><div class='line' id='LC502'><span class="cp">#define CFG_CHECK_AF_CANCEL	103</span></div><div class='line' id='LC503'><span class="cp">#define CFG_AF_LOCKED		104</span></div><div class='line' id='LC504'><span class="cp">#define CFG_AF_UNLOCKED		105</span></div><div class='line' id='LC505'><br/></div><div class='line' id='LC506'><span class="cp">#define CFG_SET_ISO			201</span></div><div class='line' id='LC507'><span class="cp">#define CFG_SET_SCENE		202</span></div><div class='line' id='LC508'><span class="cp">#define CFG_SET_ZOOM_SENSOR 203</span></div><div class='line' id='LC509'><br/></div><div class='line' id='LC510'><span class="cp">#define CFG_SET_FOCUS_RECT 204</span></div><div class='line' id='LC511'><span class="cp">#define CFG_SET_CANCEL_FOCUS 205</span></div><div class='line' id='LC512'><span class="cp">#define CFG_SET_PARM_AF_MODE 206</span></div><div class='line' id='LC513'><span class="cp">#define CFG_GET_CURRENT_ISO 207</span></div><div class='line' id='LC514'><span class="cp">#define CFG_GET_CHECK_SNAPSHOT 208</span></div><div class='line' id='LC515'><span class="cp">#endif</span></div><div class='line' id='LC516'><span class="cm">/* LGE_CHANGE_E [junyeong.han@lge.com] */</span></div><div class='line' id='LC517'><br/></div><div class='line' id='LC518'><span class="cp">#define MOVE_NEAR	0</span></div><div class='line' id='LC519'><span class="cp">#define MOVE_FAR	1</span></div><div class='line' id='LC520'><br/></div><div class='line' id='LC521'><span class="cp">#define SENSOR_PREVIEW_MODE		0</span></div><div class='line' id='LC522'><span class="cp">#define SENSOR_SNAPSHOT_MODE		1</span></div><div class='line' id='LC523'><span class="cp">#define SENSOR_RAW_SNAPSHOT_MODE	2</span></div><div class='line' id='LC524'><span class="cp">#define SENSOR_VIDEO_120FPS_MODE	3</span></div><div class='line' id='LC525'><br/></div><div class='line' id='LC526'><span class="cp">#define SENSOR_QTR_SIZE			0</span></div><div class='line' id='LC527'><span class="cp">#define SENSOR_FULL_SIZE		1</span></div><div class='line' id='LC528'><span class="cp">#define SENSOR_QVGA_SIZE		2</span></div><div class='line' id='LC529'><span class="cp">#define SENSOR_INVALID_SIZE		3</span></div><div class='line' id='LC530'><br/></div><div class='line' id='LC531'><span class="cp">#define CAMERA_EFFECT_OFF		0</span></div><div class='line' id='LC532'><span class="cp">#define CAMERA_EFFECT_MONO		1</span></div><div class='line' id='LC533'><span class="cp">#define CAMERA_EFFECT_NEGATIVE		2</span></div><div class='line' id='LC534'><span class="cp">#define CAMERA_EFFECT_SOLARIZE		3</span></div><div class='line' id='LC535'><span class="cp">#define CAMERA_EFFECT_SEPIA		4</span></div><div class='line' id='LC536'><span class="cp">#define CAMERA_EFFECT_POSTERIZE		5</span></div><div class='line' id='LC537'><span class="cp">#define CAMERA_EFFECT_WHITEBOARD	6</span></div><div class='line' id='LC538'><span class="cp">#define CAMERA_EFFECT_BLACKBOARD	7</span></div><div class='line' id='LC539'><span class="cp">#define CAMERA_EFFECT_AQUA		8</span></div><div class='line' id='LC540'><br/></div><div class='line' id='LC541'><span class="cm">/* LGE_CHANGE_S [junyeong.han@lge.com] Add CAMERA_EFFECT values */</span></div><div class='line' id='LC542'><span class="cm">/* 2010-05-13: Add CAMERA_EFFECT values */</span></div><div class='line' id='LC543'><span class="c1">//LGE_DEV_PORTING UNIVA</span></div><div class='line' id='LC544'><span class="cp">#if defined (CONFIG_ISX005) || defined (CONFIG_MT9T113) || defined (CONFIG_S5K5CAGA) || defined(CONFIG_MT9P111) || defined (CONFIG_ISX006)</span></div><div class='line' id='LC545'><span class="cp">#define CAMERA_EFFECT_NEGATIVE_SEPIA	9</span></div><div class='line' id='LC546'><span class="cp">#define CAMERA_EFFECT_BLUE				10</span></div><div class='line' id='LC547'><span class="cp">#define CAMERA_EFFECT_PASTEL			11</span></div><div class='line' id='LC548'><span class="cp">#define CAMERA_EFFECT_MAX				12</span></div><div class='line' id='LC549'><span class="cp">#else	</span><span class="cm">/* 5330 origin */</span><span class="cp"></span></div><div class='line' id='LC550'><span class="cp">#define CAMERA_EFFECT_MAX		9</span></div><div class='line' id='LC551'><span class="cp">#endif</span></div><div class='line' id='LC552'><span class="cm">/* LGE_CHANGE_E [junyeong.han@lge.com] */</span></div><div class='line' id='LC553'><br/></div><div class='line' id='LC554'><span class="k">struct</span> <span class="n">sensor_pict_fps</span> <span class="p">{</span></div><div class='line' id='LC555'>	<span class="kt">uint16_t</span> <span class="n">prevfps</span><span class="p">;</span></div><div class='line' id='LC556'>	<span class="kt">uint16_t</span> <span class="n">pictfps</span><span class="p">;</span></div><div class='line' id='LC557'><span class="p">};</span></div><div class='line' id='LC558'><br/></div><div class='line' id='LC559'><span class="k">struct</span> <span class="n">exp_gain_cfg</span> <span class="p">{</span></div><div class='line' id='LC560'>	<span class="kt">uint16_t</span> <span class="n">gain</span><span class="p">;</span></div><div class='line' id='LC561'>	<span class="kt">uint32_t</span> <span class="n">line</span><span class="p">;</span></div><div class='line' id='LC562'><span class="p">};</span></div><div class='line' id='LC563'><br/></div><div class='line' id='LC564'><span class="k">struct</span> <span class="n">focus_cfg</span> <span class="p">{</span></div><div class='line' id='LC565'>	<span class="kt">int32_t</span> <span class="n">steps</span><span class="p">;</span></div><div class='line' id='LC566'>	<span class="kt">int</span> <span class="n">dir</span><span class="p">;</span></div><div class='line' id='LC567'><span class="p">};</span></div><div class='line' id='LC568'><br/></div><div class='line' id='LC569'><span class="k">struct</span> <span class="n">fps_cfg</span> <span class="p">{</span></div><div class='line' id='LC570'>	<span class="kt">uint16_t</span> <span class="n">f_mult</span><span class="p">;</span></div><div class='line' id='LC571'>	<span class="kt">uint16_t</span> <span class="n">fps_div</span><span class="p">;</span></div><div class='line' id='LC572'>	<span class="kt">uint32_t</span> <span class="n">pict_fps_div</span><span class="p">;</span></div><div class='line' id='LC573'><span class="p">};</span></div><div class='line' id='LC574'><span class="k">struct</span> <span class="n">wb_info_cfg</span> <span class="p">{</span></div><div class='line' id='LC575'>	<span class="kt">uint16_t</span> <span class="n">red_gain</span><span class="p">;</span></div><div class='line' id='LC576'>	<span class="kt">uint16_t</span> <span class="n">green_gain</span><span class="p">;</span></div><div class='line' id='LC577'>	<span class="kt">uint16_t</span> <span class="n">blue_gain</span><span class="p">;</span></div><div class='line' id='LC578'><span class="p">};</span></div><div class='line' id='LC579'><span class="k">struct</span> <span class="n">sensor_cfg_data</span> <span class="p">{</span></div><div class='line' id='LC580'>	<span class="kt">int</span> <span class="n">cfgtype</span><span class="p">;</span></div><div class='line' id='LC581'>	<span class="kt">int</span> <span class="n">mode</span><span class="p">;</span></div><div class='line' id='LC582'>	<span class="kt">int</span> <span class="n">rs</span><span class="p">;</span></div><div class='line' id='LC583'>	<span class="kt">int</span> <span class="n">width</span><span class="p">;</span></div><div class='line' id='LC584'>	<span class="kt">int</span> <span class="n">height</span><span class="p">;</span></div><div class='line' id='LC585'>	<span class="kt">uint8_t</span> <span class="n">max_steps</span><span class="p">;</span></div><div class='line' id='LC586'><br/></div><div class='line' id='LC587'>	<span class="k">union</span> <span class="p">{</span></div><div class='line' id='LC588'>		<span class="kt">int8_t</span> <span class="n">effect</span><span class="p">;</span></div><div class='line' id='LC589'>		<span class="kt">uint8_t</span> <span class="n">lens_shading</span><span class="p">;</span></div><div class='line' id='LC590'>		<span class="kt">uint16_t</span> <span class="n">prevl_pf</span><span class="p">;</span></div><div class='line' id='LC591'>		<span class="kt">uint16_t</span> <span class="n">prevp_pl</span><span class="p">;</span></div><div class='line' id='LC592'>		<span class="kt">uint16_t</span> <span class="n">pictl_pf</span><span class="p">;</span></div><div class='line' id='LC593'>		<span class="kt">uint16_t</span> <span class="n">pictp_pl</span><span class="p">;</span></div><div class='line' id='LC594'>		<span class="kt">uint32_t</span> <span class="n">pict_max_exp_lc</span><span class="p">;</span></div><div class='line' id='LC595'>		<span class="kt">uint16_t</span> <span class="n">p_fps</span><span class="p">;</span></div><div class='line' id='LC596'>		<span class="k">struct</span> <span class="n">sensor_pict_fps</span> <span class="n">gfps</span><span class="p">;</span></div><div class='line' id='LC597'>		<span class="k">struct</span> <span class="n">exp_gain_cfg</span> <span class="n">exp_gain</span><span class="p">;</span></div><div class='line' id='LC598'>		<span class="k">struct</span> <span class="n">focus_cfg</span> <span class="n">focus</span><span class="p">;</span></div><div class='line' id='LC599'>		<span class="k">struct</span> <span class="n">fps_cfg</span> <span class="n">fps</span><span class="p">;</span></div><div class='line' id='LC600'>		<span class="k">struct</span> <span class="n">wb_info_cfg</span> <span class="n">wb_info</span><span class="p">;</span></div><div class='line' id='LC601'>	<span class="p">}</span> <span class="n">cfg</span><span class="p">;</span></div><div class='line' id='LC602'><span class="p">};</span></div><div class='line' id='LC603'><br/></div><div class='line' id='LC604'><span class="k">enum</span> <span class="n">flash_type</span> <span class="p">{</span></div><div class='line' id='LC605'>	<span class="n">LED_FLASH</span><span class="p">,</span></div><div class='line' id='LC606'>	<span class="n">STROBE_FLASH</span><span class="p">,</span></div><div class='line' id='LC607'><span class="p">};</span></div><div class='line' id='LC608'><br/></div><div class='line' id='LC609'><span class="k">enum</span> <span class="n">strobe_flash_ctrl_type</span> <span class="p">{</span></div><div class='line' id='LC610'>	<span class="n">STROBE_FLASH_CTRL_INIT</span><span class="p">,</span></div><div class='line' id='LC611'>	<span class="n">STROBE_FLASH_CTRL_CHARGE</span><span class="p">,</span></div><div class='line' id='LC612'>	<span class="n">STROBE_FLASH_CTRL_RELEASE</span></div><div class='line' id='LC613'><span class="p">};</span></div><div class='line' id='LC614'><br/></div><div class='line' id='LC615'><span class="k">struct</span> <span class="n">strobe_flash_ctrl_data</span> <span class="p">{</span></div><div class='line' id='LC616'>	<span class="k">enum</span> <span class="n">strobe_flash_ctrl_type</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC617'>	<span class="kt">int</span> <span class="n">charge_en</span><span class="p">;</span></div><div class='line' id='LC618'><span class="p">};</span></div><div class='line' id='LC619'><br/></div><div class='line' id='LC620'><span class="k">struct</span> <span class="n">msm_camera_info</span> <span class="p">{</span></div><div class='line' id='LC621'>	<span class="kt">int</span> <span class="n">num_cameras</span><span class="p">;</span></div><div class='line' id='LC622'>	<span class="kt">uint8_t</span> <span class="n">has_3d_support</span><span class="p">[</span><span class="n">MSM_MAX_CAMERA_SENSORS</span><span class="p">];</span></div><div class='line' id='LC623'>	<span class="kt">uint8_t</span> <span class="n">is_internal_cam</span><span class="p">[</span><span class="n">MSM_MAX_CAMERA_SENSORS</span><span class="p">];</span></div><div class='line' id='LC624'>	<span class="kt">uint32_t</span> <span class="n">s_mount_angle</span><span class="p">[</span><span class="n">MSM_MAX_CAMERA_SENSORS</span><span class="p">];</span></div><div class='line' id='LC625'><span class="p">};</span></div><div class='line' id='LC626'><br/></div><div class='line' id='LC627'><span class="k">struct</span> <span class="n">flash_ctrl_data</span> <span class="p">{</span></div><div class='line' id='LC628'>	<span class="kt">int</span> <span class="n">flashtype</span><span class="p">;</span></div><div class='line' id='LC629'>	<span class="k">union</span> <span class="p">{</span></div><div class='line' id='LC630'>		<span class="kt">int</span> <span class="n">led_state</span><span class="p">;</span></div><div class='line' id='LC631'>		<span class="k">struct</span> <span class="n">strobe_flash_ctrl_data</span> <span class="n">strobe_ctrl</span><span class="p">;</span></div><div class='line' id='LC632'>	<span class="p">}</span> <span class="n">ctrl_data</span><span class="p">;</span></div><div class='line' id='LC633'><span class="p">};</span></div><div class='line' id='LC634'><br/></div><div class='line' id='LC635'><span class="cp">#define GET_NAME			0</span></div><div class='line' id='LC636'><span class="cp">#define GET_PREVIEW_LINE_PER_FRAME	1</span></div><div class='line' id='LC637'><span class="cp">#define GET_PREVIEW_PIXELS_PER_LINE	2</span></div><div class='line' id='LC638'><span class="cp">#define GET_SNAPSHOT_LINE_PER_FRAME	3</span></div><div class='line' id='LC639'><span class="cp">#define GET_SNAPSHOT_PIXELS_PER_LINE	4</span></div><div class='line' id='LC640'><span class="cp">#define GET_SNAPSHOT_FPS		5</span></div><div class='line' id='LC641'><span class="cp">#define GET_SNAPSHOT_MAX_EP_LINE_CNT	6</span></div><div class='line' id='LC642'><br/></div><div class='line' id='LC643'><span class="k">struct</span> <span class="n">msm_camsensor_info</span> <span class="p">{</span></div><div class='line' id='LC644'>	<span class="kt">char</span> <span class="n">name</span><span class="p">[</span><span class="n">MAX_SENSOR_NAME</span><span class="p">];</span></div><div class='line' id='LC645'>	<span class="kt">uint8_t</span> <span class="n">flash_enabled</span><span class="p">;</span></div><div class='line' id='LC646'>	<span class="kt">int8_t</span> <span class="n">total_steps</span><span class="p">;</span></div><div class='line' id='LC647'><span class="p">};</span></div><div class='line' id='LC648'><span class="cp">#endif </span><span class="cm">/* __LINUX_MSM_CAMERA_H */</span><span class="cp"></span></div></pre></div>
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


    <p class="right">&copy; 2013 <span title="0.07929s from fe17.rs.github.com">GitHub</span>, Inc. All rights reserved.</p>
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

    
    <span id='server_response_time' data-time='0.07974' data-host='fe17'></span>
    
  </body>
</html>

