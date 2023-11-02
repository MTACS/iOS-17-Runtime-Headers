
@interface PKPaymentRegisterTrackCredentialRequest : PKPaymentRegisterCredentialRequest {
    NSDictionary * _registrationData;
}

- (void).cxx_destruct;
- (void)buildRequestBody:(id)arg1;
- (id)initWithCredential:(id)arg1 registrationData:(id)arg2 metadata:(id)arg3;

@end
