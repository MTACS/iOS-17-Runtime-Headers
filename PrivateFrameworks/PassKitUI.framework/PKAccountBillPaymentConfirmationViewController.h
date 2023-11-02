
@interface PKAccountBillPaymentConfirmationViewController : PKExplanationViewController <PKBillPaymentRingViewDataSource, PKBillPaymentRingViewDelegate> {
    PKAccount * _account;
    NSNumberFormatter * _amountFormatter;
    UIListContentView * _bodyContentView;
    PKAccountBillPaymentCheckmarkRingView * _checkmarkRingView;
    <PKAccountBillPaymentConfirmationViewControllerDelegate> * _delegate;
    bool  _hasPerformedCategoryAnimation;
    bool  _isScheduledPayment;
    NSDateFormatter * _monthDayFormatter;
    NSDateFormatter * _monthFormatter;
    PKPaymentPass * _paymentPass;
    PKPaymentService * _paymentService;
    NSArray * _payments;
    NSDecimalNumber * _pendingPaymentsTotal;
    PKCreditAccountSummary * _previousAccountSummary;
    NSDateFormatter * _productMonthDayFormatter;
    NSDate * _scheduledDate;
    PKBillPaymentSuggestedAmountList * _suggestionList;
    NSDateFormatter * _timeFormatter;
    NSDecimalNumber * _totalPaymentAmount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldDisplayInterestSummary;
- (id)_trailingInterestMonthMidpoint;
- (void)_updateBodyContentViewMessage;
- (id)billPaymentRingView:(id)arg1 bottomCurvedTextForSuggestedAmount:(id)arg2;
- (id)billPaymentRingView:(id)arg1 interestTextForAmount:(id)arg2;
- (void)billPaymentRingView:(id)arg1 selectedSuggestedAmount:(id)arg2 selectedSuggestedAmountIsTarget:(bool)arg3 userInitiatedChange:(bool)arg4;
- (id)billPaymentRingView:(id)arg1 topCurvedTextForSuggestedAmount:(id)arg2;
- (id)billPaymentRingViewZeroInterestText:(id)arg1;
- (id)disabledBottomCurvedTextForBillPaymentRingView:(id)arg1;
- (id)disabledTopCurvedTextForBillPaymentRingView:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithAccount:(id)arg1 previousAccountSummary:(id)arg2 paymentPass:(id)arg3 payments:(id)arg4 suggestionList:(id)arg5 delegate:(id)arg6;
- (void)loadView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
