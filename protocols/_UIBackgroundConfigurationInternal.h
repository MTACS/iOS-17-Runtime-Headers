
@protocol _UIBackgroundConfigurationInternal <NSObject, NSCopying>

@required

- (unsigned long long)__maskedCorners;
- (void)__setMaskedCorners:(unsigned long long)arg1;
- (void)__setVisualEffectGroupName:(NSString *)arg1;
- (NSString *)__visualEffectGroupName;
- (bool)_backgroundFillIsEqual:(id <_UIBackgroundConfigurationInternal>)arg1 withTintColor:(UIColor *)arg2;
- (double)_cornerRadius;
- (bool)_hasBackgroundColor;
- (bool)_hasBackgroundFill;
- (bool)_hasStroke;
- (bool)_isEqualToInternalConfigurationQuick:(id <_UIBackgroundConfigurationInternal>)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setShadowType:(long long)arg1;
- (void)_setStrokeLocation:(long long)arg1;
- (long long)_shadowType;
- (long long)_strokeLocation;
- (<_UIBackgroundConfigurationInternal> *)_updatedConfigurationForState:(id <UIConfigurationState>)arg1;
- (UIColor *)backgroundColor;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })backgroundInsets;
- (double)cornerRadius;
- (UIView *)customView;
- (unsigned long long)edgesAddingLayoutMarginsToBackgroundInsets;
- (UIImage *)image;
- (long long)imageContentMode;
- (bool)isTintBackgroundColor;
- (UIColor *)resolvedBackgroundColorForTintColor:(UIColor *)arg1;
- (UIColor *)resolvedStrokeColorForTintColor:(UIColor *)arg1;
- (void)setBackgroundColor:(UIColor *)arg1;
- (void)setBackgroundInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCustomView:(UIView *)arg1;
- (void)setEdgesAddingLayoutMarginsToBackgroundInsets:(unsigned long long)arg1;
- (void)setImage:(UIImage *)arg1;
- (void)setImageContentMode:(long long)arg1;
- (void)setStrokeColor:(UIColor *)arg1;
- (void)setStrokeOutset:(double)arg1;
- (void)setStrokeWidth:(double)arg1;
- (void)setVisualEffect:(UIVisualEffect *)arg1;
- (UIColor *)strokeColor;
- (double)strokeOutset;
- (double)strokeWidth;
- (UIVisualEffect *)visualEffect;

@end
