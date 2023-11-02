
@interface PKInstallmentPlanDetailsViewController : PKSectionTableViewController {
    PKAccount * _account;
    PKAccountService * _accountService;
    PKAccountUserCollection * _accountUserCollection;
    PKFamilyMemberCollection * _familyMemberCollection;
    PKPaymentTransactionDetailHeaderView * _headerView;
    PKCreditInstallmentPlan * _installmentPlan;
    PKPaymentTransactionDetailAmountLineItemGenerator * _lineItemGenerator;
    NSArray * _lineItems;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

- (void).cxx_destruct;
- (id)_detailsCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_progressCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateHeaderHeight;
- (id)initWithAccount:(id)arg1 installmentPlan:(id)arg2 accountService:(id)arg3 accountUserCollection:(id)arg4 familyMemberCollection:(id)arg5 transactionSourceCollection:(id)arg6;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
