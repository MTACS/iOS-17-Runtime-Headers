
@interface HKFeatureAvailabilityLocalRequirementEvaluationContext : HKFeatureAvailabilityRequirementEvaluationDataSource {
    long long  __unitTest_cacheHits;
    NSMutableDictionary * _eligibilityByFeatureIdentifier;
    NSMutableDictionary * _featureStatusByIdentifierAndContext;
    NSMutableDictionary * _onboardingRecordByFeatureIdentifier;
    NSMutableDictionary * _watchAppInstallationStateByBundleIdentifier;
}

@property (nonatomic) long long _unitTest_cacheHits;
@property (nonatomic, retain) NSMutableDictionary *eligibilityByFeatureIdentifier;
@property (nonatomic, retain) NSMutableDictionary *featureStatusByIdentifierAndContext;
@property (nonatomic, retain) NSMutableDictionary *onboardingRecordByFeatureIdentifier;
@property (nonatomic, retain) NSMutableDictionary *watchAppInstallationStateByBundleIdentifier;

- (void).cxx_destruct;
- (long long)_unitTest_cacheHits;
- (id)eligibilityByFeatureIdentifier;
- (id)featureStatusByIdentifierAndContext;
- (id)featureStatusForFeatureWithIdentifier:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)isWatchAppInstalledWithBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)onboardingEligibilityForFeatureWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)onboardingRecordByFeatureIdentifier;
- (id)onboardingRecordForFeatureWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)setEligibilityByFeatureIdentifier:(id)arg1;
- (void)setFeatureStatusByIdentifierAndContext:(id)arg1;
- (void)setOnboardingRecordByFeatureIdentifier:(id)arg1;
- (void)setWatchAppInstallationStateByBundleIdentifier:(id)arg1;
- (void)set_unitTest_cacheHits:(long long)arg1;
- (id)watchAppInstallationStateByBundleIdentifier;

@end
