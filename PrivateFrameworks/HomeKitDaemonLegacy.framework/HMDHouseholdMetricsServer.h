
@interface HMDHouseholdMetricsServer : NSObject {
    <HMDHouseholdMetricsDataSource> * _dataSource;
    <HMDHouseholdMetricsLogEventProviding> * _householdMetricsProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _logEventFactories;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    <HMDHouseholdMetricsMessaging> * _remoteMessageDispatcher;
    HMDHouseholdMetricsRequestContributor * _requestContributor;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) <HMDHouseholdMetricsDataSource> *dataSource;
@property (nonatomic, readonly) <HMDHouseholdMetricsLogEventProviding> *householdMetricsProvider;
@property (nonatomic, readonly) NSDictionary *logEventFactories;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (nonatomic, readonly) <HMDHouseholdMetricsMessaging> *remoteMessageDispatcher;
@property (nonatomic, readonly) HMDHouseholdMetricsRequestContributor *requestContributor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (bool)evaluateHouseholdActivityLogEventForSubmission:(id)arg1;
- (bool)evaluateMetricResponsesForSubmission:(id)arg1;
- (id)householdMetricsProvider;
- (id)initWithDataSource:(id)arg1 logEventSubmitter:(id)arg2 householdMetricsProvider:(id)arg3 remoteMessageDispatcher:(id)arg4 logEventFactories:(id)arg5 workQueue:(id)arg6;
- (id)logEventFactories;
- (id)logEventSubmitter;
- (id)remoteMessageDispatcher;
- (id)requestContributor;
- (void)runHouseholdMetricsDataCollectionAssociatedToDate:(id)arg1 forceSubmit:(bool)arg2;
- (void)sendHouseholdMetricsCollectionRequestToDevices:(id)arg1 forHomeWithUUID:(id)arg2 associatedToDate:(id)arg3 completion:(id /* block */)arg4;
- (id)workQueue;

@end
