
@interface HKFeatureAvailabilityRequirementMutuallyExclusiveFeatureIsOff : HKFeatureAvailabilityBaseRequirement <HKObservableFeatureAvailabilityRequirement> {
    NSString * _context;
    NSString * _featureIdentifier;
}

@property (nonatomic, readonly, copy) NSString *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *requirementDescription;
@property (readonly) Class superclass;

+ (id)requirementIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (id)featureIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id*)arg2;
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;
- (id)requirementDescription;
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;

@end
