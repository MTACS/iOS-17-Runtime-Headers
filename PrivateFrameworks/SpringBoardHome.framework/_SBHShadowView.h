
@interface _SBHShadowView : UIView <SBHShadowViewFrameProviding> {
    CALayer * _shadowLayer;
    MTShadowView * _shadowView;
    bool  _useMaterialBasedShadow;
}

@property (nonatomic) bool useMaterialBasedShadow;

+ (bool)supportsMaterialsBasedShadow;

- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateShadow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameWithContentWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setUseMaterialBasedShadow:(bool)arg1;
- (bool)useMaterialBasedShadow;

@end
