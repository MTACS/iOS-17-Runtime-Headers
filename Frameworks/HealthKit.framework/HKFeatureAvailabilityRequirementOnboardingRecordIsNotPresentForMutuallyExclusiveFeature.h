
@interface HKFeatureAvailabilityRequirementOnboardingRecordIsNotPresentForMutuallyExclusiveFeature : HKFeatureAvailabilityRequirementOnboardingRecordIsNotPresent <HKObservableFeatureAvailabilityRequirement>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *requirementDescription;
@property (readonly) Class superclass;

+ (id)requirementIdentifier;

- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;

@end
