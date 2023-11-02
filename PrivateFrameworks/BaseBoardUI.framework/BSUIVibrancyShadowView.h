
@interface BSUIVibrancyShadowView : BSUIVibrancyView {
    BSUIVibrancyShadowValues * _values;
    CAFilter * _vibrantColorFilter;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } shadowEndPoint;
@property (nonatomic) struct CGPoint { double x1; double x2; } shadowStartPoint;

+ (struct CGPoint { double x1; double x2; })defaultShadowEndPoint;
+ (struct CGPoint { double x1; double x2; })defaultShadowStartPoint;
+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_defaultGradientColors;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShadowEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShadowStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })shadowEndPoint;
- (struct CGPoint { double x1; double x2; })shadowStartPoint;
- (void)updateFilters;

@end
