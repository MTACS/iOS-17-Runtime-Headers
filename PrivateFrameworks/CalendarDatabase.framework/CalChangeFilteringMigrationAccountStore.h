
@interface CalChangeFilteringMigrationAccountStore : NSObject <CalMigrationAccountStore> {
    NSMutableDictionary * _addedWrappedAccounts;
    NSMutableDictionary * _addedWrappedChildAccounts;
    <CalMigrationAccountStore> * _backingAccountStore;
    <CalChangeFilteringMigrationAccountStoreDelegate> * _delegate;
    NSMutableDictionary * _loadedAccounts;
    NSMutableSet * _removedWrappedAccountIdentifiers;
}

@property (nonatomic, readonly) NSMutableDictionary *addedWrappedAccounts;
@property (nonatomic, readonly) NSMutableDictionary *addedWrappedChildAccounts;
@property (nonatomic, readonly) <CalMigrationAccountStore> *backingAccountStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CalChangeFilteringMigrationAccountStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *loadedAccounts;
@property (nonatomic, readonly) NSMutableSet *removedWrappedAccountIdentifiers;
@property (readonly) Class superclass;

+ (id)storeFilteringAllChangesInBackingAccountStore:(id)arg1;

- (void).cxx_destruct;
- (id)_accountWithIdentifier:(id)arg1 preloadedBackingAccount:(id)arg2;
- (id)_backingAccountForAccount:(id)arg1;
- (id)accountWithIdentifier:(id)arg1;
- (id)addedWrappedAccounts;
- (id)addedWrappedChildAccounts;
- (id)backingAccountStore;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (id)createAccountWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2;
- (id)createChildAccountOfParent:(id)arg1 withAccountTypeIdentifier:(id)arg2 error:(id*)arg3;
- (id)delegate;
- (id)initWithBackingAccountStore:(id)arg1 delegate:(id)arg2;
- (id)loadedAccounts;
- (bool)removeAccount:(id)arg1 error:(id*)arg2;
- (id)removedWrappedAccountIdentifiers;
- (bool)saveAccount:(id)arg1 withError:(id*)arg2;
- (id)topLevelAccountsWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2;

@end
