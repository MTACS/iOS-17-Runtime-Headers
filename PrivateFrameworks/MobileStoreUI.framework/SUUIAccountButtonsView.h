
@interface SUUIAccountButtonsView : UIView {
    UILabel * _accountCreditsLabel;
    SUUIRoundedRectButton * _appleIDButton;
    SUUIClientContext * _clientContext;
    SUUILinkButton * _ecommerceButton;
    bool  _ecommerceVisibilityHidden;
    SUUIRoundedRectButton * _giftingButton;
    bool  _giftingVisibilityHidden;
    UIButton * _redeemButton;
    UIButton * _termsAndConditionsButton;
    SUUIRoundedRectButton * _usernameButton;
}

@property (nonatomic, readonly) UIControl *ECommerceButton;
@property (nonatomic, copy) NSString *ECommerceLinkTitle;
@property (nonatomic, copy) NSString *accountCredits;
@property (nonatomic, readonly) UIButton *appleIDButton;
@property (nonatomic, readonly) UIButton *giftingButton;
@property (getter=isGiftingHidden, nonatomic) bool giftingHidden;
@property (nonatomic, readonly) UIButton *redeemButton;
@property (nonatomic, readonly) UIButton *termsAndConditionsButton;
@property (getter=isTermsAndConditionsHidden, nonatomic) bool termsAndConditionsHidden;

- (void).cxx_destruct;
- (id)ECommerceButton;
- (id)ECommerceLinkTitle;
- (void)_layoutOneRow;
- (void)_layoutTwoRows;
- (id)_newLinkButtonWithTitle:(id)arg1;
- (void)_reloadFonts;
- (id)accountCredits;
- (id)appleIDButton;
- (void)dealloc;
- (id)giftingButton;
- (id)initWithClientContext:(id)arg1;
- (bool)isEcommerceHidden;
- (bool)isGiftingHidden;
- (bool)isRedeemHidden;
- (bool)isTermsAndConditionsHidden;
- (void)layoutSubviews;
- (id)redeemButton;
- (void)setAccountCredits:(id)arg1;
- (void)setECommerceLinkTitle:(id)arg1;
- (void)setGiftingHidden:(bool)arg1;
- (void)setTermsAndConditionsHidden:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)termsAndConditionsButton;
- (void)tintColorDidChange;

@end
