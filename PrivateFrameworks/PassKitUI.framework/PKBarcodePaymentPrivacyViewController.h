
@interface PKBarcodePaymentPrivacyViewController : PKExplanationViewController {
    unsigned long long  _displayContext;
    NSString * _issuerName;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_closeButtonPressed:(id)arg1;
- (void)_dismiss;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithIssuerName:(id)arg1 displayContext:(unsigned long long)arg2 paymentSetupContext:(long long)arg3;
- (void)viewDidLoad;

@end
