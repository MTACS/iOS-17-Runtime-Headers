
@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField {
    UIView * _springView;
    UIView * _springViewParent;
}

@property (nonatomic, readonly) UITextInputTraits *textInputTraits;

- (void).cxx_destruct;
- (void)_autofillForBiometricAuthenticationWithCompletion:(id /* block */)arg1;
- (void)_resetForFailedPasscode:(bool)arg1;
- (struct CGSize { double x1; double x2; })_viewSize;
- (id)initWithDefaultSizeAndLightStyle:(bool)arg1;
- (void)layoutSubviews;
- (void)notePasscodeFieldTextDidChange;
- (id)textInputTraits;

@end
