
@interface PKPaymentRegisterCredentialResponse : PKPaymentWebServiceResponse {
    NSData * _credentialAttestation;
    NSURL * _passURL;
    PKSubcredentialEncryptedContainer * _vehicleMobilizationEncryptedContainer;
}

@property (nonatomic, readonly) NSData *credentialAttestation;
@property (nonatomic, readonly) NSURL *passURL;
@property (nonatomic, readonly) PKSubcredentialEncryptedContainer *vehicleMobilizationEncryptedContainer;

- (void).cxx_destruct;
- (id)credentialAttestation;
- (id)initWithData:(id)arg1;
- (id)passURL;
- (id)vehicleMobilizationEncryptedContainer;

@end
