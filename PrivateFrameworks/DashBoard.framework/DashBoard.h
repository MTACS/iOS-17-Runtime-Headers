
@interface DashBoard : UISystemShellApplication <CRSAppHistoryDataProviding, CRSIconLayoutServiceDelegate, FBSystemServiceDelegate> {
    DBAppHistory * _appHistory;
    CRSAppHistoryService * _appHistoryService;
    CRCarPlayAppPolicyEvaluator * _appPolicyEvaluator;
    DBDisplayManager * _displayManager;
    NSMutableDictionary * _iconLayoutDataProviders;
    CRSIconLayoutService * _iconLayoutService;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    unsigned int  _memoryPressureStatus;
    <BSInvalidatable> * _processLaunchWatchdogMonitoringAssertion;
    CRSSessionService * _sessionService;
    FBSApplicationLibrary * _sharedApplicationLibrary;
}

@property (nonatomic, retain) DBAppHistory *appHistory;
@property (nonatomic, retain) CRSAppHistoryService *appHistoryService;
@property (nonatomic, retain) CRCarPlayAppPolicyEvaluator *appPolicyEvaluator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DBDisplayManager *displayManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *iconLayoutDataProviders;
@property (nonatomic, retain) CRSIconLayoutService *iconLayoutService;
@property (nonatomic, retain) <BSInvalidatable> *processLaunchWatchdogMonitoringAssertion;
@property (nonatomic, retain) CRSSessionService *sessionService;
@property (readonly) Class superclass;

+ (id)_newApplicationInitializationContext;
+ (id)_newApplicationLibrary;
+ (bool)registerAsSystemApp;

- (void).cxx_destruct;
- (id)_currentAppHistory;
- (id)_currentDashboard;
- (bool)_hostsSystemStatusBar;
- (id)_keyWindowForScreen:(id)arg1;
- (void)_runSiriTest:(id)arg1 testOptions:(id)arg2;
- (id)_windowForSystemAppButtonEventsForScreen:(id)arg1;
- (id)appHistory;
- (id)appHistoryService;
- (id)appPolicyEvaluator;
- (bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;
- (bool)disablesFrontBoardImplicitWindowScenes;
- (id)displayManager;
- (void)getSessionEchoContextStatesWithCompletion:(id /* block */)arg1;
- (void)getSessionFeatureKeysWithCompletion:(id /* block */)arg1;
- (void)getSessionUIContextStatesWithCompletion:(id /* block */)arg1;
- (void)getUIContextStatesWithCompletion:(id /* block */)arg1;
- (bool)handleDoubleHeightStatusBarTapWithStyleOverride:(unsigned long long)arg1;
- (id)iconLayoutDataProviders;
- (id)iconLayoutService;
- (id)iconLayoutService:(id)arg1 dataProviderForVehicleID:(id)arg2;
- (id)init;
- (id)processLaunchWatchdogMonitoringAssertion;
- (bool)runTest:(id)arg1 options:(id)arg2;
- (id)sessionService;
- (void)setAnalyticsValues:(id)arg1 onEvent:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)setAppHistory:(id)arg1;
- (void)setAppHistoryService:(id)arg1;
- (void)setAppPolicyEvaluator:(id)arg1;
- (void)setDisplayManager:(id)arg1;
- (void)setIconLayoutDataProviders:(id)arg1;
- (void)setIconLayoutService:(id)arg1;
- (void)setProcessLaunchWatchdogMonitoringAssertion:(id)arg1;
- (void)setSessionFeatureKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)setSessionService:(id)arg1;
- (id)sharedApplicationLibrary;
- (void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(id /* block */)arg3;
- (void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)systemServiceApplicationInfoProvider:(id)arg1;

@end
