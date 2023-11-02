
@interface LAPSFetchOldPasscodeViewController : UIViewController <LAPSPasscodeViewControllerDelegate> {
    UIViewController * _currentChildVC;
    <LAPSFetchOldPasscodeViewControllerDelegate> * _delegate;
    id /* block */  _handler;
    LAPSFetchOldPasscodeViewControllerInput * _input;
    LAPSPasscodeViewController * _passcodeVC;
    LAPSPasscodeBackoffTimerController * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LAPSFetchOldPasscodeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addChildVC:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_deactivate;
- (void)_invokeHandlerWithError:(id)arg1;
- (void)_invokeHandlerWithOutput:(id)arg1;
- (void)_invokeHandlerWithOutput:(id)arg1 error:(id)arg2;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)arg1;
- (bool)becomeFirstResponder;
- (id)delegate;
- (void)finishWithError:(id)arg1;
- (void)finishWithPasscode:(id)arg1;
- (id)initWithInput:(id)arg1 completion:(id /* block */)arg2;
- (id)navigationItem;
- (void)passcodeViewController:(id)arg1 didCancelWithError:(id)arg2;
- (void)passcodeViewController:(id)arg1 verifyPasscode:(id)arg2;
- (bool)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)showPasscodeValidationError:(id)arg1 completion:(id /* block */)arg2;
- (void)startBackoffWithTimeout:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
