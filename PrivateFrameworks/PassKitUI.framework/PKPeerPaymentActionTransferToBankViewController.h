
@interface PKPeerPaymentActionTransferToBankViewController : PKPeerPaymentActionViewController <PKEnterCurrencyAmountPassViewDelegate, PKPeerPaymentActionControllerDelegate, UITableViewDataSource, UITableViewDelegate, _PKVisibilityBackdropViewDelegate> {
    double  _backdropWeight;
    _PKVisibilityBackdropView * _blurringView;
    NSNumberFormatter * _currencyFormatter;
    PKPaymentPass * _defaultInstantFundsOutPaymentPass;
    NSDecimalNumber * _feePercentage;
    UILabel * _footerTextLabel;
    bool  _isSmallPhone;
    NSDecimalNumber * _maximumFee;
    NSDecimalNumber * _minimumFee;
    UIImageView * _navbarPassView;
    PKAnimatedNavigationBarTitleView * _passNavbarTitleView;
    NSNumberFormatter * _percentageFormatter;
    NSDecimalNumberHandler * _roundingHandler;
    NSArray * _supportedTransferActions;
    PKEnterCurrencyAmountPassTableHeaderFooterView * _tableHeaderView;
    UITableView * _tableView;
    bool  _usesAccessibilityLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_amountPassView;
- (void)_calculateBlur;
- (id)_calculateFee;
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (id)_defaultInstantFundsOutPaymentPass;
- (id)_detailTextForAction:(unsigned long long)arg1;
- (void)_dismissViewController:(id)arg1;
- (id)_indexPathForAction:(unsigned long long)arg1;
- (bool)_isCurrentAmountValid;
- (bool)_passViewInNavBar;
- (void)_showNavigationBarSpinner:(bool)arg1;
- (id)_spinnerBarButton;
- (id)_transferBarButton;
- (void)_transferBarButtonPressed:(id)arg1;
- (void)_updateBarButtonEnabledState;
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (void)_updateFooterText;
- (void)_updateTableHeaderHeight;
- (void)dealloc;
- (void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 webService:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)peerPaymentActionController:(id)arg1 hasChangedState:(unsigned long long)arg2;
- (id)presentationSceneIdentifierForPeerPaymentActionController:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCardBalance:(id)arg1;
- (void)setMaxBalance:(id)arg1;
- (void)setMaxLoadAmount:(id)arg1;
- (void)setMinBalance:(id)arg1;
- (void)setMinLoadAmount:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)updateAccountValues;
- (void)viewWillLayoutSubviews;
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;

@end
