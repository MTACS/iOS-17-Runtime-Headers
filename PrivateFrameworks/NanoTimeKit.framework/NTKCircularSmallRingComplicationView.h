
@interface NTKCircularSmallRingComplicationView : NTKCircularComplicationView {
    bool  _didDrawOnce;
    double  _fillFraction;
    CLKUIColoringImageView * _fillFractionRing;
    UIColor * _ringOverrideColor;
}

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (void)setUsesMediumLayout:(bool)arg1;
- (void)updateRingWithOverrideColor:(id)arg1;
- (void)updateRingWithRingDescription:(id)arg1;

@end
