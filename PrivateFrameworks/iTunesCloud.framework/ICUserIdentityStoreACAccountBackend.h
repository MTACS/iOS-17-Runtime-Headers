
@interface ICUserIdentityStoreACAccountBackend : NSObject <ICMonitoredAccountStoreObserver, ICUserIdentityStoreBackend> {
    NSObject<OS_dispatch_queue> * _accountStoreDelegateQueue;
    NSNumber * _activeAccountDSID;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <ICUserIdentityStoreBackendDelegate> * _delegate;
    NSMutableDictionary * _identityPropertiesCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    ICMonitoredAccountStore * _monitoredAccountStore;
    ACAccount * _primaryICloudAccount;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICUserIdentityStoreBackendDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyIdentityProperties:(id)arg1 toAccount:(id)arg2;
- (void)_applyLocalStoreAccountProperties:(id)arg1 toAccount:(id)arg2;
- (id)_newLocalStoreAccountPropertiesFromAccount:(id)arg1;
- (id)_newUserIdentityPropertiesForAccount:(id)arg1;
- (void)_notifyDelegateOfBackendChange;
- (void)_synchronize;
- (id)_userIdentityPropertiesForAccount:(id)arg1;
- (id)activeAccountDSIDWithError:(id*)arg1;
- (id)activeLockerAccountDSIDWithError:(id*)arg1;
- (id)allManageableStoreAccountDSIDsWithError:(id*)arg1;
- (id)allStoreAccountDSIDsWithError:(id*)arg1;
- (id)allStoreAccountsWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (bool)disableLockerAccountDSID:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)identityPropertiesForDSID:(id)arg1 error:(id*)arg2;
- (id)identityPropertiesForPrimaryICloudAccountWithError:(id*)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localStoreAccountPropertiesWithError:(id*)arg1;
- (id)localStoreAccountWithError:(id*)arg1;
- (void)monitoredAccountStore:(id)arg1 didAddAccount:(id)arg2;
- (void)monitoredAccountStore:(id)arg1 didChangeCredentialsForAccount:(id)arg2;
- (void)monitoredAccountStore:(id)arg1 didRemoveAccount:(id)arg2;
- (void)monitoredAccountStore:(id)arg1 didUpdateAccount:(id)arg2;
- (void)removeIdentityForDSID:(id)arg1 completion:(id /* block */)arg2;
- (bool)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (bool)setIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3;
- (bool)setLocalStoreAccountProperties:(id)arg1 error:(id*)arg2;
- (id)storeAccountForDSID:(id)arg1 error:(id*)arg2;
- (void)synchronize;
- (bool)updateActiveAccountDSID:(id)arg1 error:(id*)arg2;
- (bool)updateActiveLockerAccountDSID:(id)arg1 error:(id*)arg2;
- (id)verificationContextForAccountEstablishmentWithError:(id*)arg1;
- (id)verificationContextForDSID:(id)arg1 error:(id*)arg2;

@end
