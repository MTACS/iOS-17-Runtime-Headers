
@interface HKFeatureAvailabilityRequirementPrerequisiteFeaturesAreOn : HKFeatureAvailabilityBaseRequirement <HKObservableFeatureAvailabilityRequirement> {
    NSArray * _prerequisiteFeatureSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *prerequisiteFeatureSettings;
@property (nonatomic, readonly) NSString *requirementDescription;
@property (readonly) Class superclass;

+ (id)requirementIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrerequisiteFeatureSettings:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id*)arg2;
- (id)prerequisiteFeatureSettings;
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;
- (id)requirementDescription;
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;

@end
