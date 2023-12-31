
@interface PKPeerPaymentAcceptTermsRequest : PKPeerPaymentWebServiceRequest {
    NSString * _termsIdentifier;
}

@property (nonatomic, copy) NSString *termsIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3;
- (void)setTermsIdentifier:(id)arg1;
- (id)termsIdentifier;

@end
