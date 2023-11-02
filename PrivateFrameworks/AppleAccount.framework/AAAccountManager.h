
@interface AAAccountManager : NSObject {
    ACAccountStore * _accountStore;
    id  _accountStoreDidChangeObserver;
    NSMutableArray * _accounts;
    NSMutableArray * _originalAccounts;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_accountStore;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (id)accountWithIdentifier:(id)arg1;
- (id)accountWithPersonID:(id)arg1;
- (id)accountWithUsername:(id)arg1;
- (id)accounts;
- (id)accountsEnabledForDataclass:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)dealloc;
- (id)primaryAccount;
- (void)reloadAccounts;
- (void)removeAccount:(id)arg1;
- (void)saveAllAccounts;
- (void)updateAccount:(id)arg1;

@end
