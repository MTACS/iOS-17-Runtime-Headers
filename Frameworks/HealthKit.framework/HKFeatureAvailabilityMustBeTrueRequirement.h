
@interface HKFeatureAvailabilityMustBeTrueRequirement : HKFeatureAvailabilityBaseRequirement <NSCopying, NSSecureCoding> {
    bool  _isTrue;
}

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithWhatMustBeTrue:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id*)arg2;

@end
