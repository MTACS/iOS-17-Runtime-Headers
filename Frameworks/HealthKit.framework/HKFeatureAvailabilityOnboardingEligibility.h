
@interface HKFeatureAvailabilityOnboardingEligibility : NSObject <NSCopying, NSSecureCoding> {
    NSString * _countryAvailabilityVersion;
    unsigned long long  _ineligibilityReasons;
}

@property (nonatomic, readonly, copy) NSString *countryAvailabilityVersion;
@property (nonatomic, readonly) unsigned long long ineligibilityReasons;
@property (nonatomic, readonly) bool isEligible;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryAvailabilityVersion;
- (id)description;
- (id)eligibilityRespectingOverridesForFeatureIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)ineligibilityReasons;
- (id)ineligibilityReasonsDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithIneligibilityReasons:(unsigned long long)arg1 countryAvailabilityVersion:(id)arg2;
- (bool)isEligible;
- (bool)isEqual:(id)arg1;
- (long long)onboardedCountrySupportedState;

@end
