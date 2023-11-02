
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler <NSObject>

@required

- (<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate> *)delegate;
- (NSString *)identifier;
- (double)interval;
- (bool)isRunning;
- (double)retryInterval;
- (void)start;
- (void)stop;

@end
