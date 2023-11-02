
@interface CKDProcessScopedStateManager : NSObject <CKXPCProcessScopedDaemon>

+ (id)sharedManager;

- (void)_wipePersonaBasedClientCacheForAppRecord:(id)arg1;
- (void)accountWithID:(id)arg1 changedWithChangeType:(long long)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)arg1;
- (void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchUsabilityForTestAccountCredentials:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)globalDeviceIdentifierWithCompletionHandler:(id /* block */)arg1;
- (id)initInternal;
- (void)kickOffPendingLongLivedOperations;
- (void)maxInlineMergeableDeltaSizeWithCompletionHandler:(id /* block */)arg1;
- (void)updatePushTokens;
- (void)wipeAllCachesAndDie;
- (void)wipeServerConfigurationsAndDie;

@end
