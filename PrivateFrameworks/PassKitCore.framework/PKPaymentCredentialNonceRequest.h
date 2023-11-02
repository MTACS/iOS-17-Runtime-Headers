
@interface PKPaymentCredentialNonceRequest : PKPaymentWebServiceRequest {
    NSString * _deviceIdentifier;
    PKSecureElementPass * _paymentPass;
}

@property (nonatomic, readonly, copy) NSString *deviceIdentifier;
@property (nonatomic, readonly) PKSecureElementPass *paymentPass;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)deviceIdentifier;
- (id)initWithPaymentPass:(id)arg1 deviceIdentifier:(id)arg2;
- (id)paymentPass;

@end
