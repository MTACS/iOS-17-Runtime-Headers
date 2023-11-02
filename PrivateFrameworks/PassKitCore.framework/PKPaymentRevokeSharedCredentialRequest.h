
@interface PKPaymentRevokeSharedCredentialRequest : PKPaymentWebServiceRequest {
    PKAppletSubcredential * _credential;
    NSDictionary * _revocationAttestation;
}

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithCredential:(id)arg1 revocationAttestation:(id)arg2;
- (id)requestBody;

@end
