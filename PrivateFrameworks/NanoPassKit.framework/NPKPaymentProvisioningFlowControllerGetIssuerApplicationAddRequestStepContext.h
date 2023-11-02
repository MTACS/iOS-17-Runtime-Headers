
@interface NPKPaymentProvisioningFlowControllerGetIssuerApplicationAddRequestStepContext : NPKPaymentProvisioningFlowStepContext {
    NSArray * _certificates;
    NSData * _nonce;
    NSData * _nonceSignature;
}

@property (nonatomic, retain) NSArray *certificates;
@property (nonatomic, retain) NSData *nonce;
@property (nonatomic, retain) NSData *nonceSignature;

- (void).cxx_destruct;
- (id)certificates;
- (id)description;
- (id)initWithRequestContext:(id)arg1;
- (id)nonce;
- (id)nonceSignature;
- (void)setCertificates:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setNonceSignature:(id)arg1;

@end
