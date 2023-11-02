
@interface HMDHH2AutoMigrationMonitor : HMFObject <HMFLogging> {
    HMDHH2AutoMigrationEligibilityChecker * _eligibilityChecker;
    <HMDFeaturesDataSource> * _featuresDataSource;
    HMDFMFHandler * _fmfHandler;
    HMDHomeManager * _homeManager;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    <HMDBackgroundSystemTaskSchedulerInterfacing> * _taskScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)attemptAutoMigrationWithCompletionHandler:(id /* block */)arg1;
- (void)handleFMFStatusUpdatedNotification:(id)arg1;
- (id)initWithHomeManager:(id)arg1 eligibilityChecker:(id)arg2;
- (id)initWithHomeManager:(id)arg1 fmfHandler:(id)arg2 backgroundTaskScheduler:(id)arg3 eligibilityChecker:(id)arg4 featuresDataSource:(id)arg5 logEventSubmitter:(id)arg6;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
