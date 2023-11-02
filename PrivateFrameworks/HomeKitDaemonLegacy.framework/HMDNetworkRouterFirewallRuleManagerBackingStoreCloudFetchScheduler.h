
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler : HMFObject <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler, HMFLogging> {
    double  _currentInterval;
    <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate> * _delegate;
    NSString * _identifier;
    double  _interval;
    NSObject<OS_xpc_object> * _overrideCriteria;
    double  _retryInterval;
    bool  _running;
    NSObject<OS_xpc_object> * _runningActivity;
}

@property (nonatomic, readonly) double currentInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) double interval;
@property (nonatomic, retain) NSObject<OS_xpc_object> *overrideCriteria;
@property (nonatomic, readonly) double retryInterval;
@property (getter=isRunning, nonatomic) bool running;
@property (nonatomic, retain) NSObject<OS_xpc_object> *runningActivity;
@property (readonly) Class superclass;

+ (void)__unregisterActivity:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)__checkInActivity:(id)arg1;
- (id)__initialCriteria;
- (void)__registerActivity;
- (void)__runActivity:(id)arg1;
- (void)__transitionActivity:(id)arg1 state:(long long)arg2;
- (void)__unregisterActivity;
- (double)currentInterval;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 interval:(double)arg2 retryInterval:(double)arg3 delegate:(id)arg4;
- (double)interval;
- (bool)isRunning;
- (id)overrideCriteria;
- (double)retryInterval;
- (id)runningActivity;
- (void)setOverrideCriteria:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setRunningActivity:(id)arg1;
- (void)start;
- (void)stop;

@end
