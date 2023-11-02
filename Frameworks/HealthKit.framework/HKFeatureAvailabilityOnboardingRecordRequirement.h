
@interface HKFeatureAvailabilityOnboardingRecordRequirement : HKFeatureAvailabilityBaseRequirement <NSCopying, NSSecureCoding> {
    NSString * _featureIdentifier;
}

@property (nonatomic, readonly, copy) NSString *featureIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)featureIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id*)arg2;
- (id)isSatisfiedWithOnboardingRecord:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;

@end
