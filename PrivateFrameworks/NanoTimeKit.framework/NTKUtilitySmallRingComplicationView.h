
@interface NTKUtilitySmallRingComplicationView : NTKUtilityCircularComplicationView {
    bool  _didDrawOnce;
    float  _fillFraction;
    CLKUIColoringImageView * _fillFractionRing;
}

@property (nonatomic) float fillFraction;
@property (nonatomic, retain) CLKUIColoringImageView *fillFractionRing;

- (void).cxx_destruct;
- (void)_applyForegroundAlpha;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)arg1;
- (float)fillFraction;
- (id)fillFractionRing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)ringColor;
- (void)setFillFraction:(float)arg1;
- (void)setFillFractionRing:(id)arg1;
- (void)updateRingWithRingDescription:(id)arg1;
- (void)updateRingWithRingDescription:(id)arg1 backgroundRingAlpha:(double)arg2;

@end
