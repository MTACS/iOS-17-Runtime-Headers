
@interface UIPointerEffect : NSObject <NSCopying, UIHoverEffect> {
    UITargetedPreview * _preview;
}

@property (nonatomic, readonly) bool allowsSanitization;
@property (nonatomic, readonly) unsigned long long constrainedAxes;
@property (nonatomic, readonly) double dampedAnimationDampingRatio;
@property (nonatomic, readonly) double dampedAnimationResponse;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultPointerCornerRadius;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maxSlip;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSValue *overrideSlipPoints;
@property (nonatomic, readonly) double parallaxAmount;
@property (nonatomic, copy) UITargetedPreview *preview;
@property (nonatomic, readonly) double progressiveScaleUpAnimationResponse;
@property (nonatomic, readonly) double scaleUpAnimationDampingRatio;
@property (nonatomic, readonly) double scaleUpAnimationResponse;
@property (nonatomic, readonly) double scaleUpPoints;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } slipFactor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ tintColorMatrixProvider;
@property (nonatomic, readonly) bool useSoftShadow;

+ (id)effectWithPreview:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsSanitization;
- (unsigned long long)constrainedAxes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dampedAnimationDampingRatio;
- (double)dampedAnimationResponse;
- (double)defaultPointerCornerRadius;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)maxSlip;
- (unsigned long long)options;
- (id)overrideSlipPoints;
- (double)parallaxAmount;
- (id)preview;
- (double)progressiveScaleUpAnimationResponse;
- (double)scaleUpAnimationDampingRatio;
- (double)scaleUpAnimationResponse;
- (double)scaleUpPoints;
- (void)setPreview:(id)arg1;
- (id)settings;
- (struct CGPoint { double x1; double x2; })slipFactor;
- (id /* block */)tintColorMatrixProvider;
- (bool)useSoftShadow;

@end
