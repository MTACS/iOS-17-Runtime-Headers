
@interface PKPaymentIssuerProvisioningCertificatesRequest : PKPaymentWebServiceRequest {
    NSString * _encryptionScheme;
}

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)init;
- (id)initWithEncryptionScheme:(id)arg1;

@end
