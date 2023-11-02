
@protocol HMDNetworkRouterFirewallRuleManager <NSObject>

@required

- (void)fetchCloudChangesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)fetchPairedMetadataVersionConfigurationsForAccessories:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)fetchRulesForAccessories:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)shutdownForClient:(id <HMDNetworkRouterFirewallRuleManagerClient>)arg1;
- (void)startupForClient:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <HMDNetworkRouterFirewallRuleManagerClient> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
