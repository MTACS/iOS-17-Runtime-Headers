
@protocol HKObservableFeatureAvailabilityRequirement <HKFeatureAvailabilityRequirement>

@required

- (void)registerObserver:(id <HKFeatureAvailabilityRequirementSatisfactionObserver>)arg1 forDataSource:(HKFeatureAvailabilityRequirementEvaluationDataSource *)arg2;
- (void)unregisterObserver:(id <HKFeatureAvailabilityRequirementSatisfactionObserver>)arg1 fromDataSource:(HKFeatureAvailabilityRequirementEvaluationDataSource *)arg2;

@end
