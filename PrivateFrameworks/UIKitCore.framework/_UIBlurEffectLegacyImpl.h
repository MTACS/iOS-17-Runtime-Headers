
@interface _UIBlurEffectLegacyImpl : _UIBlurEffectImpl {
    UIBlurEffect * _effect;
    bool  _invertAutomaticStyle;
    long long  _style;
    UIColor * _tintColor;
}

@property (nonatomic) UIBlurEffect *effect;

- (void).cxx_destruct;
- (bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (bool)canProvideVibrancyEffect;
- (id)effect;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(bool)arg3;
- (bool)invertAutomaticStyle;
- (bool)isEqual:(id)arg1;
- (void)setEffect:(id)arg1;
- (long long)style;
- (id)tintColor;

@end
