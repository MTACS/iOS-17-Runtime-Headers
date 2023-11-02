
@interface PKPassTransitProductsViewController : PKSectionTableViewController <PKAccessibleLayoutObserverDelegate, PKPaymentDataProviderDelegate, PKPerformActionViewControllerDelegate> {
    long long  _accessibleLayout;
    PKTransitBalanceModel * _balanceModel;
    bool  _hasBalance;
    bool  _hasCommutePlans;
    PKPaymentPass * _pass;
    <PKPaymentDataProvider> * _paymentDataProvider;
    PKRemoteDataAccessor * _remoteDataAccessor;
    PKAdjustableSingleCellView * _sampleSingleCellView;
    unsigned long long  _transitType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PKPaymentPass *pass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_actionHandlerForIndexPath:(id)arg1;
- (id)_allocView;
- (void)_configureCell:(id)arg1 inTableView:(id)arg2 forIndexPath:(id)arg3;
- (void)_configureView:(id)arg1 indexPath:(id)arg2 animated:(bool)arg3;
- (void)_handlePassUpdate:(id)arg1;
- (void)_reloadBalance;
- (void)_reloadContent;
- (id)_renewActionForCommutePlanIdentifier:(id)arg1;
- (void)_setupBalances;
- (void)_setupPlans;
- (id)_topUpActionForIndexPath:(id)arg1 balanceIdentifiers:(id)arg2;
- (void)accessibleLayoutForView:(id)arg1 changedFrom:(long long)arg2 to:(long long)arg3;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 transitType:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pass;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceivePlanUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setPass:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
