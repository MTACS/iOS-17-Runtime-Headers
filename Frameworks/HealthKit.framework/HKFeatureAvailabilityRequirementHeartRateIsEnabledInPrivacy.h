
@interface HKFeatureAvailabilityRequirementHeartRateIsEnabledInPrivacy : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (bool)defaultValueWhenKeyIsMissing;
- (id)init;
- (bool)isSatisfiedForBoolValue:(bool)arg1;
- (id)requirementDescription;
- (id)whichUserDefaultsDataSourceInDataSource:(id)arg1;

@end
