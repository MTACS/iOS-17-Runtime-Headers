
@interface ABShadowView : UIView {
    CAGradientLayer * _bottomGradientLayer;
    CABackdropLayer * _bottomVariableBlurLayer;
    CAGradientLayer * _topGradientLayer;
    double  _topShadowRatio;
}

- (void).cxx_destruct;
- (struct CGImage { }*)_renderBottomVariableBlurMaskWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setupGradient;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
