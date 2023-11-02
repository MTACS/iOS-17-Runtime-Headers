
@interface HDHRCardioFitnessAnalyticsDailyEventActivity : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {
    HKHRCardioFitnessAnalyticsManager * _analyticsManager;
    double  _calculationPeriod;
    HDHRCardioFitnessAnalyticsDailyEventDataSource * _dataSource;
    HDPeriodicActivity * _periodicActivity;
    HDAssertion * _preparedDatabaseAccessibilityAssertion;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    double  _retryPeriod;
}

@property (nonatomic, readonly) HKHRCardioFitnessAnalyticsManager *analyticsManager;
@property (nonatomic, readonly) double calculationPeriod;
@property (nonatomic, readonly) HDHRCardioFitnessAnalyticsDailyEventDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDPeriodicActivity *periodicActivity;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) double retryPeriod;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_submitAnalyticsWithActivityCompletion:(id /* block */)arg1;
- (id)analyticsManager;
- (double)calculationPeriod;
- (void)daemonReady:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (id)periodicActivity;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (bool)periodicActivityRequiresProtectedData:(id)arg1;
- (id)profile;
- (id)queue;
- (double)retryPeriod;
- (void)setPeriodicActivity:(id)arg1;

@end
