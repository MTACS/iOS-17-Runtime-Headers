
@interface HKFeatureAvailabilityRequirementFeatureFlagIsEnabled : HKFeatureAvailabilityMustBeTrueRequirement <HKFeatureAvailabilityRequirement>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *requirementDescription;
@property (readonly) Class superclass;

+ (id)requirementIdentifier;

- (id)requirementDescription;

@end
