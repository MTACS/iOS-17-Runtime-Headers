
@interface ACUIAddAccountViewController : PSListController <ACUISetupViewControllerDelegate> {
    ACAccountStore * _accountStore;
    <ACUIAddAccountDataSource> * _addAccountDataSource;
    bool  _dontShowSecondLevelOtherAccountTypes;
    NSString * _filteredDataclass;
    PSSpecifier * _gmailSpecifier;
    unsigned char  _originalCellFlag;
    unsigned char  _originalWifiFlag;
    NSArray * _preEnabledDataclasses;
}

@property (retain) <ACUIAddAccountDataSource> *addAccountDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *filteredDataclass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ACUIAccountViewProvidersManager *viewProvidersManager;

+ (id)_debugStringForAction:(long long)arg1;

- (void).cxx_destruct;
- (void)_addAccountSpecifierWasTapped:(id)arg1;
- (void)_alertIfAccountTypePreventsMultiples:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_createCustomControlledAccountTapped:(id)arg1;
- (void)_dismissAndBecomeFirstResponder;
- (void)_presentPrimaryAppleIDSignInController:(id)arg1;
- (id)_specifierForAOLAccount;
- (id)_specifierForCustomControlledAccountWithName:(id)arg1 accountTypeID:(id)arg2;
- (id)_specifierForExchangeAccount;
- (id)_specifierForGmailAccount;
- (id)_specifierForOutlookAccount;
- (id)_specifierForPrimaryiCloudAccount;
- (id)_specifierForRegionalAccountType:(id)arg1;
- (id)_specifierForYahooAccount;
- (id)_specifierForiCloudAccount;
- (id)_specifiersForRegionalMailAccounts;
- (id)addAccountDataSource;
- (void)dealloc;
- (id)filteredDataclass;
- (id)giantSpecifierWithName:(id)arg1 forAccountTypeID:(id)arg2;
- (id)init;
- (void)nonModalDataclassConfigurationControllerDidCompleteWithSuccess:(bool)arg1;
- (void)setAddAccountDataSource:(id)arg1;
- (void)setFilteredDataclass:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setupViewControllerDidDismiss:(id)arg1;
- (bool)shouldAddSpecifierForAccountTypeID:(id)arg1;
- (bool)shouldAddSpecifierForOtherAccountTypes;
- (void)signInControllerDidCancel;
- (void)signInControllerDidCompleteWithSuccess:(bool)arg1 error:(id)arg2;
- (id)specifierForOtherAccounts;
- (id)specifiers;
- (id)viewProvidersManager;
- (void)viewWillAppear:(bool)arg1;

@end
