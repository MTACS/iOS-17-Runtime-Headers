
@interface PKPaymentSetupDockView : UIView {
    double  _additionalLinkBottomPadding;
    UIView * _additionalLinkView;
    NSString * _buttonExplanationText;
    UITextView * _buttonExplanationTextView;
    long long  _context;
    PKPaymentSetupFooterView * _footerView;
    bool  _isBuddyiPad;
    ASCLockupView * _lockUpView;
    UIButton<PKLegacyButtonInterface> * _primaryButton;
    UIColor * _primaryButtonTintColor;
    OBPrivacyLinkController * _privacyLink;
    bool  _requiresAdditionalPrimaryButtonPadding;
    bool  _useAdjacentLayout;
}

@property (nonatomic) double additionalLinkBottomPadding;
@property (nonatomic, retain) UIView *additionalLinkView;
@property (nonatomic, retain) NSString *buttonExplanationText;
@property (nonatomic, readonly) UITextView *buttonExplanationTextView;
@property (nonatomic, readonly) long long context;
@property (nonatomic, retain) PKPaymentSetupFooterView *footerView;
@property (nonatomic, retain) ASCLockupView *lockUpView;
@property (nonatomic, retain) UIButton<PKLegacyButtonInterface> *primaryButton;
@property (nonatomic, retain) UIColor *primaryButtonTintColor;
@property (nonatomic, retain) OBPrivacyLinkController *privacyLink;
@property (nonatomic) bool requiresAdditionalPrimaryButtonPadding;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_sizeForButton:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;
- (double)additionalLinkBottomPadding;
- (id)additionalLinkView;
- (id)buttonExplanationText;
- (id)buttonExplanationTextView;
- (long long)context;
- (id)footerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(long long)arg2;
- (void)layoutSubviews;
- (id)lockUpView;
- (void)pk_applyAppearance:(id)arg1;
- (id)primaryButton;
- (id)primaryButtonTintColor;
- (id)privacyLink;
- (bool)requiresAdditionalPrimaryButtonPadding;
- (void)setAdditionalLinkBottomPadding:(double)arg1;
- (void)setAdditionalLinkView:(id)arg1;
- (void)setButtonExplanationText:(id)arg1;
- (void)setButtonsEnabled:(bool)arg1;
- (void)setFooterView:(id)arg1;
- (void)setLockUpView:(id)arg1;
- (void)setPrimaryButton:(id)arg1;
- (void)setPrimaryButtonTintColor:(id)arg1;
- (void)setPrivacyLink:(id)arg1;
- (void)setRequiresAdditionalPrimaryButtonPadding:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
