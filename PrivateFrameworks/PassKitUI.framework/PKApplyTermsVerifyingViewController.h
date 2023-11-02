
@interface PKApplyTermsVerifyingViewController : PKExplanationViewController {
    PKApplyController * _applyController;
    PKApplyRequiredFieldsPage * _applyPage;
    unsigned long long  _featureIdentifier;
    CLInUseAssertion * _inUseAssertion;
    bool  _isProcessingTerms;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    NSSet * _termsIdentifiers;
}

- (void).cxx_destruct;
- (void)_processTerms;
- (void)_showActivationSpinner:(bool)arg1;
- (void)_terminateSetupFlow;
- (id)analyticsPageTag;
- (void)dealloc;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 termsIdentifiers:(id)arg4 applyPage:(id)arg5;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
