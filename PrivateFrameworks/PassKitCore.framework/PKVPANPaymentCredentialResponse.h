
@interface PKVPANPaymentCredentialResponse : PKPaymentWebServiceResponse {
    PKEncryptedVPANPaymentCredentials * _credentials;
    NSString * _expiration;
    NSString * _vpanIdentifier;
}

@property (nonatomic, readonly, copy) PKEncryptedVPANPaymentCredentials *credentials;
@property (nonatomic, readonly, copy) NSString *expiration;
@property (nonatomic, readonly, copy) NSString *vpanIdentifier;

- (void).cxx_destruct;
- (id)credentials;
- (id)expiration;
- (id)initWithData:(id)arg1;
- (id)vpanIdentifier;

@end
