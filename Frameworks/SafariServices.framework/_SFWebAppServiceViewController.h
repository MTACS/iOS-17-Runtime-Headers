
@interface _SFWebAppServiceViewController : SFBrowserServiceViewController <SFMediaRecordingDocument, SFWebAppServiceViewControllerProtocol, _WKWebsiteDataStoreDelegate> {
    _SFInjectedJavaScriptController * _activityJSController;
    WBSApplicationManifestFetcher * _applicationManifestFetcher;
    NSMutableArray * _fallbackURLs;
    unsigned int  _hostState;
    unsigned long long  _mediaStateIconBeforeSuspension;
    WKProcessPool * _processPool;
    BKSApplicationStateMonitor * _stateMonitor;
    UIView * _statusBarBackgroundView;
    UIColor * _themeColor;
    bool  _updatingThemeColor;
    UIWebClip * _webClip;
    _SFWebClipMetadataFetcher * _webClipMetadataFetcher;
    WKWebsiteDataStore * _websiteDataStore;
}

@property (nonatomic, readonly, copy) NSString *URLString;
@property (nonatomic, readonly) bool audioOnly;
@property (nonatomic, readonly) bool canOverrideStatusBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (id)serviceViewControllers;

- (void).cxx_destruct;
- (id)URLString;
- (id)_canonicalPageURL;
- (bool)_clientIsWebApp;
- (void)_fetchApplicationManifestIfNeeded;
- (void)_handleHostStateUpdate:(id)arg1;
- (void)_hostApplicationDidEnterBackground;
- (void)_initialLoadFinishedWithSuccess:(bool)arg1;
- (bool)_isURLOutOfLegacyScope:(id)arg1 withLoginURLExempted:(bool)arg2;
- (bool)_isURLOutOfManifestScope:(id)arg1;
- (bool)_isURLOutOfScope:(id)arg1 withLoginURLExempted:(bool)arg2;
- (void)_loadNextFallbackURL;
- (void)_loadWebClipPageURL:(id)arg1;
- (long long)_persona;
- (void)_setCurrentWebViewController:(id)arg1;
- (void)_setUpCookieStoragePolicyForDataStore:(id)arg1;
- (void)_updateDisplayMode;
- (void)_updateThemeColor;
- (bool)_usesScrollToTopView;
- (bool)audioOnly;
- (bool)canOverrideStatusBar;
- (bool)canPrint;
- (void)clearWebViewAndWebsiteDataWithCompletion:(id /* block */)arg1;
- (void)clearWebsiteDataWithWebClipIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)createWebsiteDataStoreForWebClipIdentifier:(id)arg1;
- (void)dealloc;
- (void)handlePushNotificationActivation:(id)arg1;
- (void)loadWebAppWithIdentifier:(id)arg1;
- (void)muteMediaCapture;
- (void)navigationBarDoneButtonWasTapped:(id)arg1;
- (id)notificationPermissionsForWebsiteDataStore:(id)arg1;
- (id)placeholderBundleIdentifierForDataStore:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)processPool;
- (void)processWebPushForWebAppWithIdentifier:(id)arg1;
- (void)setMediaStateIcon:(unsigned long long)arg1;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)setupPreferences:(id)arg1;
- (void)statusBarIndicatorTappedWithCompletionHandler:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)webAppDidBecomeActive;
- (void)webAppWillResignActive;
- (id)webViewConfiguration;
- (void)webViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webViewController:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewController:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewController:(id)arg1 requestNotificationPermissionForSecurityOrigin:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webViewController:(id)arg1 updatedAppBadge:(id)arg2 fromSecurityOrigin:(id)arg3;
- (void)webViewControllerDidChangeLoadingState:(id)arg1;
- (void)webViewControllerDidChangeURL:(id)arg1;
- (void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)webViewControllerDidUpdateThemeColor:(id)arg1;
- (id)websiteDataStore;
- (void)websiteDataStore:(id)arg1 getDisplayedNotificationsForWorkerOrigin:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)websiteDataStore:(id)arg1 openWindow:(id)arg2 fromServiceWorkerOrigin:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)websiteDataStore:(id)arg1 showNotification:(id)arg2;
- (void)websiteDataStore:(id)arg1 workerOrigin:(id)arg2 updatedAppBadge:(id)arg3;
- (id)websiteDataStoreConfigurationWithWebClipIdentifier:(id)arg1;

@end
