
@interface HDOTAFeatureAvailabilityInfo : NSObject <NSCopying, NSSecureCoding> {
    HKCountrySet * _allowedCountrySet;
}

@property (nonatomic, readonly, copy) HKCountrySet *allowedCountrySet;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedCountrySet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAllowedCountrySet:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
