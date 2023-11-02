
@interface HKFeatureAvailabilityRequirementActiveRemoteDeviceIsPresentWhenRequiredForRegionAvailabilityOrDeviceCapability : HKFeatureAvailabilityOnboardingEligibilityRequirement <HKObservableFeatureAvailabilityRequirement>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *requirementDescription;
@property (readonly) Class superclass;

+ (id)requirementIdentifier;

- (bool)isEqual:(id)arg1;
- (id)isSatisfiedWithOnboardingEligibility:(id)arg1 error:(id*)arg2;
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;
- (id)requirementDescription;
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;

@end
