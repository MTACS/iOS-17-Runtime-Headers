
@interface ENRegionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long  _consent;
    double  _consentTimestamp;
    double  _creationDateTimeInterval;
    ENUserAuthorization * _diagnosisKeysPreAuthorization;
    long long  _differentialPrivacyConsent;
    double  _differentialPrivacyConsentTimestamp;
    unsigned long long  _enRampMode;
    unsigned long long  _enVersion;
    bool  _everStartedOnboarding;
    double  _lastConfigurationUpdateTimeInterval;
    ENRegion * _region;
    long long  _travelerModeEnabled;
    ENRegionUserConsent * _userConsent;
}

@property (nonatomic, readonly) long long consent;
@property (nonatomic, readonly) double consentTimestamp;
@property (nonatomic) double creationDateTimeInterval;
@property (nonatomic, retain) ENUserAuthorization *diagnosisKeysPreAuthorization;
@property (nonatomic, readonly) long long differentialPrivacyConsent;
@property (nonatomic, readonly) double differentialPrivacyConsentTimestamp;
@property (nonatomic) unsigned long long enRampMode;
@property (nonatomic) unsigned long long enVersion;
@property (nonatomic) bool everStartedOnboarding;
@property (nonatomic) double lastConfigurationUpdateTimeInterval;
@property (nonatomic, retain) ENRegion *region;
@property (nonatomic) long long travelerModeEnabled;
@property (nonatomic, retain) ENRegionUserConsent *userConsent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)consent;
- (double)consentTimestamp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDateTimeInterval;
- (id)description;
- (id)diagnosisKeysPreAuthorization;
- (long long)differentialPrivacyConsent;
- (double)differentialPrivacyConsentTimestamp;
- (unsigned long long)enRampMode;
- (unsigned long long)enVersion;
- (void)encodeWithCoder:(id)arg1;
- (bool)everStartedOnboarding;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(unsigned long long)arg1 region:(id)arg2;
- (bool)isEqual:(id)arg1;
- (double)lastConfigurationUpdateTimeInterval;
- (id)region;
- (void)setCreationDateTimeInterval:(double)arg1;
- (void)setDiagnosisKeysPreAuthorization:(id)arg1;
- (void)setEnRampMode:(unsigned long long)arg1;
- (void)setEnVersion:(unsigned long long)arg1;
- (void)setEverStartedOnboarding:(bool)arg1;
- (void)setLastConfigurationUpdateTimeInterval:(double)arg1;
- (void)setRegion:(id)arg1;
- (void)setTravelerModeEnabled:(long long)arg1;
- (void)setUserConsent:(id)arg1;
- (long long)travelerModeEnabled;
- (id)updatedWithConfiguration:(id)arg1;
- (id)userConsent;

@end
