
@interface HealthMobilityUI.WalkingSteadinessAnalyticsOnboardingEventDataSource : NSObject <HKMobilityWalkingSteadinessAnalyticsOnboardingEventDataSourceProvider> {
    void acceptDefaults;
    void changedDetailItems;
    void defaultDetailItems;
    void healthStore;
    void onboardingStep;
    void presentation;
}

- (void).cxx_destruct;
- (id)acceptDefaultHeightWithError:(id*)arg1;
- (id)acceptDefaultNotificationsWithError:(id*)arg1;
- (id)acceptDefaultWeightWithError:(id*)arg1;
- (id)activeWatchProductTypeWithError:(id*)arg1;
- (id)ageWithError:(id*)arg1;
- (id)biologicalSexWithError:(id*)arg1;
- (id)featureVersionWithError:(id*)arg1;
- (id)hasDefaultHeightWithError:(id*)arg1;
- (id)hasDefaultWeightWithError:(id*)arg1;
- (id)init;
- (id)provenanceWithError:(id*)arg1;
- (id)stepWithError:(id*)arg1;

@end
