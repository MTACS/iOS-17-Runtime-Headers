
@interface PKPaymentCredentialAccountAttesationRequest : PKPaymentWebServiceRequest {
    NSDictionary * _requestBody;
}

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(id /* block */)arg5;
- (id)initWithCredential:(id)arg1 attesationRequest:(id)arg2;
- (id)requestBodyWithAttesationRequest:(id)arg1;

@end
