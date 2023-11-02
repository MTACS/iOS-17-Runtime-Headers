
@interface PKPeerPaymentTermsAndConditionsRemoteAlertViewController : SBUIRemoteAlertServiceViewController {
    PKPeerPaymentTermsController * _termsController;
}

+ (bool)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)handleButtonActions:(id)arg1;
- (id)init;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillDisappear:(bool)arg1;

@end
