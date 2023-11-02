
@interface MCProfileTrustEvaluator : NSObject

- (bool)_verifyCerts:(id)arg1 policy:(struct __SecPolicy { }*)arg2;
- (bool)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(id)arg1;
- (bool)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:(id)arg1;
- (bool)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)arg1;

@end
