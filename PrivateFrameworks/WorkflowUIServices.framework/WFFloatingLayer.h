
@interface WFFloatingLayer : CALayer {
    bool  _appliesCornerRadiusDuringTouchDownOnly;
    bool  _colorizesShadow;
    WFGradient * _gradient;
    CAGradientLayer * _gradientLayer;
    double  _highlightedCornerRadius;
    bool  _pressed;
    double  _scalingFactor;
    UITraitCollection * _traitCollection;
    bool  _usePillCornerRadius;
}

@property (nonatomic) bool appliesCornerRadiusDuringTouchDownOnly;
@property (nonatomic) bool colorizesShadow;
@property (nonatomic, copy) WFGradient *gradient;
@property (nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double highlightedCornerRadius;
@property (getter=isPressed, nonatomic) bool pressed;
@property (nonatomic) double scalingFactor;
@property (nonatomic, retain) UITraitCollection *traitCollection;
@property (nonatomic) bool usePillCornerRadius;

- (void).cxx_destruct;
- (bool)appliesCornerRadiusDuringTouchDownOnly;
- (void)applyConfiguration:(id)arg1;
- (id)baseColor;
- (bool)colorizesShadow;
- (id)gradient;
- (id)gradientLayer;
- (double)highlightedCornerRadius;
- (id)init;
- (bool)isPressed;
- (void)layoutSublayers;
- (double)scalingFactor;
- (void)setAppliesCornerRadiusDuringTouchDownOnly:(bool)arg1;
- (void)setColorizesShadow:(bool)arg1;
- (void)setGradient:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setHighlightedCornerRadius:(double)arg1;
- (void)setPressed:(bool)arg1;
- (void)setPressed:(bool)arg1 animated:(bool)arg2;
- (void)setScalingFactor:(double)arg1;
- (void)setTraitCollection:(id)arg1;
- (void)setUsePillCornerRadius:(bool)arg1;
- (id)traitCollection;
- (void)updateBackgroundColor;
- (void)updateShadowColor;
- (bool)usePillCornerRadius;

@end
