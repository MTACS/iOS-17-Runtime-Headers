
@interface BFFPasscodeInputView : UIView {
    <BFFPasscodeInputViewDelegate> * _delegate;
    UIButton * _footerButton;
    UIView * _footerView;
    UILabel * _instructions;
    UIButton * _instructionsLinkButton;
}

@property (nonatomic) <BFFPasscodeInputViewDelegate> *delegate;
@property (nonatomic, retain) UIButton *footerButton;
@property (nonatomic, retain) UIView *footerView;
@property (nonatomic, retain) UILabel *instructions;
@property (nonatomic, retain) UIButton *instructionsLinkButton;

- (void).cxx_destruct;
- (void)_instructionsLinkButtonPressed;
- (void)_layoutForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (void)disable;
- (id)footerButton;
- (void)footerButtonPressed;
- (id)footerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)instructions;
- (id)instructionsLinkButton;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isFirstResponder;
- (void)layoutSubviews;
- (id)passcode;
- (id)passcodeDisplayView;
- (id)passcodeField;
- (bool)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFooterButton:(id)arg1;
- (void)setFooterButtonText:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setInstructionsLinkButton:(id)arg1;
- (void)setInstructionsLinkText:(id)arg1;
- (void)setPasscode:(id)arg1;
- (void)shakePasscode;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
