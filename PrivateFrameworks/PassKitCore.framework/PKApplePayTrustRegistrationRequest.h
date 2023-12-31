
@interface PKApplePayTrustRegistrationRequest : PKPaymentWebServiceRequest {
    PKApplePayTrustKey * _applePayTrustKey;
}

@property (nonatomic, retain) PKApplePayTrustKey *applePayTrustKey;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)applePayTrustKey;
- (void)setApplePayTrustKey:(id)arg1;

@end
