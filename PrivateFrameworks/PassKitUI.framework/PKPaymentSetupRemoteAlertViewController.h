
@interface PKPaymentSetupRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentSetupDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isSecureForRemoteViewService;

- (void)_dismiss;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)handleButtonActions:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillDisappear:(bool)arg1;

@end
