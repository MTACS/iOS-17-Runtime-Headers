
@interface ENRegionUserConsent : NSObject <NSCopying, NSSecureCoding> {
    long long  _consent;
    NSString * _consentText;
    double  _consentTimestamp;
    NSString * _consentVersion;
    long long  _differentialPrivacyConsent;
    double  _differentialPrivacyConsentTimestamp;
}

@property (nonatomic) long long consent;
@property (nonatomic, retain) NSString *consentText;
@property (nonatomic) double consentTimestamp;
@property (nonatomic, retain) NSString *consentVersion;
@property (nonatomic) long long differentialPrivacyConsent;
@property (nonatomic) double differentialPrivacyConsentTimestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)consent;
- (id)consentText;
- (double)consentTimestamp;
- (id)consentVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)differentialPrivacyConsent;
- (double)differentialPrivacyConsentTimestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConsentVersion:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setConsent:(long long)arg1;
- (void)setConsentText:(id)arg1;
- (void)setConsentTimestamp:(double)arg1;
- (void)setConsentVersion:(id)arg1;
- (void)setDifferentialPrivacyConsent:(long long)arg1;
- (void)setDifferentialPrivacyConsentTimestamp:(double)arg1;
- (id)updatedConsent:(id)arg1;

@end
