
@interface HMNetworkRouterFirewallRuleManager : NSObject {
    HMHomeManager * _homeManager;
    HMFMessageDestination * _messageDestination;
}

@property (nonatomic, readonly) HMHomeManager *homeManager;
@property (nonatomic, readonly) HMFMessageDestination *messageDestination;

- (void).cxx_destruct;
- (void)__sendMessage:(id)arg1;
- (void)_addOverrides:(id)arg1 replace:(bool)arg2 completion:(id /* block */)arg3;
- (void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(bool)arg3 listOnly:(bool)arg4 verifySignatures:(bool)arg5 completion:(id /* block */)arg6;
- (void)_dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(bool)arg4 rawOutput:(bool)arg5 completion:(id /* block */)arg6;
- (void)_dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(bool)arg4 rawOutput:(bool)arg5 completion:(id /* block */)arg6;
- (void)_fetchCloudChangesWithForceChangesFound:(bool)arg1 completion:(id /* block */)arg2;
- (void)_removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(id /* block */)arg3;
- (void)addOverrides:(id)arg1 completion:(id /* block */)arg2;
- (void)dumpAllLocalRulesIgnoringOverrides:(bool)arg1 rawOutput:(bool)arg2 completion:(id /* block */)arg3;
- (void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(bool)arg3 verifySignatures:(bool)arg4 completion:(id /* block */)arg5;
- (void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(bool)arg2 rawOutput:(bool)arg3 completion:(id /* block */)arg4;
- (void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(bool)arg4 rawOutput:(bool)arg5 completion:(id /* block */)arg6;
- (void)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(bool)arg4 rawOutput:(bool)arg5 completion:(id /* block */)arg6;
- (void)fetchCloudChangesAndForceChangesFoundWithCompletion:(id /* block */)arg1;
- (void)fetchCloudChangesWithCompletion:(id /* block */)arg1;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1;
- (void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(bool)arg2 completion:(id /* block */)arg3;
- (id)messageDestination;
- (void)removeAllLocalRulesWithCompletion:(id /* block */)arg1;
- (void)removeAllOverridesWithCompletion:(id /* block */)arg1;
- (void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(id /* block */)arg3;
- (void)setOverrides:(id)arg1 completion:(id /* block */)arg2;

@end
