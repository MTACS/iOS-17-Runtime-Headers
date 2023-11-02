
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate <NSObject>

@required

- (void)cloudFetchSchedulerFired:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (void)cloudFetchSchedulerStarted:(id <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler>)arg1;
- (void)cloudFetchSchedulerStopped:(id <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler>)arg1;

@end
