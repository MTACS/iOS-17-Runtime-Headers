
@interface HMDHH2AutoMigrationEligibilityLogEventSubmitter : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner> {
    HMMDateProvider * _dateProvider;
    <HMDHH2AutoMigrationEligibilityLogEventSubmitterDataSource> * _eligibilityStatusDataSource;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    NSUserDefaults * _userDefaults;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMMDateProvider *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HMDHH2AutoMigrationEligibilityLogEventSubmitterDataSource> *eligibilityStatusDataSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)dateProvider;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)eligibilityStatusDataSource;
- (id)initWithEligibilityStatusDataSource:(id)arg1 analyzerDataSource:(id)arg2 workQueue:(id)arg3;
- (id)logEventSubmitter;
- (void)runDailyTask;
- (void)submitHH2AutoMigrationEligibilityStatus;
- (id)userDefaults;
- (id)workQueue;

@end
