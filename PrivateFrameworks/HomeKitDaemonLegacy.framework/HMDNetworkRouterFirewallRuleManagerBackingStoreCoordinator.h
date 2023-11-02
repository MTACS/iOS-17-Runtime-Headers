
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator : HMFObject <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator, HMFLogging> {
    <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> * _cloudFetchScheduler;
    <HMDNetworkRouterFirewallRuleManagerInternal> * _firewallRuleManager;
    <HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> * _mirror;
    HMBLocalZone * _mirroredLocalZone;
    NSNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _ownerQueue;
}

@property (nonatomic, readonly) <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> *cloudFetchScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HMDNetworkRouterFirewallRuleManagerInternal> *firewallRuleManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> *mirror;
@property (nonatomic, retain) HMBLocalZone *mirroredLocalZone;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ownerQueue;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) Class superclass;

+ (id)__createProcessingOptionsWithLabel:(id)arg1;
+ (id)__createProcessingOptionsWithLabel:(id)arg1 qualityOfService:(long long)arg2;
+ (id)__jsonFromDeclarations:(id)arg1 rawOutput:(bool)arg2 error:(id*)arg3;
+ (id)__jsonFromPairedMetadata:(id)arg1 rawOutput:(bool)arg2 error:(id*)arg3;
+ (id)__jsonFromRecords:(id)arg1 validateWithPublicKeys:(id)arg2 rawOutput:(bool)arg3 error:(id*)arg4;
+ (id)__jsonStringFromDictionary:(id)arg1 rawOutput:(bool)arg2 error:(id*)arg3;
+ (id)__jsonValueForCKRecordValue:(id)arg1;
+ (id)__networkDeclarationDataDictionaryFromOverrideObjectDictionary:(id)arg1;
+ (id)__networkDeclarationDataDictionaryFromRecordDictionary:(id)arg1;
+ (id)__networkDeclarationsFromRecord:(id)arg1 recordKey:(id)arg2 identifier:(id)arg3;
+ (id)__pairedMetadataDataDictionaryFromRecordDictionary:(id)arg1;
+ (id)__pairedMetadataDictionaryFromOverrideObjectDictionary:(id)arg1;
+ (id)__pairedMetadataFromRecord:(id)arg1 recordKey:(id)arg2 identifier:(id)arg3;
+ (long long)ckContainerEnvironment;
+ (id)ckContainerIdentifier;
+ (bool)ckUseAnonymousAccount;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)__cloudFetchSchedulerFired:(id /* block */)arg1;
- (void)__maybeStartOrStopCloudFetchScheduler;
- (void)__startupWithMirror:(id)arg1 completion:(id /* block */)arg2;
- (void)__startupWithMirroredLocalZone:(id)arg1 completion:(id /* block */)arg2;
- (void)__stopCloudFetchScheduler;
- (void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(bool)arg3 verifySignatures:(bool)arg4 completion:(id /* block */)arg5;
- (id)_fetchAllDataForProductGroup:(id)arg1 productNumber:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)_fetchAllOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)_fetchCloudChangesIfNeededForRecordIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(bool)arg2 forceChangeNotifications:(bool)arg3 requiredRecordIDs:(id)arg4 schedulerXpcActivity:(id)arg5 completion:(id /* block */)arg6;
- (id)_fetchNetworkDeclarationsForRecordIDs:(id)arg1 options:(id)arg2 ignoreOverrides:(bool)arg3 error:(id*)arg4;
- (id)_fetchPairedMetadataForAccessories:(id)arg1 options:(id)arg2 ignoreOverrides:(bool)arg3 error:(id*)arg4;
- (void)_listCloudRecordsForProductGroup:(id)arg1 rawOutput:(bool)arg2 completion:(id /* block */)arg3;
- (bool)addOverrides:(id)arg1 replace:(bool)arg2 error:(id*)arg3;
- (id)cloudFetchScheduler;
- (void)cloudFetchSchedulerFired:(id)arg1 completion:(id /* block */)arg2;
- (void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(bool)arg3 listOnly:(bool)arg4 verifySignatures:(bool)arg5 completion:(id /* block */)arg6;
- (id)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(bool)arg4 rawOutput:(bool)arg5 error:(id*)arg6;
- (id)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(bool)arg4 rawOutput:(bool)arg5 error:(id*)arg6;
- (void)fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(bool)arg2 forceChangeNotifications:(bool)arg3 completion:(id /* block */)arg4;
- (id)fetchPairedMetadataVersionConfigurationsForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(bool)arg3 error:(id*)arg4;
- (void)fetchRulesForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(bool)arg3 completion:(id /* block */)arg4;
- (id)firewallRuleManager;
- (void)firewallRuleManagerClientsDidChange;
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 cloudFetchInterval:(double)arg3 cloudFetchRetryInterval:(double)arg4 ownerQueue:(id)arg5;
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 cloudFetchScheduler:(id)arg3 ownerQueue:(id)arg4;
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 ownerQueue:(id)arg3;
- (bool)isRunning;
- (id)mirror;
- (id)mirroredLocalZone;
- (id)notificationCenter;
- (id)ownerQueue;
- (id)pairedMetadataVersionConfigurationForAccessory:(id)arg1 pairedMetadata:(id)arg2;
- (bool)removeAllLocalRulesWithError:(id*)arg1;
- (bool)removeAllOverridesWithError:(id*)arg1;
- (bool)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 error:(id*)arg3;
- (id)ruleConfigurationForAccessory:(id)arg1 declarations:(id)arg2;
- (void)setMirror:(id)arg1;
- (void)setMirroredLocalZone:(id)arg1;
- (void)shutdownWithCompletion:(id /* block */)arg1;
- (void)startupWithLocalDatabase:(id)arg1 completion:(id /* block */)arg2;

@end
