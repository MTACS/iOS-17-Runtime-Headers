
@interface PKMerchantTokenDetailViewController : PKSectionTableViewController <PKPeerPaymentServiceObserver, PKPeerPaymentThresholdTopUpControllerDelegate, PKViewControllerPreflightable> {
    PKPeerPaymentRecurringPayment * _autoReload;
    PKPeerPaymentThresholdTopUpController * _autoReloadController;
    <PKMerchantTokenDetailViewControllerDelegate> * _delegate;
    PKMerchantTokenLoadingView * _loadingView;
    PKMerchantToken * _merchantToken;
    PKPeerPaymentAccount * _peerPaymentAccount;
    NSArray * _recurringPayments;
    bool  _showMerchantIcon;
    PKPaymentTransactionCellController * _transactionPresenter;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKMerchantTokenDetailViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contactKeysToFetch;
- (void)_deleteMerchantToken;
- (id)_deletePaymentMethodCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_didSelectAutoReloadManagement;
- (void)_didSelectDeletePaymentMethod;
- (void)_didSelectRecurringPaymentAtIndexPath:(id)arg1;
- (void)_disableNavigation;
- (void)_enableNavigation;
- (id)_headerCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_hideLoadingView;
- (id)_manageAutoReloadCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_managePaymentMethodCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_manageRecurringPaymentCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_setUpLoadingView;
- (void)_setUpTableView;
- (void)_setUpViews;
- (void)_showLoadingView;
- (void)_updateRecurringPaymentsWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (id)initWithMerchantToken:(id)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)presentationSceneIdentifierForTopUpController:(id)arg1;
- (void)recurringPaymentsChanged;
- (void)setDelegate:(id)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)thresholdTopUpController:(id)arg1 requestsDismissViewController:(id)arg2;
- (void)thresholdTopUpController:(id)arg1 requestsPopViewController:(id)arg2;
- (void)thresholdTopUpController:(id)arg1 requestsPresentViewController:(id)arg2;
- (void)thresholdTopUpController:(id)arg1 requestsPushViewController:(id)arg2;
- (void)thresholdTopUpControllerCompletedSetup:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillLayoutSubviews;

@end
