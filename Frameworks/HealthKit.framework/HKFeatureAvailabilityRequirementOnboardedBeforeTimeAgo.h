
@interface HKFeatureAvailabilityRequirementOnboardedBeforeTimeAgo : HKFeatureAvailabilityOnboardingRecordRequirement <HKFeatureAvailabilityRequirement> {
    NSDateComponents * _dateComponents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *requirementDescription;
@property (readonly) Class superclass;

+ (id)requirementIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureIdentifier:(id)arg1 daysBeforeCurrentDate:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)isSatisfiedWithOnboardingRecord:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (id)requirementDescription;

@end
