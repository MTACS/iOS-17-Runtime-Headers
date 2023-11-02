
@interface SignMerchantPaymentHandler : STSHandler {
    NFECommercePaymentSession * _nfECommerceSession;
    STSSigningSession * _parent;
}

@property (nonatomic, readonly) STSSigningSession *parent;

- (void).cxx_destruct;
- (id)initWithParent:(id)arg1;
- (id)parent;
- (id)signInAppPayment:(id)arg1 authorization:(id)arg2 error:(id*)arg3;
- (id)startNFSessionWithCompletion:(id /* block */)arg1;
- (unsigned char)supportedCredentialType;

@end
