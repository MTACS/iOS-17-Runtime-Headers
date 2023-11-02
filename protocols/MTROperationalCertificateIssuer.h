
@protocol MTROperationalCertificateIssuer

@required

- (void)issueOperationalCertificateForRequest:(void *)arg1 attestationInfo:(void *)arg2 controller:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: MTROperationalCSRInfo *, MTRDeviceAttestationInfo *, MTRDeviceController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTROperationalCertificateChain *, NSError *, void*
- (bool)shouldSkipAttestationCertificateValidation;

@end
