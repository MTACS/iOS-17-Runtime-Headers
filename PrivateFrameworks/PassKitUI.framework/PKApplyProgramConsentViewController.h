
@interface PKApplyProgramConsentViewController : PKApplyExplanationViewController {
    CLInUseAssertion * _inUseAssertion;
    NSString * _pathIdentifier;
    NSString * _pathTermsIdentifier;
}

- (void).cxx_destruct;
- (void)_termsAccepted:(bool)arg1;
- (void)dealloc;
- (void)explanationViewDidSelectBodyButton:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
