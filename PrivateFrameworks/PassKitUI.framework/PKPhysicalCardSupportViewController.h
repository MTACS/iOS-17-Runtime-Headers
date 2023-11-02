
@interface PKPhysicalCardSupportViewController : UITableViewController {
    PKAccount * _account;
    PKAccountService * _accountService;
    PKAccountUser * _accountUser;
    PKBusinessChatController * _businessChatController;
    bool  _hasSelectedReason;
    UIBarButtonItem * _nextButton;
    PKPaymentPass * _paymentPass;
    PKPhysicalCard * _physicalCard;
    long long  _selectedReason;
    PKTableHeaderView * _tableHeaderView;
}

- (void).cxx_destruct;
- (void)_nextButtonTapped:(id)arg1;
- (void)_presentBusinessChatWithContext:(id)arg1;
- (void)_presentManualActivation;
- (id)initWithAccountService:(id)arg1 account:(id)arg2 accountUser:(id)arg3 paymentPass:(id)arg4 physicalCard:(id)arg5;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
