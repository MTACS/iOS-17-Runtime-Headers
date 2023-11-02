
@protocol HMDNetworkRouterFirewallRuleManagerDebug <NSObject>

@required

- (void)addOverrides:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)dumpAllLocalRulesIgnoringOverrides:(void *)arg1 rawOutput:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)dumpCloudRecordsForProductGroup:(void *)arg1 productNumber:(void *)arg2 rawOutput:(void *)arg3 verifySignatures:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSString *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)dumpLocalRulesForProductGroup:(void *)arg1 ignoreOverrides:(void *)arg2 rawOutput:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)dumpLocalRulesForProductGroup:(void *)arg1 productNumber:(void *)arg2 firmwareVersion:(void *)arg3 ignoreOverrides:(void *)arg4 rawOutput:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSString *, HMFVersion *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)dumpPairedMetadataForProductGroup:(void *)arg1 productNumber:(void *)arg2 firmwareVersion:(void *)arg3 ignoreOverrides:(void *)arg4 rawOutput:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSString *, HMFVersion *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)forceFetchCloudChangesAndForceChangeNotifications:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)listCloudRecordsForProductGroup:(void *)arg1 rawOutput:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)removeAllLocalRulesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeAllOverridesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeOverridesForProductGroup:(void *)arg1 productNumber:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setOverrides:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
