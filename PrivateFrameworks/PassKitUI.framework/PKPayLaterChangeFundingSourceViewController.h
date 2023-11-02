
@interface PKPayLaterChangeFundingSourceViewController : PKPayLaterViewController <PKPayLaterChangeFundingSourceSectionControllerDelegate> {
    PKPayLaterFinancingPlan * _financingPlan;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse * _intentDetails;
    PKPaymentPass * _payLaterPass;
    PKPayLaterPaymentIntentController * _paymentIntentController;
    PKPayLaterChangeFundingSourceSectionController * _sectionController;
    PKPayLaterPaymentSource * _selectedPaymentSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canChangeFundingSource;
- (void)_presentChangeFundingSourceFlowWithPrimaryPaymentSource:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentUnableToChangeFundingSourceAlert;
- (void)_turnOffAutoPaymentWithCompletion:(id /* block */)arg1;
- (void)_updateSectionControllerAnimated:(bool)arg1;
- (id)additionalAnalyticsDictionary;
- (void)didSelectFundingSource:(id)arg1;
- (void)didUpdateAutoPayment:(bool)arg1 completion:(id /* block */)arg2;
- (void)didUpdateFinancingPlan:(id)arg1;
- (id)initWithFinancingPlan:(id)arg1 payLaterPass:(id)arg2 paymentIntentController:(id)arg3;
- (id)pageTag;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)viewDidLoad;

@end
