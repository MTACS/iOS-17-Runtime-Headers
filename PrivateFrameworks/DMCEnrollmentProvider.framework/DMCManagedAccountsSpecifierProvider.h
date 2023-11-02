
@interface DMCManagedAccountsSpecifierProvider : DMCSpecifierProvider {
    bool  _isReloadingManagedAccounts;
    NSArray * _managedAccounts;
}

@property (nonatomic) bool isReloadingManagedAccounts;
@property (nonatomic, retain) NSArray *managedAccounts;

- (void).cxx_destruct;
- (void)_accountCellWasTappedWithSpecifier:(id)arg1;
- (void)_reloadManagedAccounts;
- (id)initWithAccountManager:(id)arg1;
- (bool)isReloadingManagedAccounts;
- (id)managedAccounts;
- (void)reloadNotificationPosted:(id)arg1;
- (void)setIsReloadingManagedAccounts:(bool)arg1;
- (void)setManagedAccounts:(id)arg1;
- (id)specifiers;

@end
