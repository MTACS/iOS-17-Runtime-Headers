
@interface PKApplyOfferViewController : PKApplyExplanationViewController <PKApplyFlowControllerProtocol> {
    PKAccountFlowController * _accountController;
    bool  _hasSufficientOTBForInstallment;
    UIImage * _heroImage;
    CLInUseAssertion * _inUseAssertion;
    PKPaymentInstallmentConfiguration * _installmentConfiguration;
    unsigned long long  _layout;
    NSString * _offerTermsIdentifier;
    PKApplyOfferCreditCardView * _offerView;
    bool  _useCompactLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *heroImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_openTermsAndConditions;
- (void)_setupForBroadwayApplication:(id)arg1;
- (void)_terminateApplyFlowWithoutDeclining;
- (void)_termsAccepted:(bool)arg1;
- (id)analyticsAdditionalValues;
- (id)analyticsPageTag;
- (void)dealloc;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)heroImage;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)setHeroImage:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
