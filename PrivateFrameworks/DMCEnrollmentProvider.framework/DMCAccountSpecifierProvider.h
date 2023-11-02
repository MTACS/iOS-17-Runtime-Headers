
@interface DMCAccountSpecifierProvider : NSObject {
    ACAccountStore * _accountStore;
    <DMCAccountSpecifierProviderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _updateQueue;
    <DMCSecondaryAccountViewModelDelegate> * _viewModelDelegate;
}

@property (nonatomic) <DMCAccountSpecifierProviderDelegate> *delegate;
@property (nonatomic) <DMCSecondaryAccountViewModelDelegate> *viewModelDelegate;

+ (id)groupSpecifierID;
+ (id)itemSpecifierIDForAccountUsername:(id)arg1;
+ (id)itemSpecifierIDForReauthAccountUsername:(id)arg1;
+ (id)itemSpecifierIDPrefix;

- (void).cxx_destruct;
- (void)_accountCellWasTappedWithSpecifier:(id)arg1;
- (id)_reauthSpecifierForAccount:(id)arg1;
- (id)_specifierForManagedAccount:(id)arg1;
- (id)_specifierForManagedAccountGroupWithTitle:(bool)arg1 plural:(bool)arg2;
- (void)appleAccountsDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithAccountStore:(id)arg1;
- (id)secondaryAccountViewModels;
- (void)setDelegate:(id)arg1;
- (void)setViewModelDelegate:(id)arg1;
- (void)specifiersWithCompletion:(id /* block */)arg1;
- (id)specifiersWithTitle:(bool)arg1 includePrimaryAccounts:(bool)arg2;
- (id)viewModelDelegate;

@end
