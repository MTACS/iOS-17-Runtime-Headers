
@interface HKFeatureAvailabilityRequirementOnboardingRecordIsNotPresent : HKFeatureAvailabilityOnboardingRecordRequirement <HKFeatureAvailabilityRequirement>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *requirementDescription;
@property (readonly) Class superclass;

+ (id)requirementIdentifier;

- (id)isSatisfiedWithOnboardingRecord:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (id)requirementDescription;

@end
