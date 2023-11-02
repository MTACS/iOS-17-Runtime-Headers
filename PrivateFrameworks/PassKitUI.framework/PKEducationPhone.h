
@interface PKEducationPhone : UIView {
    UIImageView * _biometricsImageView;
    UIImageView * _cardImageView;
    bool  _hasPearl;
    UIView * _homeButtonOutlineView;
    UIView * _homeButtonView;
    PKPaymentSetupInitialCardEducationIconsView * _iconsView;
    bool  _isAnimating;
    PKPhoneHeroView * _phoneBackgroundView;
    UIImageView * _powerArrowImageView;
    UIImageView * _powerIndicatorView;
    struct CGSize { 
        double width; 
        double height; 
    }  _screenSize;
    unsigned long long  _screenType;
    UIImageView * _walletImageView;
}

- (void).cxx_destruct;
- (double)_deviceIconsPadding;
- (void)_setHomeButtonOutlineColor;
- (void)_startPowerIndicatorAnimation;
- (double)_topPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 displayOptions:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)setPassImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAnimation;
- (void)traitCollectionDidChange:(id)arg1;

@end
