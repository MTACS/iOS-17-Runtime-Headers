
@interface HDRequiredFeatureSettingsValidator : NSObject <HDFeatureSettingsValidating> {
    NSArray * _requiredSettingsKeys;
}

- (void).cxx_destruct;
- (id)featureSettingsGivenBaseSettings:(id)arg1 onboardingCompletion:(id)arg2 error:(id*)arg3;
- (id)initWithRequiredSettingsKeys:(id)arg1;

@end
