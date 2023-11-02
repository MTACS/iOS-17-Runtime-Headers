
@interface PKPaymentPrepareToProvisionRequest : PKPaymentWebServiceRequest {
    NSArray * _credentials;
}

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithCredentials:(id)arg1;

@end
