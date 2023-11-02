
@interface OBPasscodeViewController : OBWelcomeController <OBPasscodeInputViewDelegate> {
    NSLayoutConstraint * _contentViewBottomConstraint;
    NSLayoutConstraint * _contentViewTopConstraint;
    <OBPasscodeViewControllerDelegate> * _delegate;
    OBPasscodeInputView * _passcodeInputView;
    bool  _requiresCompletion;
}

@property (nonatomic, retain) NSLayoutConstraint *contentViewBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *contentViewTopConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <OBPasscodeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) OBPasscodeInputView *passcodeInputView;
@property (nonatomic) bool requiresCompletion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completionTapped:(id)arg1;
- (void)_updateCompletionButtonEnabledStateForPasscode:(id)arg1;
- (double)_verticalPaddingForInputView;
- (void)clearPasscodeEntry;
- (void)configureForPasscodeEntry:(unsigned long long)arg1 length:(long long)arg2;
- (id)contentViewBottomConstraint;
- (id)contentViewTopConstraint;
- (id)delegate;
- (void)loadView;
- (void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2;
- (void)passcodeInput:(id)arg1 willChangeContents:(id)arg2;
- (id)passcodeInputView;
- (bool)requiresCompletion;
- (void)setContentViewBottomConstraint:(id)arg1;
- (void)setContentViewTopConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPasscodeInputView:(id)arg1;
- (void)setRequiresCompletion:(bool)arg1;
- (void)shakePasscodeEntry;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
