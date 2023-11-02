
@interface _UIVibrancyEffectLegacyImpl : _UIVibrancyEffectImpl {
    UIVibrancyEffect * _effect;
    bool  _ignoreSimpleVibrancy;
    bool  _invertAutomaticStyle;
    long long  _style;
}

@property (nonatomic) UIVibrancyEffect *effect;

- (bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (id)effect;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 invertAutomaticStyle:(bool)arg2;
- (id)initWithStyle:(long long)arg1 invertAutomaticStyle:(bool)arg2 ignoreSimpleVibrancy:(bool)arg3;
- (bool)invertAutomaticStyle;
- (bool)isEqual:(id)arg1;
- (void)setEffect:(id)arg1;
- (long long)style;

@end
