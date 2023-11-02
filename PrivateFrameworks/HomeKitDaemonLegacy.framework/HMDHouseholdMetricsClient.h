
@interface HMDHouseholdMetricsClient : HMFObject <HMDHouseholdMetricsLogEventProviding> {
    HMDEventCountersManager * _countersManager;
    HMMDateProvider * _dateProvider;
    id /* block */  _isDNUEnabledBlock;
    NSDictionary * _logEventFactories;
    <HMDHouseholdMetricsMessaging> * _remoteMessageDispatcher;
    <HMDHouseholdMetricsRequestCountProvider> * _requestCountProvider;
}

@property (nonatomic, readonly) HMDEventCountersManager *countersManager;
@property (nonatomic, readonly) HMMDateProvider *dateProvider;
@property (nonatomic, readonly) id /* block */ isDNUEnabledBlock;
@property (nonatomic, readonly) NSDictionary *logEventFactories;
@property (nonatomic, readonly) <HMDHouseholdMetricsMessaging> *remoteMessageDispatcher;
@property (nonatomic, readonly) <HMDHouseholdMetricsRequestCountProvider> *requestCountProvider;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)countersManager;
- (id)dateProvider;
- (void)dealloc;
- (void)deleteExpiredCounters;
- (id)handleRequestMessageWithPayload:(id)arg1 outError:(id*)arg2;
- (id)householdMetricsForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;
- (id)initWithCountersManager:(id)arg1 dateProvider:(id)arg2 remoteMessageDispatcher:(id)arg3 requestCountProvider:(id)arg4 logEventFactories:(id)arg5;
- (id)initWithCountersManager:(id)arg1 dateProvider:(id)arg2 remoteMessageDispatcher:(id)arg3 requestCountProvider:(id)arg4 logEventFactories:(id)arg5 isDNUEnabledBlock:(id /* block */)arg6;
- (id /* block */)isDNUEnabledBlock;
- (id)logEventFactories;
- (id)remoteMessageDispatcher;
- (id)requestCountProvider;

@end
