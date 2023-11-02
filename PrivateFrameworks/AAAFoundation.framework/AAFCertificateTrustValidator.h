
@interface AAFCertificateTrustValidator : NSObject

- (bool)_checkPinningPolicy:(id)arg1 type:(unsigned long long)arg2;
- (struct __SecPolicy { }*)_policyForType:(unsigned long long)arg1 host:(id)arg2;
- (bool)_trySSLPinning:(id)arg1;
- (long long)validateCertificateTrustWithChallenge:(id)arg1 type:(unsigned long long)arg2;

@end
