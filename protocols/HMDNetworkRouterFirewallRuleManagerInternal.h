
@protocol HMDNetworkRouterFirewallRuleManagerInternal <HMDNetworkRouterFirewallRuleManager>

@required

- (NSArray *)activeClients;
- (void)didCompleteScheduledCloudFetch;

@end
