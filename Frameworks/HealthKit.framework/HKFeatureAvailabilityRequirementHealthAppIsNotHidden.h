
@interface HKFeatureAvailabilityRequirementHealthAppIsNotHidden : HKFeatureAvailabilityBaseRequirement

+ (id)requirementIdentifier;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id*)arg2;
- (id)requirementDescription;

@end
