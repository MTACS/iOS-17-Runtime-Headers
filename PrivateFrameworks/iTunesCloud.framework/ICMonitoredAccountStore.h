
@interface ICMonitoredAccountStore : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    ACMonitoredAccountStore * _accountStore;
    ACAccountType * _cachedStoreAccountType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedAccountStore;

- (void).cxx_destruct;
- (id)_registerAndLoadAccountsIfNecessary;
- (id)acAccountStore;
- (void)accountCredentialChanged:(id)arg1;
- (void)accountWasAdded:(id)arg1;
- (void)accountWasModified:(id)arg1;
- (void)accountWasRemoved:(id)arg1;
- (id)activeStoreAccountWithError:(id*)arg1;
- (id)allStoreAccountsWithError:(id*)arg1;
- (id)init;
- (id)localStoreAccountWithError:(id*)arg1;
- (id)primaryAppleAccountWithError:(id*)arg1;
- (void)registerObserver:(id)arg1;
- (bool)saveAccount:(id)arg1 error:(id*)arg2;
- (id)storeAccountForDSID:(id)arg1 error:(id*)arg2;
- (id)storeAccountForHomeUserIdentifier:(id)arg1 error:(id*)arg2;
- (id)storeAccountTypeWithError:(id*)arg1;
- (id)storeAccountWithIdentifier:(id)arg1 error:(id*)arg2;

@end
