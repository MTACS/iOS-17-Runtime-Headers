
@interface MKHairlineView : UIView {
    UIView * _contentView;
    UIColor * _fillColor;
    <MKHairlineViewStyleProvider> * _styleProvider;
    UIVisualEffectView * _vibrancyEffectView;
}

@property (nonatomic, retain) UIColor *fillColor;

- (void).cxx_destruct;
- (id)_bestStyleProviderForTraitCollection:(id)arg1;
- (void)_createVibrancyEffectViewIfNeeded;
- (void)_fetchVibrancyGroupNameIfNeeded;
- (void)_invalidateStyleProvider;
- (void)_updateAppearanceForVibrancyChange;
- (void)_updateViewPositioning;
- (void)didMoveToWindow;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setFillColor:(id)arg1;

@end
