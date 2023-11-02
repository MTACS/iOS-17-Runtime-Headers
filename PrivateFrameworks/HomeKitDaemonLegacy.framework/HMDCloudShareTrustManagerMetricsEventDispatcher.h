
@interface HMDCloudShareTrustManagerMetricsEventDispatcher : HMFObject <HMDLogEventDailyTaskRunner, HMFLogging> {
    HMDLogEventDailyScheduler * _dailyScheduler;
    <HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> * _dataSource;
    NSUUID * _identifier;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    bool  _registered;
}

@property (readonly) HMDLogEventDailyScheduler *dailyScheduler;
@property (readonly) <HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property bool registered;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dailyScheduler;
- (id)dataSource;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3 dataSource:(id)arg4;
- (id)logEventSubmitter;
- (id)logIdentifier;
- (void)registerForDailyTrustManagerEvents;
- (bool)registered;
- (void)runDailyTask;
- (void)setRegistered:(bool)arg1;
- (void)submitCloudShareTrustStatusDailyEvent;
- (void)submitFailureEventWithEventErrorCode:(long long)arg1;
- (void)submitFailureEventWithEventErrorCode:(long long)arg1 error:(id)arg2;
- (void)submitTrustActivityEvent:(long long)arg1;
- (void)submitTrustZoneCreatedEvent;
- (void)submitTrustZoneRemovedEvent;

@end
