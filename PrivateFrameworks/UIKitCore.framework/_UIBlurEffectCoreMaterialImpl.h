
@interface _UIBlurEffectCoreMaterialImpl : _UIBlurEffectImpl {
    NSBundle * _bundle;
    NSString * _darkMaterial;
    NSString * _lightMaterial;
    long long  _style;
}

- (void).cxx_destruct;
- (bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (bool)canProvideCoreMaterialVibrancyEffect;
- (bool)canProvideVibrancyEffect;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (id)initWithLightMaterial:(id)arg1 darkMaterial:(id)arg2 bundle:(id)arg3;
- (id)initWithStyle:(long long)arg1;
- (bool)invertAutomaticStyle;
- (bool)isEqual:(id)arg1;
- (long long)style;
- (id)tintColor;

@end
