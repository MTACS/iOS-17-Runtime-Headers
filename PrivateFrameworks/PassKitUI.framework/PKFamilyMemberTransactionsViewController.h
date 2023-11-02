
@interface PKFamilyMemberTransactionsViewController : PKSectionTableViewController <CNAvatarViewDelegate, PKDashboardTransactionFetcherDelegate> {
    PKAccount * _account;
    bool  _allContentIsLoaded;
    PKContactResolver * _contactResolver;
    long long  _detailViewStyle;
    bool  _didBeginReporter;
    PKFamilyMemberCollection * _familyCollection;
    PKFamilyMember * _familyMember;
    NSDateFormatter * _formatterYear;
    unsigned long long  _mode;
    <PKPaymentDataProvider> * _paymentServiceDataProvider;
    PKPeerPaymentAccount * _peerPaymentAccount;
    PKPeerPaymentWebService * _peerPaymentWebService;
    bool  _requestingStatement;
    bool  _sentStatement;
    PKPaymentTransactionCellController * _transactionCellController;
    PKPaymentTransactionDetailsFactory * _transactionDetailsFactory;
    PKDashboardTransactionFetcher * _transactionFetcher;
    NSArray * _transactionGroups;
    PKTransactionSourceCollection * _transactionSourceCollection;
    NSArray * _transactions;
    NSString * _viewerFamilyMemberTypeAnalyticsKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contactKeysToFetch;
- (void)_didSelectRequestStatementAtIndexPath:(id)arg1;
- (void)_fetchDataWithCompletion:(id /* block */)arg1;
- (void)_reloadTransactionGroupsWithCompletion:(id /* block */)arg1;
- (void)_reloadTransactionsWithCompletion:(id /* block */)arg1;
- (id)_transactionDetailViewControllerForTransaction:(id)arg1;
- (bool)_updateWithTransactionGroups:(id)arg1;
- (bool)_updateWithTransactions:(id)arg1;
- (id)_viewControllerForTransactionGroup:(id)arg1;
- (id)initWithFamilyMember:(id)arg1 familyCollection:(id)arg2 transactionSource:(id)arg3 account:(id)arg4 peerPaymentAccount:(id)arg5 peerPaymentWebService:(id)arg6 detailViewStyle:(long long)arg7 paymentServiceDataProvider:(id)arg8 mode:(unsigned long long)arg9;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)transactionViewControllerForTransaction:(id)arg1;
- (void)transactionsChanged:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
