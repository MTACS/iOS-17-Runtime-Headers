
@interface _UILegacyEffectConverter : NSObject

+ (id)sharedConverter;

- (void)applyBackdropSettings:(id)arg1 toEffectDescriptor:(id)arg2 environment:(id)arg3;
- (void)applyVibrancyConfig:(id)arg1 toEffectDescriptor:(id)arg2;
- (id)backdropSettingsForBlurStyle:(long long)arg1;
- (id)vibrancyConfigForHighQualityVibrancyStyle:(long long)arg1;
- (id)vibrancyConfigForLowQualityVibrancyStyle:(long long)arg1;
- (id)vibrancyConfigForReducedTransperancyVibrancyStyle:(long long)arg1;

@end
