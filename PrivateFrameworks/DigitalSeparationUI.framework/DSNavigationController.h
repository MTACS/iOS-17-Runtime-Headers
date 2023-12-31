
@interface DSNavigationController : OBNavigationController <DSNavigationDelegate, UIAdaptivePresentationControllerDelegate, UINavigationControllerDelegate> {
    LAContext * _authContext;
    NSDictionary * _cachedPanes;
    UINavigationController * _connectionErrorNavigation;
    long long  _currentChapter;
    long long  _currentChapterForAnalytics;
    long long  _currentFlowType;
    Class  _currentPaneType;
    bool  _isShowingNetworkError;
    UIViewController * _networkErrorController;
    UIWindow * _obfuscationWindow;
    NSArray * _panesRequiringNetwork;
    DSRemoteUILoader * _remoteUILoader;
    NSDictionary * _safetyResetChapters;
    NSArray * _safetyResetNavigationOrder;
    NSDictionary * _sharingActivityChapters;
    NSArray * _sharingActivityNavigationOrder;
    NSMutableSet * _unsharedApps;
    NSMutableSet * _unsharedPeople;
    NSMutableSet * _unsharedPermissions;
    NSMutableDictionary * _unsharedResourcesBySource;
    DSSharingPermissions * fetchedSharingPermissions;
}

@property (nonatomic, retain) LAContext *authContext;
@property (nonatomic, retain) NSDictionary *cachedPanes;
@property (nonatomic, retain) UINavigationController *connectionErrorNavigation;
@property (nonatomic) long long currentChapter;
@property (nonatomic) long long currentChapterForAnalytics;
@property (nonatomic) long long currentFlowType;
@property (nonatomic) Class currentPaneType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DSSharingPermissions *fetchedSharingPermissions;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isShowingNetworkError;
@property (nonatomic, retain) UIViewController *networkErrorController;
@property (nonatomic, retain) UIWindow *obfuscationWindow;
@property (nonatomic, retain) NSArray *panesRequiringNetwork;
@property (nonatomic, retain) DSRemoteUILoader *remoteUILoader;
@property (nonatomic, retain) NSDictionary *safetyResetChapters;
@property (nonatomic, retain) NSArray *safetyResetNavigationOrder;
@property (nonatomic, retain) NSDictionary *sharingActivityChapters;
@property (nonatomic, retain) NSArray *sharingActivityNavigationOrder;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *unsharedApps;
@property (nonatomic, retain) NSMutableSet *unsharedPeople;
@property (nonatomic, retain) NSMutableSet *unsharedPermissions;
@property (nonatomic, retain) NSMutableDictionary *unsharedResourcesBySource;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_reachabilityChanged:(id)arg1;
- (id)authContext;
- (id)cachedPanes;
- (void)cancel;
- (id)connectionErrorNavigation;
- (long long)currentChapter;
- (long long)currentChapterForAnalytics;
- (long long)currentFlowType;
- (Class)currentPaneType;
- (void)dealloc;
- (void)didEnterBackground:(id)arg1;
- (void)displayNetworkError;
- (id)fetchedSharingPermissions;
- (void)finishFlow;
- (id)flowTypeForAnalytics;
- (void)goToCustomizeSharing;
- (void)hideNetworkError;
- (id)init;
- (id)initStartingWithEmergencyReset;
- (id)initStartingWithMangeSharing;
- (bool)isNetworkReachable;
- (bool)isShowingNetworkError;
- (void)learnMorePressedForController:(id)arg1 withURL:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)networkErrorController;
- (id)obfuscationWindow;
- (id)paneBeforePane:(id)arg1;
- (id)paneInstanceForType:(Class)arg1;
- (id)panesRequiringNetwork;
- (void)popToPreviousPane:(id)arg1;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)pushNextPane;
- (void)pushPaneAfterPaneType:(Class)arg1;
- (void)pushPaneType:(Class)arg1;
- (void)pushPaneType:(Class)arg1 loadRemoteUI:(bool)arg2;
- (void)pushPaneWithController:(id)arg1 paneType:(Class)arg2 shouldShow:(bool)arg3;
- (void)quickExit;
- (id)remoteUILoader;
- (void)resetRemoteUI;
- (id)safetyResetChapters;
- (id)safetyResetNavigationOrder;
- (void)sendSummaryAnalyticsWithQuickExit:(bool)arg1 finalScreen:(bool)arg2;
- (void)setAuthContext:(id)arg1;
- (void)setCachedPanes:(id)arg1;
- (void)setConnectionErrorNavigation:(id)arg1;
- (void)setCurrentChapter:(long long)arg1;
- (void)setCurrentChapterForAnalytics:(long long)arg1;
- (void)setCurrentFlowType:(long long)arg1;
- (void)setCurrentPaneType:(Class)arg1;
- (void)setFetchedSharingPermissions:(id)arg1;
- (void)setIsShowingNetworkError:(bool)arg1;
- (void)setNetworkErrorController:(id)arg1;
- (void)setObfuscationWindow:(id)arg1;
- (void)setPanesRequiringNetwork:(id)arg1;
- (void)setRemoteUILoader:(id)arg1;
- (void)setSafetyResetChapters:(id)arg1;
- (void)setSafetyResetNavigationOrder:(id)arg1;
- (void)setSharingActivityChapters:(id)arg1;
- (void)setSharingActivityNavigationOrder:(id)arg1;
- (void)setUnsharedApps:(id)arg1;
- (void)setUnsharedPeople:(id)arg1;
- (void)setUnsharedPermissions:(id)arg1;
- (void)setUnsharedResourcesBySource:(id)arg1;
- (void)setupCancelButtonWithController:(id)arg1;
- (void)setupChapterIndicatorWithController:(id)arg1;
- (void)setupConnectionError;
- (void)setupQuickExitButtonWithController:(id)arg1;
- (id)sharingActivityChapters;
- (id)sharingActivityNavigationOrder;
- (bool)shouldFinishFlow;
- (void)startFlowWithType:(long long)arg1;
- (id)unsharedApps;
- (id)unsharedPeople;
- (id)unsharedPermissions;
- (id)unsharedResourcesBySource;
- (void)updateCurrentChapterWithPaneType:(Class)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willEnterForeground:(id)arg1;

@end
