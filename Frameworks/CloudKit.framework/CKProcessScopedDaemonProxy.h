
@interface CKProcessScopedDaemonProxy : NSObject {
    <NSObject> * _connectionInterruptedObserver;
    bool  _hasValidProcessScopedDaemonProxyCreator;
    <CKXPCProcessScopedDaemon> * _processScopedDaemonProxyCreator;
}

@property (nonatomic, retain) <NSObject> *connectionInterruptedObserver;
@property bool hasValidProcessScopedDaemonProxyCreator;
@property (nonatomic, retain) <CKXPCProcessScopedDaemon> *processScopedDaemonProxyCreator;

+ (id)CKXPCClientToDaemonProcessScopedInterface;
+ (id)CKXPCDaemonToClientProcessScopedInterface;
+ (id)sharedProcessScopedDaemonProxy;

- (void).cxx_destruct;
- (void)_getProcessScopedDaemonProxyCreatorSynchronous:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_getProcessScopedDaemonProxySynchronous:(bool)arg1 errorHandler:(id /* block */)arg2 daemonProxyHandler:(id /* block */)arg3;
- (void)accountWithID:(id)arg1 changedWithChangeType:(long long)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)arg1;
- (id)connectionInterruptedObserver;
- (void)dealloc;
- (void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchUsabilityForTestAccountCredentials:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)globalDeviceIdentifier;
- (bool)hasValidProcessScopedDaemonProxyCreator;
- (id)initInternal;
- (void)kill;
- (unsigned long long)maxInlineMergeableDeltaSize;
- (id)processScopedDaemonProxyCreator;
- (void)setConnectionInterruptedObserver:(id)arg1;
- (void)setHasValidProcessScopedDaemonProxyCreator:(bool)arg1;
- (void)setProcessScopedDaemonProxyCreator:(id)arg1;
- (void)updatePushTokens;
- (void)wipeAllCachesAndDie;
- (void)wipeServerConfigurationsAndDie;

@end
