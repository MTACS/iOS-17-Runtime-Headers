
@interface STSSigningSession : STSSessionBase {
    STSCredential * _activeCredential;
}

- (void).cxx_destruct;
- (id)_createHandlerForMerchantPaymentSign;
- (id)_createHandlerForPeerPaymentSign;
- (id)canStartSession;
- (id)createHandlerForCredential:(id)arg1;
- (id)setActiveCredential:(id)arg1;
- (id)signInAppPayment:(id)arg1 authorization:(id)arg2 error:(id*)arg3;
- (id)signPeerPayment:(id)arg1 authorization:(id)arg2 error:(id*)arg3;

@end
