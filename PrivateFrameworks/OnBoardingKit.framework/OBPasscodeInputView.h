
@interface OBPasscodeInputView : UIView {
    <OBPasscodeInputViewDelegate> * _delegate;
}

@property (nonatomic) <OBPasscodeInputViewDelegate> *delegate;

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isFirstResponder;
- (id)passcode;
- (id)passcodeField;
- (bool)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setPasscode:(id)arg1;
- (void)shake;

@end
