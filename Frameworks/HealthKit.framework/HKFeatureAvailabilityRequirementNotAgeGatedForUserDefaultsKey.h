
@interface HKFeatureAvailabilityRequirementNotAgeGatedForUserDefaultsKey : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (bool)defaultValueWhenKeyIsMissing;
- (id)initWithUserDefaultsKey:(id)arg1;
- (bool)isSatisfiedForBoolValue:(bool)arg1;
- (id)requirementDescription;
- (id)whichUserDefaultsDataSourceInDataSource:(id)arg1;

@end
