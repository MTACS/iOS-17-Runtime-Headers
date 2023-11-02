
@interface PKPayLaterEnterAmountPaymentViewController : PKPayLaterEnterAmountViewController {
    PKPayLaterFinancingPlan * _financingPlan;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse * _intentDetails;
    PKPayLaterPaymentIntentController * _paymentIntentController;
}

- (void).cxx_destruct;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)initWithPayLaterAccount:(id)arg1 financingPlan:(id)arg2 intentDetails:(id)arg3 paymentIntentController:(id)arg4;
- (id)keypadSuggestions;
- (void)nextButtonTapped;

@end
