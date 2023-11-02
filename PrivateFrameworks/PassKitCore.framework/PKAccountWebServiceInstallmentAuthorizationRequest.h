
@interface PKAccountWebServiceInstallmentAuthorizationRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol> {
    NSString * _accountIdentifier;
    NSDecimalNumber * _authorizationAmount;
    NSString * _bindToken;
    NSString * _installmentGroupIdentifier;
    NSData * _publicKeyHash;
    CNPostalAddress * _shippingAddress;
    NSURL * baseURL;
    PKApplePayTrustHashResponse * hashResponse;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSDecimalNumber *authorizationAmount;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSString *bindToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKApplePayTrustHashResponse *hashResponse;
@property (nonatomic, copy) NSString *installmentGroupIdentifier;
@property (nonatomic, copy) NSData *publicKeyHash;
@property (nonatomic, retain) CNPostalAddress *shippingAddress;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)authorizationAmount;
- (id)baseURL;
- (id)bindToken;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointComponents;
- (id)hashResponse;
- (id)initWithCoder:(id)arg1;
- (id)installmentGroupIdentifier;
- (id)manifestHashWithReferenceIdentifier:(id)arg1;
- (id)publicKeyHash;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAuthorizationAmount:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setBindToken:(id)arg1;
- (void)setHashResponse:(id)arg1;
- (void)setInstallmentGroupIdentifier:(id)arg1;
- (void)setPublicKeyHash:(id)arg1;
- (void)setShippingAddress:(id)arg1;
- (id)shippingAddress;
- (Class)signatureResponseClass;

@end
