
@interface HMDMultiUserSettingsMetricsEventDispatcher : HMFObject <HMDLogEventDailyTaskRunner, HMFLogging> {
    HMDLogEventDailyScheduler * _dailyScheduler;
    <HMDMultiUserSettingsMetricsEventDispatcherDataSource> * _dataSource;
    NSUUID * _identifier;
    <HMMLogEventSubmitting> * _logEventSubmitter;
}

@property (readonly) HMDLogEventDailyScheduler *dailyScheduler;
@property <HMDMultiUserSettingsMetricsEventDispatcherDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dailyScheduler;
- (id)dataSource;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3;
- (id)logEventSubmitter;
- (id)logIdentifier;
- (void)registerForDailyMultiUserSettingsEvents;
- (void)runDailyTask;
- (void)setDataSource:(id)arg1;
- (void)submitMultiUserSettingsDailyEvent;

@end
