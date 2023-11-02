
@interface PKAccountAutomaticPaymentsSetupCompleteViewController : PKExplanationViewController {
    PKAccountAutomaticPaymentsController * _controller;
    unsigned long long  _featureIdentifier;
}

- (void).cxx_destruct;
- (id)_paymentDateString;
- (long long)_paymentDay;
- (id)_paymentDayNameString;
- (id)_paymentDayString;
- (id)bodyString;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
