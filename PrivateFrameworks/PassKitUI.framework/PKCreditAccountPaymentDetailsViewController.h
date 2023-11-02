
@interface PKCreditAccountPaymentDetailsViewController : PKSectionTableViewController {
    PKAccount * _account;
    bool  _cancellingPayment;
    NSNumberFormatter * _currencyFormatter;
    <PKCreditAccountPaymentDetailsViewControllerDelegate> * _delegate;
    unsigned long long  _featureIdentifier;
    PKFooterHyperlinkView * _hyperlinkFooterView;
    bool  _isFailedRecurringPayment;
    NSDateFormatter * _localCancellationDateFormatter;
    NSDateFormatter * _localTimeFormatter;
    NSNumberFormatter * _localizedDayNumberFormatter;
    PKAccountPayment * _payment;
    bool  _paymentAmountPending;
    NSDate * _paymentDueDate;
    PKPaymentWebService * _paymentWebService;
    NSDateFormatter * _productDateFormatter;
    NSDateFormatter * _productDayFormatter;
    NSDateFormatter * _productPaymentDateFormatter;
    NSDateFormatter * _productPaymentMonthFormatter;
    NSDictionary * _recurringDetailsRowMap;
    bool  _showStatusSection;
    bool  _showUpcomingPaymentSection;
    PKAccountTermsAndConditionsController * _termsController;
    unsigned long long  _viewStyle;
}

@property (nonatomic) <PKCreditAccountPaymentDetailsViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_applyDetailViewStylingToCell:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_cancelPayment:(unsigned long long)arg1;
- (id)_cancelPaymentCellForTableView:(id)arg1;
- (void)_cancelPaymentSelected:(unsigned long long)arg1;
- (id)_cancellationDateForPayment;
- (void)_computeRecurringDetailsRowMap;
- (void)_configureDeletePaymentCell:(id)arg1;
- (void)_configureDismissCell:(id)arg1;
- (void)_configureLinkCell:(id)arg1;
- (id)_hyperlinkFooterView;
- (id)_modifyPaymentCellForTableView:(id)arg1;
- (void)_modifyPaymentSelected;
- (long long)_numberOfRecurringPaymentDetailsRows;
- (id)_paymentAmountToDisplay;
- (long long)_recurringPaymentDetailsRowTypeForRowAtIndex:(long long)arg1;
- (void)_reportEventForPassIfNecessary:(id)arg1;
- (id)_reuseIdentifierForSection:(unsigned long long)arg1;
- (bool)_showRecurringDay;
- (bool)_showRecurringDetailsAmount;
- (id)_stringForPaymentFrequency;
- (id)_stringForPaymentPreset;
- (id)_tableView:(id)arg1 paymentDetailsCellForPaymentDetailsRowAtIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 recurringPaymentDetailsCellForPaymentDetailsRowAtIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 recurringPaymentStatusCellForRowAtIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 recurringPaymentUpcomingPaymentCellForPaymentDetailsRowAtIndexPath:(id)arg2;
- (id)delegate;
- (id)initWithAccount:(id)arg1 payment:(id)arg2 paymentWebService:(id)arg3 detailViewStyle:(long long)arg4;
- (id)initWithAccount:(id)arg1 payment:(id)arg2 paymentWebService:(id)arg3 overrideViewStyle:(unsigned long long)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
