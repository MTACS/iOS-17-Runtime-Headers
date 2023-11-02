
@interface CalPlistSavingMigrationAccountStore : NSObject <CalMigrationAccountStore> {
    NSMutableDictionary * _addedAccounts;
    NSMutableDictionary * _addedChildAccounts;
    <CalMigrationReadOnlyAccountStore> * _backingAccountStore;
    NSMutableSet * _deletedAccountIdentifiers;
    NSMutableDictionary * _loadedAccounts;
    NSMutableDictionary * _modifiedAccounts;
    NSURL * _plistURL;
}

@property (nonatomic, readonly) NSMutableDictionary *addedAccounts;
@property (nonatomic, readonly) NSMutableDictionary *addedChildAccounts;
@property (nonatomic, readonly) <CalMigrationReadOnlyAccountStore> *backingAccountStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableSet *deletedAccountIdentifiers;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *loadedAccounts;
@property (nonatomic, readonly) NSMutableDictionary *modifiedAccounts;
@property (nonatomic, readonly) NSURL *plistURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountWithIdentifier:(id)arg1 preloadedBackingAccount:(id)arg2;
- (void)_registerAddedChildAccountWithIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2;
- (bool)_trySaveWithError:(id*)arg1;
- (id)accountWithIdentifier:(id)arg1;
- (id)addedAccounts;
- (id)addedChildAccounts;
- (id)backingAccountStore;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (id)createAccountWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2;
- (id)createChildAccountOfParent:(id)arg1 withAccountTypeIdentifier:(id)arg2 error:(id*)arg3;
- (id)deletedAccountIdentifiers;
- (id)initWithPlistURL:(id)arg1 backingAccountStore:(id)arg2;
- (id)loadedAccounts;
- (id)modifiedAccounts;
- (id)plistURL;
- (bool)removeAccount:(id)arg1 error:(id*)arg2;
- (bool)saveAccount:(id)arg1 withError:(id*)arg2;
- (id)topLevelAccountsWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2;

@end
