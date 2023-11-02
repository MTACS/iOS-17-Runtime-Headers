
@interface PKRetrieveVPANPaymentCredentialRequest : PKPaymentWebServiceRequest {
    NSString * _deviceIdentifier;
    PKVirtualCardEncryptionFields * _encryptionFields;
    NSString * _merchantHost;
    NSString * _nonce;
    PKSecureElementPass * _paymentPass;
    NSString * _vpanIdentifier;
}

@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, retain) PKVirtualCardEncryptionFields *encryptionFields;
@property (nonatomic, readonly, copy) NSArray *endpointComponents;
@property (nonatomic, copy) NSString *merchantHost;
@property (nonatomic, copy) NSString *nonce;
@property (nonatomic, retain) PKSecureElementPass *paymentPass;
@property (nonatomic, copy) NSString *vpanIdentifier;

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)arg1 rewrapData:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(id /* block */)arg5;
- (id)deviceIdentifier;
- (id)encryptionFields;
- (id)endpointComponents;
- (id)initWithPaymentPass:(id)arg1 vpanIdentifier:(id)arg2 deviceIdentifier:(id)arg3 nonce:(id)arg4 encryptionFields:(id)arg5 merchantHost:(id)arg6;
- (id)merchantHost;
- (id)nonce;
- (id)paymentPass;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setEncryptionFields:(id)arg1;
- (void)setMerchantHost:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setVpanIdentifier:(id)arg1;
- (id)vpanIdentifier;

@end
