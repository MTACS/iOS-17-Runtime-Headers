
@interface HMDHouseholdMetricsManager : HMFObject <HMDLogEventDailyTaskRunner, HMDLogEventHomeutilTaskRunner, HMFMessageReceiver> {
    HMDHouseholdMetricsClient * _client;
    HMMDateProvider * _dateProvider;
    NSUUID * _messageTargetUUID;
    HMDHouseholdMetricsMessagingProvider * _messagingProvider;
    HMDHouseholdMetricsServer * _server;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDHouseholdMetricsClient *client;
@property (nonatomic, readonly) HMMDateProvider *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) HMDHouseholdMetricsMessagingProvider *messagingProvider;
@property (nonatomic, readonly) HMDHouseholdMetricsServer *server;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)client;
- (id)dateProvider;
- (id)initWithCountersManager:(id)arg1 dataSource:(id)arg2 accessoryDetailsManager:(id)arg3 dailyScheduler:(id)arg4 logEventSubmitter:(id)arg5 dateProvider:(id)arg6 activityContributors:(id)arg7;
- (id)initWithCountersManager:(id)arg1 dataSource:(id)arg2 dailyScheduler:(id)arg3 logEventSubmitter:(id)arg4 dateProvider:(id)arg5 requestCountProvider:(id)arg6 logEventFactories:(id)arg7;
- (id)messageTargetUUID;
- (id)messagingProvider;
- (void)runDailyTask;
- (void)runHomeutilTask;
- (id)server;
- (id)workQueue;

@end
