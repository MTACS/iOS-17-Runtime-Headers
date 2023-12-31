
@interface MFAccountStore : NSObject {
    ACAccountStore * _accountStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accountStoreLock;
}

@property (readonly) ACAccountStore *persistentStore;

+ (id)_accountWithAccountClass:(Class)arg1 persistentAccount:(id)arg2 useExisting:(bool)arg3;
+ (bool)_shouldUpdateAccountsInPlace;
+ (id)sharedAccountStore;

- (void).cxx_destruct;
- (id)_accountWithPersistentAccount:(id)arg1 useExisting:(bool)arg2;
- (void)_accountsStoreChanged:(id)arg1;
- (id)accountsWithTypeIdentifiers:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)existingAccountWithPersistentAccount:(id)arg1;
- (id)init;
- (id)newPersistentAccountWithAccountTypeIdentifier:(id)arg1;
- (id)persistentStore;
- (void)removePersistentAccountWithAccount:(id)arg1;
- (void)savePersistentAccountWithAccount:(id)arg1;
- (void)setPersistentStore:(id)arg1;
- (id)supportedDataclassesWithAccountTypeIdentifier:(id)arg1;

@end
