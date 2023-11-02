
@interface SFBrowserServiceViewController : _SFBrowserContentViewController <SFServiceViewControllerProtocol, _SFActivityDelegate, _SFLinkPreviewHeaderDelegate> {
    id /* block */  _activityViewControllerInfoFetchCompletionHandler;
    bool  _canNotifyHostApplicationOfRedirects;
    bool  _hasBegunFirstNavigation;
    bool  _hasConnectedToHostApplication;
    NSString * _hostApplicationCallbackURLScheme;
    bool  _hostApplicationIsForeground;
    bool  _isExpectingClientRedirect;
    bool  _isUsedForAuthentication;
    NSDate * _lastHostApplicationSuspendDate;
    WKWebsiteDataStore * _persistentDataStore;
    _SFSafariViewControllerPrewarmingRequestThrottler * _prewarmingRequestThrottler;
    WKProcessPool * _processPool;
    NSTimer * _redirectNotificationTimer;
    bool  _touchEventsShouldStopRedirectNotifications;
    _SFWebViewUsageMonitor * _usageMonitor;
    SFSystemAlert * _webAuthenticationDataSharingConfirmation;
}

@property (nonatomic) bool _isUsedForAuthentication;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hostApplicationCallbackURLScheme;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFSystemAlert *webAuthenticationDataSharingConfirmation;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (id)_applicationPayloadForOpeningInSafari;
- (id)_cookieStoreURL;
- (id)_createPersistentDataStoreWithConfiguration:(id)arg1;
- (void)_didLoadWebView;
- (void)_didResolveDestinationURL:(id)arg1 pendingAppLinkCheck:(bool)arg2;
- (void)_dismiss;
- (bool)_ensureWebsiteDataStoreURL:(id)arg1 cookieStoreURL:(id)arg2;
- (void)_fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 completion:(id /* block */)arg3;
- (void)_getSafariDataSharingModeWithCompletion:(id /* block */)arg1;
- (id)_hostAppBundleId;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (bool)_isUsedForAuthentication;
- (bool)_notifyInitialLoadDidFinish:(bool)arg1;
- (void)_openCurrentURLInSafari;
- (long long)_persona;
- (void)_prewarmConnectionsToURLs:(id)arg1;
- (bool)_redirectToHostAppWithExpectedCallbackSchemeIfPossible:(id)arg1;
- (bool)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2;
- (id)_safariWebDataStoreRootURL;
- (id)_sharedWebDataStoreRootURL;
- (bool)_shouldAcceptMessage:(id)arg1;
- (bool)_shouldReloadImmediatelyAfterPageLoadError;
- (id)_trustedReportEndpoint;
- (void)_updateMaxVisibleHeightPercentageUserDriven:(bool)arg1;
- (void)_updateRemoteSwipeGestureState;
- (id)_webDataStoreRootURL;
- (id)_websiteDataStoreURL;
- (void)_willAppearInRemoteViewController;
- (bool)_willURLOpenHostApp:(id)arg1;
- (void)activityViewController:(id)arg1 didCompleteActivity:(id)arg2 success:(bool)arg3;
- (void)addClickAttribution:(id)arg1;
- (void)browserViewDidReceiveTouchEvent:(id)arg1;
- (id)bundleIdentifierForProfileInstallation;
- (void)clearWebsiteDataWithCompletionHandler:(id /* block */)arg1;
- (void)closeDatabasesOnBackgroundingOrDismissal;
- (void)dealloc;
- (void)decideCookieSharingForURL:(id)arg1 callbackURLScheme:(id)arg2;
- (void)didDetectRemoteViewControllerViewIsHidden;
- (void)didDetectUserInteractionFromHostApp;
- (void)didFetchCustomActivities:(id)arg1 excludedActivityTypes:(id)arg2;
- (void)didRequestShowLinkPreviews:(bool)arg1;
- (id)hostApplicationCallbackURLScheme;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidatePrewarmingTokenWithID:(unsigned long long)arg1;
- (void)linkPreviewHeader:(id)arg1 didEnableLinkPreview:(bool)arg2;
- (void)loadURL:(id)arg1;
- (void)openCurrentURLInSafariFromPreviewAction;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)arg1;
- (id)processPool;
- (id)processPoolConfiguration;
- (void)repostNotificationInViewService:(id)arg1;
- (void)requestPrewarmingWithTokens:(id)arg1;
- (void)safariActivity:(id)arg1 didFinish:(bool)arg2;
- (void)setDismissButtonStyle:(long long)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setHostApplicationCallbackURLScheme:(id)arg1;
- (void)setIsRunningTransitionAnimation:(bool)arg1;
- (void)setPreferredBarTintColor:(id)arg1 controlTintColor:(id)arg2;
- (void)setWebAuthenticationDataSharingConfirmation:(id)arg1;
- (void)set_isUsedForAuthentication:(bool)arg1;
- (void)startResolveRedirectionForURL:(id)arg1;
- (void)updateScrollViewIndicatorVerticalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 horizontalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)webAuthenticationDataSharingConfirmation;
- (void)webViewController:(id)arg1 didChangeFullScreen:(bool)arg2;
- (void)webViewController:(id)arg1 didFinishDocumentLoadForNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webViewController:(id)arg1 willPerformClientRedirectToURL:(id)arg2 withDelay:(double)arg3;
- (void)webViewControllerDidCancelClientRedirect:(id)arg1;
- (void)webViewControllerWebProcessDidCrash:(id)arg1;
- (id)websiteDataStoreConfiguration;

@end