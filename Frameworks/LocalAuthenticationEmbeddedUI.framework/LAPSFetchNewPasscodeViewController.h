
@interface LAPSFetchNewPasscodeViewController : UIViewController <LAPSPasscodeViewControllerDelegate> {
    LAContainerViewController * _containerVC;
    <LAPSFetchNewPasscodeViewControllerDelegate> * _delegate;
    id /* block */  _handler;
    LAPSFetchNewPasscodeViewControllerInput * _input;
    bool  _isPasscodeRecoveryEnabled;
    LAPSPasscode * _passcode;
    LAPSPasscodeType * _passcodeType;
    LAPSPasscodeViewController * _passcodeVC;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LAPSFetchNewPasscodeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_currentChildVC;
- (void)_deactivate;
- (void)_invokeHandlerWithError:(id)arg1;
- (void)_invokeHandlerWithOutput:(id)arg1;
- (void)_invokeHandlerWithOutput:(id)arg1 error:(id)arg2;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)arg1;
- (void)_presentNewPasscodeVCWithTransitionStyle:(long long)arg1;
- (void)_presentVerifyPasscodeVCWithTransitionStyle:(long long)arg1;
- (void)_presentViewController:(id)arg1 transitionStyle:(long long)arg2;
- (bool)becomeFirstResponder;
- (void)clear;
- (void)continueWithPasscode:(id)arg1;
- (id)delegate;
- (void)finishWithError:(id)arg1;
- (void)finishWithPasscode:(id)arg1;
- (id)initWithInput:(id)arg1 completion:(id /* block */)arg2;
- (id)navigationItem;
- (void)passcodeViewController:(id)arg1 didCancelWithError:(id)arg2;
- (void)passcodeViewController:(id)arg1 didSelectPasscodeType:(id)arg2;
- (void)passcodeViewController:(id)arg1 didSetPasscodeRecoveryEnabled:(bool)arg2;
- (void)passcodeViewController:(id)arg1 verifyPasscode:(id)arg2;
- (bool)resignFirstResponder;
- (void)restart;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
