
@interface AMSFeatureFlagRemote : AMSFeatureFlag

+ (id)fetchRemoteFlagState;

- (void)_activateFlag;
- (long long)_developmentPhase;
- (id)_preferencesKey;
- (void)_updateDevelopmentPhase;
- (void)_updateInternalEnabledState;
- (bool)isRemote;

@end
