
@interface AMSURLSecurityPolicy : NSObject {
    NSSet * _pinnedCertificates;
    long long  _trustMode;
}

@property (nonatomic, retain) NSSet *pinnedCertificates;
@property (nonatomic) long long trustMode;

+ (id)defaultPolicy;

- (void).cxx_destruct;
- (bool)_evaluateExtendedValidationWithTrust:(struct __SecTrust { }*)arg1 forTask:(id)arg2;
- (bool)_evaluatePinnedCertificatesWithTrust:(struct __SecTrust { }*)arg1 forTask:(id)arg2;
- (bool)_shouldSkipValidation;
- (bool)evaluateTrust:(struct __SecTrust { }*)arg1 forTask:(id)arg2;
- (id)initWithTrustMode:(long long)arg1;
- (id)initWithTrustMode:(long long)arg1 pinnedCertificated:(id)arg2;
- (id)pinnedCertificates;
- (void)setPinnedCertificates:(id)arg1;
- (void)setTrustMode:(long long)arg1;
- (long long)trustMode;

@end
