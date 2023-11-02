
@interface HKFeatureAvailabilityBaseRequirement : NSObject <HKFeatureAvailabilityRequirement>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *requirementDescription;
@property (readonly) Class superclass;

+ (id)requirementIdentifier;
+ (bool)supportsSecureCoding;

- (id)_hk_featureAvailabilityRequirements;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id*)arg2;
- (id)requirementDescription;

@end
