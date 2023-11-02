
@protocol CKXPCProcessScopedDaemon

@required

- (void)accountWithID:(NSString *)arg1 changedWithChangeType:(long long)arg2;
- (void)accountsDidGrantAccessToBundleID:(NSString *)arg1 containerIdentifiers:(NSArray *)arg2;
- (void)accountsDidRevokeAccessToBundleID:(NSString *)arg1 containerIdentifiers:(NSArray *)arg2;
- (void)accountsWillDeleteAccount:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)dumpAllClientsStatusReportToFileHandle:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSFileHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchUsabilityForTestAccountCredentials:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CKAccountOverrideInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)globalDeviceIdentifierWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)maxInlineMergeableDeltaSizeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)updatePushTokens;
- (void)wipeAllCachesAndDie;
- (void)wipeServerConfigurationsAndDie;

@end
