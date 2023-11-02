
@interface PKPeerPaymentIdentityVerificationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentSetupViewControllerDelegate> {
    PKPeerPaymentIdentityVerificationController * _controller;
    PKNavigationController * _navController;
    PKPeerPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (id)_alertViewController;
- (void)_dismiss;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)handleButtonActions:(id)arg1;
- (id)pk_navigationController;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillDisappear:(bool)arg1;

@end
