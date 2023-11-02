
@interface _UIBlurEffectImpl : NSObject

+ (id)implementationFromCoder:(id)arg1;

- (bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (bool)canProvideCoreMaterialVibrancyEffect;
- (bool)canProvideVibrancyEffect;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (bool)invertAutomaticStyle;
- (bool)isEqual:(id)arg1;
- (bool)requiresCopying;
- (void)setEffect:(id)arg1;
- (long long)style;
- (id)tintColor;

@end
