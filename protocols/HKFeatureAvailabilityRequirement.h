
@protocol HKFeatureAvailabilityRequirement <NSObject, NSSecureCoding, HKFeatureAvailabilityRequirementsProviding>

@required

+ (NSString *)requirementIdentifier;

- (NSNumber *)isSatisfiedWithDataSource:(HKFeatureAvailabilityRequirementEvaluationDataSource *)arg1 error:(id*)arg2;
- (NSString *)requirementDescription;

@end
