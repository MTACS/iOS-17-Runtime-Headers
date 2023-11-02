
@interface ACMonitoredAccountStore : ACAccountStore <ACRemoteAccountStoreSessionDelegate> {
    NSSet * _accountTypesToMonitor;
    NSMutableDictionary * _accountsByID;
    <NSObject> * _credentialsDidChangeObserver;
    NSHashTable * _delegates;
    NSArray * _propertiesToPrefetch;
    <NSObject> * _remoteAccountDidChangeObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *monitoredAccounts;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountsListPopulated:(id)arg1;
- (id)_allDelegates;
- (void)_processAccountsListForNotifications:(id)arg1;
- (void)_registerAccountMonitorSynchronouslyWithCompletion:(id /* block */)arg1;
- (void)_registerAccountMonitorWithCompletion:(id /* block */)arg1;
- (void)_registerForCredentialChangedNotifications;
- (void)_reregister;
- (void)_sendNotificationOfChange;
- (void)accountWasAdded:(id)arg1;
- (void)accountWasModified:(id)arg1;
- (void)accountWasRemoved:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)connectionClosed;
- (id)connectionDelegate;
- (void)credentialsChangedNotification:(id)arg1;
- (void)dealloc;
- (id)initWithAccountTypes:(id)arg1 delegate:(id)arg2;
- (id)initWithAccountTypes:(id)arg1 propertiesToPrefetch:(id)arg2 delegate:(id)arg3;
- (id)initWithWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2 accountTypes:(id)arg3 propertiesToPrefetch:(id)arg4 delegate:(id)arg5;
- (id)monitoredAccountWithIdentifier:(id)arg1;
- (id)monitoredAccounts;
- (void)registerSynchronouslyWithError:(id*)arg1;
- (void)registerWithCompletion:(id /* block */)arg1;
- (void)removeDelegate:(id)arg1;

@end
