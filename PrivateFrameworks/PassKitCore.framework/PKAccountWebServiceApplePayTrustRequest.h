
@interface PKAccountWebServiceApplePayTrustRequest : PKAccountWebServiceRequest {
    <PKAccountWebServiceApplePayTrustProtocol> * _protocol;
    PKApplePayTrustSignature * _signature;
}

@property (nonatomic, retain) PKApplePayTrustSignature *signature;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)endpointComponents;
- (id)initWithApplePayTrustProtocol:(id)arg1;
- (Class)responseClass;
- (void)setSignature:(id)arg1;
- (id)signature;

@end
