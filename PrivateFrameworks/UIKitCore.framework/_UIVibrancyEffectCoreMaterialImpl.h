
@interface _UIVibrancyEffectCoreMaterialImpl : _UIVibrancyEffectImpl {
    long long  _blurStyle;
    NSString * _darkMaterial;
    NSString * _lightMaterial;
    long long  _vibrancyStyle;
}

- (void).cxx_destruct;
- (bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithLightMaterial:(id)arg1 darkMaterial:(id)arg2 vibrancyStyle:(long long)arg3;
- (id)initWithStyle:(long long)arg1 vibrancyStyle:(long long)arg2;
- (bool)invertAutomaticStyle;
- (bool)isEqual:(id)arg1;
- (long long)style;
- (long long)vibrancyStyle;

@end
