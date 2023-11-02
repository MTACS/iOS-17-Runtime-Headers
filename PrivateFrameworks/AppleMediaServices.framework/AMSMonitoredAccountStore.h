
@interface AMSMonitoredAccountStore : ACMonitoredAccountStore {
    void error;
    void fallback;
    void typeStore;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2;
- (void)accountTypeWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)accountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)accountWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithAccountTypes:(id)arg1 delegate:(id)arg2;
- (id)initWithAccountTypes:(id)arg1 propertiesToPrefetch:(id)arg2 delegate:(id)arg3;
- (id)initWithEffectiveBundleID:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2;
- (id)initWithWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2 accountTypes:(id)arg3 propertiesToPrefetch:(id)arg4 delegate:(id)arg5;
- (id)monitoredAccountWithIdentifier:(id)arg1;

@end
