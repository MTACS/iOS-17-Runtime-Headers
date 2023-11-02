
@interface ICUserIdentityStore : NSObject <ICUserIdentityStoreBackendDelegate, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    ICValueHistory * _activeAccountHistory;
    ICValueHistory * _activeLockerAccountHistory;
    <ICUserIdentityStoreBackend> * _backend;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    ICUserIdentityStoreCoding * _codingHelper;
    ICDelegateAccountStore * _delegateAccountStore;
    ICDelegateAccountStoreOptions * _delegateAccountStoreOptions;
    unsigned long long  _lastKnownActiveAccountTimestamp;
    unsigned long long  _lastKnownActiveLockerAccountTimestamp;
    ICLocalStoreAccountProperties * _localStoreAccountProperties;
}

@property (nonatomic, readonly) <ICUserIdentityStoreBackend> *_unsafeBackend;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identityStoreStyle;
@property (nonatomic, readonly) ICLocalStoreAccountProperties *localStoreAccountProperties;
@property (readonly) Class superclass;

+ (void)_claimSingleWriterStatus;
+ (id)defaultIdentityStore;
+ (id)nullIdentityStore;
+ (bool)supportsSecureCoding;
+ (id)testingIdentityStoreWithDatabasePath:(id)arg1;
+ (id)testingIdentityStoreWithSingleWriterService:(id)arg1;

- (void).cxx_destruct;
- (id)DSIDForUserIdentity:(id)arg1 outError:(id*)arg2;
- (bool)_allowsDelegationForUserIdentity:(id)arg1;
- (void)_assertNonNullIdentityStoreForSelector:(SEL)arg1;
- (void)_delegateAccountStoreDidChangeNotification:(id)arg1;
- (void)_dispatchDidChangeNotification:(bool)arg1 didDelegateAccountStoreChange:(bool)arg2;
- (id)_dsidForTimestamp:(unsigned long long)arg1 history:(id)arg2;
- (id)_dsidForUserIdentity:(id)arg1 error:(id*)arg2;
- (id)_existingIdentityPropertiesForUserIdentity:(id)arg1 error:(id*)arg2;
- (id)_icValidStoreAccountsFromACAccounts:(id)arg1;
- (void)_importValuesFromCodingHelper:(id)arg1;
- (id)_initCommon;
- (id)_initWithStyle:(long long)arg1 delegateAccountStoreOptions:(id)arg2;
- (void)_initializeLocalStoreAccountProperties;
- (id)_openDelegateAccountStoreForUserIdentity:(id)arg1 error:(id*)arg2;
- (id)_openDelegateAccountStoreWithError:(id*)arg1;
- (void)_prepareDelegateAccountStoreWithCompletionHandler:(id /* block */)arg1;
- (bool)_refreshLocalStoreAccountPropertiesAllowingDidChangeNotification:(bool)arg1;
- (void)_registerForDelegateAccountStoreNotifications:(id)arg1;
- (void)_reloadForExternalChange;
- (void)_resetDelegateAccountStoreWithCompletionHandler:(id /* block */)arg1;
- (bool)_saveIdentityProperties:(id)arg1 andPostAccountChangeNotification:(bool)arg2 forUserIdentity:(id)arg3 error:(id*)arg4;
- (void)_unregisterForDelegateAccountStoreNotifications:(id)arg1;
- (id)_unsafeBackend;
- (void)_unsafe_deleteDelegateAccountStore;
- (void)_updateDelegateAccountStoreUsingBlock:(id /* block */)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)disableLockerAccountWithDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDelegateTokensUsingBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)enumerateDelegateTokensWithType:(long long)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)getDelegationUUIDsForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)getPropertiesForActiveICloudAccountReturningError:(id*)arg1;
- (void)getPropertiesForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)getPropertiesForUserIdentity:(id)arg1 error:(id*)arg2;
- (id)getVerificationContextForUserIdentity:(id)arg1 error:(id*)arg2;
- (unsigned long long)hash;
- (long long)identityStoreStyle;
- (id)initWithCoder:(id)arg1;
- (void)insertPropertiesForUserIdentity:(id)arg1 andPostAccountChangeNotification:(bool)arg2 usingBlock:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (bool)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(id /* block */)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (id)localStoreAccountProperties;
- (void)removeAllDelegateTokensWithCompletionHandler:(id /* block */)arg1;
- (void)removeDelegateTokenForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDelegateTokensExpiringBeforeDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removePropertiesForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActiveAccountWithDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActiveLockerAccountWithDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)synchronize;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;
- (void)updatePropertiesForLocalStoreAccountUsingBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)userIdentitiesForAllStoreAccountsWithError:(id*)arg1;
- (id)userIdentitiesForManageableAccountsWithError:(id*)arg1;
- (void)userIdentityStoreBackendDidChange:(id)arg1;

@end