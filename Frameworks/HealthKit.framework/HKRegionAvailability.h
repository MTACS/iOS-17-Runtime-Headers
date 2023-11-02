
@interface HKRegionAvailability : NSObject <NSCopying, NSSecureCoding> {
    HKAllowedCountries * _allowedCountries;
    long long  _category;
    NSString * _version;
}

@property (nonatomic, readonly, copy) HKAllowedCountries *allowedCountries;
@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly, copy) NSString *prettyPrintedDescription;
@property (nonatomic, readonly, copy) NSString *version;

+ (id)allowedInSomeCountries:(id)arg1;
+ (id)anyCountryAvailability;
+ (bool)supportsSecureCoding;
+ (id)uncheckedAvailability;

- (void).cxx_destruct;
- (id)allowedCountries;
- (long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)ineligibilityReasonsForOnboardingCountryCode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)onboardingEligibilityForCountryCode:(id)arg1;
- (id)prettyPrintedDescription;
- (id)version;

@end
