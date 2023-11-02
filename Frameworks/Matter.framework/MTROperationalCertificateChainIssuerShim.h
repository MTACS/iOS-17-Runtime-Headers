
@interface MTROperationalCertificateChainIssuerShim : NSObject <MTROperationalCertificateIssuer> {
    <MTRNOCChainIssuer> * _nocChainIssuer;
    bool  _shouldSkipAttestationCertificateValidation;
}

@property (nonatomic, readonly) <MTRNOCChainIssuer> *nocChainIssuer;
@property (nonatomic, readonly) bool shouldSkipAttestationCertificateValidation;

- (void).cxx_destruct;
- (id)initWithIssuer:(id)arg1;
- (void)issueOperationalCertificateForRequest:(id)arg1 attestationInfo:(id)arg2 controller:(id)arg3 completion:(id /* block */)arg4;
- (id)nocChainIssuer;
- (bool)shouldSkipAttestationCertificateValidation;

@end
