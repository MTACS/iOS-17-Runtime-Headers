
@interface HKAllowedCountries : NSObject <NSCopying, NSSecureCoding> {
    long long  _category;
    HKCountrySet * _localCountrySet;
    HKCountrySet * _remoteCountrySet;
    long long  _remoteState;
    NSString * _version;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly, copy) HKCountrySet *localCountrySet;
@property (nonatomic, readonly, copy) NSString *prettyPrintedDescription;
@property (nonatomic, readonly, copy) HKCountrySet *remoteCountrySet;
@property (nonatomic, readonly) long long remoteState;
@property (nonatomic, readonly, copy) NSString *version;

+ (id)allowedCountriesInIntersectionOfLocalAndRemoteSetPendingSync:(id)arg1;
+ (id)allowedCountriesInIntersectionOfLocalSet:(id)arg1 remoteSet:(id)arg2;
+ (id)allowedCountriesInLocalSet:(id)arg1;
+ (id)capabilityNotSupportedOnRemoteDevice:(id)arg1;
+ (id)noRemoteDevice:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)ineligibilityReasonsForOnboardingCountryCode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localCountrySet;
- (id)prettyPrintedDescription;
- (id)remoteCountrySet;
- (long long)remoteState;
- (id)version;

@end
