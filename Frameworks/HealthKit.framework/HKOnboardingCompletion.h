
@interface HKOnboardingCompletion : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSDate * _completionDate;
    NSString * _countryCode;
    long long  _countryCodeProvenance;
    NSString * _featureIdentifier;
    long long  _version;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSDate *completionDate;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly) long long countryCodeProvenance;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)completionDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (long long)countryCodeProvenance;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureIdentifier:(id)arg1 version:(long long)arg2 completionDate:(id)arg3 countryCode:(id)arg4 countryCodeProvenance:(long long)arg5;
- (id)initWithFeatureIdentifier:(id)arg1 version:(long long)arg2 completionDate:(id)arg3 countryCode:(id)arg4 countryCodeProvenance:(long long)arg5 UUID:(id)arg6;
- (bool)isEqual:(id)arg1;
- (long long)version;

@end
