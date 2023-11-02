
@interface DSPasscodePopupViewController : UIViewController <BFFPasscodeInputViewDelegate> {
    NSLayoutConstraint * _contentHeightConstraint;
    <DSNavigationDelegate> * _delegate;
    bool  _numeric;
    unsigned long long  _numericLength;
    NSString * _passcodeNew;
    NSString * _passcodeOld;
    UIAlertController * _passcodeOptionAlertController;
    long long  _passcodeState;
    BFFPasscodeView * _passcodeView;
}

@property (nonatomic, retain) NSLayoutConstraint *contentHeightConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isNumeric, nonatomic) bool numeric;
@property (nonatomic) unsigned long long numericLength;
@property (nonatomic, retain) NSString *passcodeNew;
@property (nonatomic, retain) NSString *passcodeOld;
@property (nonatomic, retain) UIAlertController *passcodeOptionAlertController;
@property (nonatomic) long long passcodeState;
@property (nonatomic, retain) BFFPasscodeView *passcodeView;
@property (readonly) Class superclass;

+ (bool)isPasscodeSet;

- (void).cxx_destruct;
- (void)_animatePasscodeViewTransition;
- (void)_applyPasscode;
- (void)_commitPasscodeEntryTypeChange;
- (id)_createAndShowAnimatedNavBarSpinner;
- (void)_setupFirstEntry;
- (void)_showPasswordRequirementAlertWithText:(id)arg1;
- (void)_showWeakWarningAlert;
- (void)_transitionToPasscodePaneWithState:(long long)arg1 animationType:(unsigned long long)arg2;
- (void)acceptWeakPasscode:(bool)arg1;
- (void)configurePasscodeOptionsSheet;
- (void)configurePasscodeTypeUsingAnimations:(bool)arg1;
- (id)contentHeightConstraint;
- (id)delegate;
- (void)handleCurrentPasscodeEntry:(id)arg1;
- (void)handleNewPasscodeEntry:(id)arg1;
- (void)handlePasscodeConfirmationEntry:(id)arg1;
- (void)handlePasscodeDoesNotMeetConstraints:(id)arg1;
- (id)init;
- (bool)isNumeric;
- (void)keyboardDidShow:(id)arg1;
- (void)nextButtonTapped;
- (unsigned long long)numericLength;
- (bool)optionsSheetIsEmpty;
- (void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2;
- (void)passcodeInput:(id)arg1 tappedFooterButton:(id)arg2;
- (id)passcodeInputView;
- (id)passcodeNew;
- (id)passcodeOld;
- (id)passcodeOptionAlertController;
- (long long)passcodeState;
- (id)passcodeView;
- (void)pushNextPane;
- (void)reset;
- (void)setContentHeightConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNumeric:(bool)arg1;
- (void)setNumericLength:(unsigned long long)arg1;
- (void)setPasscodeNew:(id)arg1;
- (void)setPasscodeOld:(id)arg1;
- (void)setPasscodeOptionAlertController:(id)arg1;
- (void)setPasscodeState:(long long)arg1;
- (void)setPasscodeView:(id)arg1;
- (void)userEnteredPasscode:(id)arg1;
- (bool)usesSimplePasscodeEntry;
- (bool)validatePIN:(id)arg1;
- (void)viewDidLoad;

@end
