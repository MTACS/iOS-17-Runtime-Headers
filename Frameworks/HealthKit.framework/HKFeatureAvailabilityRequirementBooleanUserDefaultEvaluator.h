
@interface HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator : HKFeatureAvailabilityBaseRequirement <HKObservableFeatureAvailabilityRequirement> {
    NSString * _userDefaultsKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool defaultValueWhenKeyIsMissing;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *requirementDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *userDefaultsKey;

+ (id)requirementIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)defaultValueWhenKeyIsMissing;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserDefaultsKey:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSatisfiedForBoolValue:(bool)arg1;
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id*)arg2;
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;
- (id)requirementDescription;
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;
- (id)userDefaultsKey;
- (id)whichUserDefaultsDataSourceInDataSource:(id)arg1;

@end
