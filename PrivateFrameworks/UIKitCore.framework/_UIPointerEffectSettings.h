
@interface _UIPointerEffectSettings : PTSettings {
    double  _dampedAnimationDampingRatio;
    double  _dampedAnimationResponse;
    double  _defaultPointerCornerRadius;
    double  _maxSlipPoints;
    double  _overrideSlipPoints;
    double  _parallaxAmount;
    double  _progressiveScaleUpAnimationResponse;
    double  _scaleUpAnimationDampingRatio;
    double  _scaleUpAnimationResponse;
    double  _scaleUpPoints;
    double  _slipFactorX;
    double  _slipFactorY;
}

@property (nonatomic) double dampedAnimationDampingRatio;
@property (nonatomic) double dampedAnimationResponse;
@property (nonatomic) double defaultPointerCornerRadius;
@property (nonatomic) double maxSlipPoints;
@property (nonatomic) double overrideSlipPoints;
@property (nonatomic) double parallaxAmount;
@property (nonatomic) double progressiveScaleUpAnimationResponse;
@property (nonatomic) double scaleUpAnimationDampingRatio;
@property (nonatomic) double scaleUpAnimationResponse;
@property (nonatomic) double scaleUpPoints;
@property (nonatomic) double slipFactorX;
@property (nonatomic) double slipFactorY;

+ (bool)pointerSlipMatchesContentSlip;
+ (id)settingsControllerModule;

- (double)dampedAnimationDampingRatio;
- (double)dampedAnimationResponse;
- (double)defaultPointerCornerRadius;
- (double)maxSlipPoints;
- (double)overrideSlipPoints;
- (double)parallaxAmount;
- (double)progressiveScaleUpAnimationResponse;
- (double)scaleUpAnimationDampingRatio;
- (double)scaleUpAnimationResponse;
- (double)scaleUpPoints;
- (void)setDampedAnimationDampingRatio:(double)arg1;
- (void)setDampedAnimationResponse:(double)arg1;
- (void)setDefaultPointerCornerRadius:(double)arg1;
- (void)setDefaultValues;
- (void)setMaxSlipPoints:(double)arg1;
- (void)setOverrideSlipPoints:(double)arg1;
- (void)setParallaxAmount:(double)arg1;
- (void)setProgressiveScaleUpAnimationResponse:(double)arg1;
- (void)setScaleUpAnimationDampingRatio:(double)arg1;
- (void)setScaleUpAnimationResponse:(double)arg1;
- (void)setScaleUpPoints:(double)arg1;
- (void)setSlipFactorX:(double)arg1;
- (void)setSlipFactorY:(double)arg1;
- (double)slipFactorX;
- (double)slipFactorY;

@end
