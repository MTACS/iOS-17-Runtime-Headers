
@interface PKAccountBankAccountsViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate> {
    PKAccount * _account;
    unsigned long long  _accountFeatureIdentifier;
    PKAccount * _associatedAccount;
    NSMutableArray * _availableFundingSources;
    long long  _context;
    NSMutableArray * _deletingFundingSources;
    PKAccountPaymentFundingSource * _lastAddedFundingSource;
    bool  _loadingAccountUserInfo;
    bool  _loadingFundingSources;
    PKPaymentWebService * _paymentWebService;
    NSMutableArray * _unavailableFundingSources;
    PKAccountUserInfo * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addBankAccountInformationViewController;
- (id)_bankAccountCellForRowAtIndexPath:(id)arg1;
- (void)_configureBankAccountCell:(id)arg1 withFundingSource:(id)arg2;
- (void)_didSelectDeleteBankAccountAtIndexPath:(id)arg1;
- (void)_editButtonPressed:(id)arg1;
- (void)_fetchAccountUserInfo:(id /* block */)arg1;
- (bool)_hasBankAccounts;
- (bool)_isBankAccountIndexPath:(id)arg1;
- (void)_presentAddBankAccount;
- (void)_presentContactSupport;
- (void)_toggleEditingMode;
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;
- (void)_updateEditButtonIfNecessary;
- (void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2;
- (void)addBankAccountInformationViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)addBankAccountInformationViewControllerDidFinish:(id)arg1;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (id)initWithAccount:(id)arg1 paymentWebService:(id)arg2 context:(long long)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end
