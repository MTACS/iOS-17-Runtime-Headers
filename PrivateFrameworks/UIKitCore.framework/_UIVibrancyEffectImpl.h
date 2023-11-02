
@interface _UIVibrancyEffectImpl : NSObject

+ (id)implementationFromCoder:(id)arg1;

- (bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (id)implementationReplacingTintColor:(id)arg1;
- (bool)invertAutomaticStyle;
- (bool)isEqual:(id)arg1;
- (void)setEffect:(id)arg1;
- (long long)style;
- (long long)vibrancyStyle;

@end
