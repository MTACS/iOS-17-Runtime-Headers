
@interface LAPasscodeField : UIViewController <UITextFieldDelegate> {
    bool  _canShowInLockScreen;
    <LAPasscodeFieldDelegate> * _delegate;
    UIImpactFeedbackGenerator * _hapticGenerator;
    bool  _ignoreInputs;
    UIStackView * _mainContainer;
    LAUITextField * _passcodeField;
    UIStackView * _passcodeFieldBackground;
    UIView * _passcodeFieldContainer;
    NSString * _placeholderText;
    long long  _style;
}

@property (nonatomic) bool canShowInLockScreen;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LAPasscodeFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAlphanumericPasscode;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreInputs;
@property (nonatomic) LAUITextField *passcodeField;
@property (nonatomic, readonly) unsigned long long passcodeLength;
@property (nonatomic, retain) NSString *placeholderText;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alphanumericFieldPlaceholder;
- (long long)_alphanumericFieldTextAlignment;
- (bool)_canShowWhileLocked;
- (void)_notifyPasscodeFieldLengthChange;
- (void)_selectPasscodeField:(id)arg1;
- (void)_setup;
- (void)_updateDotPattern;
- (bool)_useDotPattern;
- (void)_verifyTextField:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canShowInLockScreen;
- (void)clear;
- (id)delegate;
- (bool)hasAlphanumericPasscode;
- (bool)ignoreInputs;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (id)passcodeField;
- (unsigned long long)passcodeLength;
- (id)placeholderText;
- (bool)resignFirstResponder;
- (void)setAcceptInputs:(bool)arg1;
- (void)setCanShowInLockScreen:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIgnoreInputs:(bool)arg1;
- (void)setPasscodeField:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)shakeWithCompletion:(id /* block */)arg1;
- (long long)style;
- (void)submit;
- (id)textField:(id)arg1 editMenuForCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 suggestedActions:(id)arg3;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
