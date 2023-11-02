
@interface LAPSPasscodeViewController : UIViewController <LAPSPasscodeOptionsViewControllerDelegate, LAPasscodeFieldDelegate> {
    LAPSPasscodeViewControllerConfiguration * _config;
    <LAPSPasscodeViewControllerDelegate> * _delegate;
    UILabel * _errorCapsule;
    UIView * _errorCapsuleContainer;
    UILabel * _footer;
    UILabel * _header;
    bool  _isNextButtonEnabled;
    bool  _isPasscodeRecoveryEnabled;
    UIButton * _optionsButton;
    LAPasscodeField * _passcodeFieldVC;
    LAPSPasscodeType * _passcodeType;
    UIScrollView * _scrollView;
    UIStackView * _stack;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LAPSPasscodeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_cancel:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (bool)_isAccessibilityTextEnabled;
- (void)_next:(id)arg1;
- (void)_setNextButtonEnabled:(bool)arg1;
- (void)_setPasscodeType:(id)arg1;
- (void)_setup;
- (void)_setupNavigationItem;
- (bool)_shouldShowNextButton;
- (void)_showPasscodeOptions:(id)arg1;
- (long long)_styleWithPasscodeType:(id)arg1;
- (void)_submitPasscode:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)clear;
- (id)delegate;
- (void)focus;
- (void)hideSpinner;
- (id)initWithConfiguration:(id)arg1;
- (id)navigationItem;
- (void)passcodeField:(id)arg1 didChangePasscodeLength:(unsigned long long)arg2;
- (void)passcodeField:(id)arg1 didSubmitPasscode:(id)arg2;
- (void)passcodeOptionsViewController:(id)arg1 didSelectPasscodeType:(id)arg2;
- (void)passcodeOptionsViewController:(id)arg1 didSetPasscodeRecoveryEnabled:(bool)arg2;
- (void)passcodeOptionsViewControllerDidDisappear:(id)arg1;
- (bool)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)shakeWithCompletion:(id /* block */)arg1;
- (void)showSpinner;
- (void)unfocus;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;

@end
