
@interface PKPaymentIssuerProvisioningCertificatesResponse : PKPaymentWebServiceResponse {
    NSArray * _certificates;
    NSData * _nonce;
    NSData * _nonceSignature;
    NSData * _publicKeyHash;
}

@property (nonatomic, readonly, copy) NSArray *certificates;
@property (nonatomic, readonly, copy) NSData *nonce;
@property (nonatomic, copy) NSData *nonceSignature;
@property (nonatomic, copy) NSData *publicKeyHash;

- (void).cxx_destruct;
- (id)certificates;
- (id)initWithData:(id)arg1;
- (id)nonce;
- (id)nonceSignature;
- (id)publicKeyHash;
- (void)setNonceSignature:(id)arg1;
- (void)setPublicKeyHash:(id)arg1;

@end
