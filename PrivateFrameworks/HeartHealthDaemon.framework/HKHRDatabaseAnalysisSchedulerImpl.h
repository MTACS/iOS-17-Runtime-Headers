
@interface HKHRDatabaseAnalysisSchedulerImpl : NSObject <HDHealthDaemonReadyObserver, HKHRDatabaseAnalysisScheduler> {
    <HKHRDatabaseAnalysisSchedulerDatabaseAssertionProvider> * _assertionProvider;
    <HDHRAFibBurdenSevenDayAnalysisBreadcrumbManaging> * _breadcrumbManager;
    <HKHRDatabaseAnalysisSchedulerGatedActivityFactory> * _gatedActivityFactory;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDXPCGatedActivity * _lock_gatedActivity;
    NSObject<OS_os_log> * _loggingCategory;
    double  _maximumDelay;
    NSUserDefaults * _persistentStateDefaults;
    HDProfile * _profile;
    double  _retryDelay;
    unsigned long long  _state;
    <HKHRDatabaseAnalysisSchedulerDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKHRDatabaseAnalysisSchedulerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_enterStateIfPossible:(unsigned long long)arg1;
- (id)_gatedActivity;
- (void)_maybeRetryLater;
- (void)_requestGatedActivityRunWithDelay:(double)arg1;
- (void)_resetRetryCounter;
- (double)_retryDelayGivenRetryCount:(long long)arg1;
- (void)_runActivity:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_runMaintenanceOperationForActivity:(id)arg1 assertion:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)daemonReady:(id)arg1;
- (id)delegate;
- (void)forceAnalysis;
- (id)initWithProfile:(id)arg1 identifier:(id)arg2 loggingCategory:(id)arg3 maximumDelay:(double)arg4 retryDelay:(double)arg5 breadcrumbManager:(id)arg6;
- (id)initWithProfile:(id)arg1 identifier:(id)arg2 loggingCategory:(id)arg3 maximumDelay:(double)arg4 retryDelay:(double)arg5 breadcrumbManager:(id)arg6 gatedActivityFactory:(id)arg7 assertionProvider:(id)arg8 persistentStateDefaults:(id)arg9;
- (id)retryCountKey;
- (void)scheduleAnalysis;
- (void)setDelegate:(id)arg1;

@end
