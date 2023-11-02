
@interface PKPaymentRegisterPreTrackCredentialRequest : PKPaymentRegisterCredentialRequest {
    NSDictionary * _encryptedVehicleDataRequest;
}

- (void).cxx_destruct;
- (void)buildRequestBody:(id)arg1;
- (id)initWithCredential:(id)arg1 encryptedVehicleDataRequest:(id)arg2 metadata:(id)arg3;
- (id)initWithCredential:(id)arg1 metadata:(id)arg2;

@end
