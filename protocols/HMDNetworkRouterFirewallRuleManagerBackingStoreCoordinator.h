
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator <NSObject>

@required

- (bool)addOverrides:(NSDictionary *)arg1 replace:(bool)arg2 error:(id*)arg3;
- (void)dumpCloudRecordsForProductGroup:(void *)arg1 productNumber:(void *)arg2 rawOutput:(void *)arg3 listOnly:(void *)arg4 verifySignatures:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSString *, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (NSString *)dumpLocalRulesForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 firmwareVersion:(HMFVersion *)arg3 ignoreOverrides:(bool)arg4 rawOutput:(bool)arg5 error:(id*)arg6;
- (NSString *)dumpPairedMetadataForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 firmwareVersion:(HMFVersion *)arg3 ignoreOverrides:(bool)arg4 rawOutput:(bool)arg5 error:(id*)arg6;
- (void)fetchCloudChangesWithQualityOfService:(void *)arg1 ignoreLastFetchedAccessories:(void *)arg2 forceChangeNotifications:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: long long, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (NSSet *)fetchPairedMetadataVersionConfigurationsForAccessories:(NSSet *)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(bool)arg3 error:(id*)arg4;
- (void)fetchRulesForAccessories:(void *)arg1 qualityOfService:(void *)arg2 ignoreOverrides:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSSet *, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (<HMDNetworkRouterFirewallRuleManagerInternal> *)firewallRuleManager;
- (HMDCloudPairedMetadataVersionConfiguration *)pairedMetadataVersionConfigurationForAccessory:(HMDNetworkRouterFirewallRuleAccessoryIdentifier *)arg1 pairedMetadata:(HMDCloudPairedMetadata *)arg2;
- (bool)removeAllLocalRulesWithError:(id*)arg1;
- (bool)removeAllOverridesWithError:(id*)arg1;
- (bool)removeOverridesForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 error:(id*)arg3;
- (HMDNetworkRouterFirewallRuleConfiguration *)ruleConfigurationForAccessory:(HMDNetworkRouterFirewallRuleAccessoryIdentifier *)arg1 declarations:(HMDNetworkRouterFirewallRuleCloudNetworkDeclarations *)arg2;
- (void)shutdownWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startupWithLocalDatabase:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMBLocalDatabase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (void)firewallRuleManagerClientsDidChange;

@end
