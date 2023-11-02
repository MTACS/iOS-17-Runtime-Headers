
@interface SignPeerPaymentHandler : STSHandler {
    NFPeerPaymentSession * _nfPeerPaymentSession;
    STSSigningSession * _parent;
}

@property (nonatomic, readonly) STSSigningSession *parent;

- (void).cxx_destruct;
- (id)initWithParent:(id)arg1;
- (id)parent;
- (id)signPeerPayment:(id)arg1 authorization:(id)arg2 error:(id*)arg3;
- (id)startNFSessionWithCompletion:(id /* block */)arg1;
- (unsigned char)supportedCredentialType;

@end
