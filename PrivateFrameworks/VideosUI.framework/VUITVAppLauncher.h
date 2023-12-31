
@interface VUITVAppLauncher : NSObject <UIGestureRecognizerDelegate, VUITVAppLaunchProtocol, VUITVApplicationControllerDelegate> {
    VUITVApplicationController * _appController;
    bool  _appWasForegrounded;
    bool  _appWasRunningWithoutJavascript;
    UIWindow * _appWindow;
    VUIBootURLController * _bootURLController;
    id /* block */  _deeplinkCompletionHandler;
    ATAParsedOpenURL * _deferredParsedOpenURL;
    bool  _isDeeplinkLaunched;
    bool  _isStillProcessingStartupItems;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _isStillProcessingStartupItemsLock;
    bool  _isTerminating;
    _TtC8VideosUI20VUIJetPackController * _jetPackController;
    NSDictionary * _launchOptions;
    bool  _overrideOrientation;
    <VUIRootSplitViewController> * _splitViewController;
    bool  _startupOfferProcessingCompleted;
    bool  _startupPrewarmSubscriptionDataCompleted;
    VUIStateMachine * _stateMachine;
    id /* block */  _switchTabHandler;
    NSObject<VUITabBarProtocol> * _tabBarController;
    NSArray * _tabBarItems;
}

@property (nonatomic, retain) VUITVApplicationController *appController;
@property (nonatomic) bool appWasForegrounded;
@property (nonatomic) bool appWasRunningWithoutJavascript;
@property (nonatomic, retain) UIWindow *appWindow;
@property (nonatomic, retain) VUIBootURLController *bootURLController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ deeplinkCompletionHandler;
@property (nonatomic, retain) ATAParsedOpenURL *deferredParsedOpenURL;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAppRunning;
@property (nonatomic) bool isDeeplinkLaunched;
@property (nonatomic) bool isStillProcessingStartupItems;
@property (nonatomic) bool isTerminating;
@property (nonatomic, retain) _TtC8VideosUI20VUIJetPackController *jetPackController;
@property (nonatomic, copy) NSDictionary *launchOptions;
@property (nonatomic) bool overrideOrientation;
@property (nonatomic, retain) <VUIRootSplitViewController> *splitViewController;
@property (nonatomic) bool startupOfferProcessingCompleted;
@property (nonatomic) bool startupPrewarmSubscriptionDataCompleted;
@property (nonatomic, retain) VUIStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ switchTabHandler;
@property (nonatomic, retain) NSObject<VUITabBarProtocol> *tabBarController;
@property (nonatomic, retain) NSArray *tabBarItems;

+ (bool)_isDeeplinkTVButton:(id)arg1;
+ (bool)_isRunningState:(id)arg1;
+ (id)_libraryOnlyTabBarItem;
+ (bool)isSidebarEnabled;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)_configureStateMachine;
- (id)_dialogMetricsForGDPR;
- (void)_fetchApplicationControllerBootURL;
- (void)_fetchFullFeatureFlag:(id)arg1;
- (void)_finishAppLoading;
- (void)_finishApplicationControllerWithLaunchContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_finishJavascriptSetupWithTabBarItems:(id)arg1 setSelectedIdentifierFromDefaults:(bool)arg2;
- (void)_handleAMSEngagementSheetPresentation:(bool)arg1;
- (void)_handleDeferredParsedOpenURLIfNeeded;
- (void)_handleNetworkReachabilityDidChangeNotification:(id)arg1;
- (void)_handleOfferProcessingDidFinishNotification:(id)arg1;
- (void)_handleOfferProcessingDidStartNotification:(id)arg1;
- (void)_handleParsedOpenURL:(id)arg1;
- (void)_handlePrewarmSubscriptionDataNotification:(id)arg1;
- (void)_initializeBookmarkService;
- (void)_initializeMediaLibrary;
- (void)_initializePlayer;
- (bool)_isActiveMediaLibraryTheDeviceMediaLibrary;
- (void)_javascriptSetTabBarItems:(id)arg1;
- (void)_presentSyndicationOnboardingIfNeeded;
- (void)_registerStateMachineHandlers;
- (void)_resetDeferredParsedOpenURL;
- (void)_resetJavascriptState;
- (bool)_shouldRecordExitEvent;
- (void)_showJavascriptUnavailableUIWithNetworkAvailable:(bool)arg1;
- (void)_startApplicationControllerWithBootURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_startJavascriptSetup;
- (void)_stopApplicationController;
- (void)_syncBookmarkServiceIfRequired;
- (void)_updateDeviceMediaLibraryFromCloud;
- (void)_updateTabControllerWithTabBarItems:(id)arg1 setSelectedIdentifierFromDefaults:(bool)arg2;
- (double)appContainerWidth;
- (id)appController;
- (void)appController:(id)arg1 didFailWithError:(id)arg2;
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)appController:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (bool)appWasForegrounded;
- (bool)appWasRunningWithoutJavascript;
- (id)appWindow;
- (bool)applicationDidFinishLaunchingWithOptions:(id)arg1;
- (bool)applicationWillFinishLaunchingWithOptions:(id)arg1;
- (id)bootURLController;
- (void)cleanUp;
- (void)configureAppWindow;
- (id /* block */)deeplinkCompletionHandler;
- (id)deferredParsedOpenURL;
- (void)didAcceptGDPRWelcome;
- (void)didFailToLaunch:(id)arg1;
- (void)didShowGDPRWelcome;
- (void)hideLoadingView;
- (id)init;
- (bool)isAppRunning;
- (bool)isDeeplinkLaunched;
- (bool)isStillProcessingStartupItems;
- (bool)isTerminating;
- (id)jetPackController;
- (id)launchOptions;
- (bool)openURL:(id)arg1 options:(id)arg2;
- (bool)overrideOrientation;
- (void)preWarm:(id)arg1;
- (void)processStartupItems;
- (void)refreshTabBarItems;
- (void)registerForApplicationNotifications;
- (id)rootViewControllerForAppController:(id)arg1;
- (void)selectTabBarItem:(id)arg1;
- (void)setAppController:(id)arg1;
- (void)setAppWasForegrounded:(bool)arg1;
- (void)setAppWasRunningWithoutJavascript:(bool)arg1;
- (void)setAppWindow:(id)arg1;
- (void)setBootURLController:(id)arg1;
- (void)setDeeplinkCompletionHandler:(id /* block */)arg1;
- (void)setDeferredParsedOpenURL:(id)arg1;
- (void)setIsDeeplinkLaunched:(bool)arg1;
- (void)setIsStillProcessingStartupItems:(bool)arg1;
- (void)setIsTerminating:(bool)arg1;
- (void)setJetPackController:(id)arg1;
- (void)setLaunchOptions:(id)arg1;
- (void)setMainWindow:(id)arg1;
- (void)setOverrideOrientation:(bool)arg1;
- (void)setSplitViewController:(id)arg1;
- (void)setStartupOfferProcessingCompleted:(bool)arg1;
- (void)setStartupPrewarmSubscriptionDataCompleted:(bool)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setSwitchTabHandler:(id /* block */)arg1;
- (void)setTabBarController:(id)arg1;
- (void)setTabBarItems:(id)arg1;
- (void)showLoadingView;
- (id)splitViewController;
- (bool)startupOfferProcessingCompleted;
- (bool)startupPrewarmSubscriptionDataCompleted;
- (id)stateMachine;
- (id /* block */)switchTabHandler;
- (id)tabBarController;
- (id)tabBarItems;

@end
