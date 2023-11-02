
@interface PKMerchantHeaderCell : PKDashboardCollectionViewCell {
    PKSplashImageHeaderView * _headerView;
    double  _overlayAlpha;
    UIVisualEffect * _overlayEffect;
    UIVisualEffectView * _overlayEffectView;
    UIColor * _shadowColor;
    UIView * _shadowView;
}

@property (nonatomic, readonly) PKSplashImageHeaderView *headerView;
@property (nonatomic) double overlayAlpha;
@property (nonatomic, retain) UIVisualEffect *overlayEffect;
@property (nonatomic, retain) UIColor *shadowColor;

- (void).cxx_destruct;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)overlayAlpha;
- (id)overlayEffect;
- (void)setOverlayAlpha:(double)arg1;
- (void)setOverlayEffect:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
