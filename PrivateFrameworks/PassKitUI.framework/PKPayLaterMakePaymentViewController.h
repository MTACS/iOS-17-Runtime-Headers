
@interface PKPayLaterMakePaymentViewController : PKPayLaterViewController <PKPayLaterMakePaymentSectionControllerDelegate> {
    NSDateFormatter * _dateFormatter;
    PKPayLaterFinancingPlan * _financingPlan;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse * _intentDetails;
    PKPayLaterPaymentIntentController * _paymentIntentController;
    PKPayLaterMakePaymentSectionController * _sectionController;
    NSDateFormatter * _timeFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_createDockView;
- (void)_didSelectCustomAmount;
- (void)_didSelectPayNextPaymentAmount;
- (id)additionalAnalyticsDictionary;
- (id)initWithFinancingPlan:(id)arg1 paymentIntentController:(id)arg2;
- (id)pageTag;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)sectionController:(id)arg1 didUpdateCurrentSelectedAmount:(id)arg2;
- (void)viewDidLoad;

@end
