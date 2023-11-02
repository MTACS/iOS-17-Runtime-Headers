
@interface DigitalCarKeyHandler : STSTransactionHandler <NFDigitalCarKeySessionDelegate, NFDigitalCarKeySessionPassthroughDelegate> {
    NFDigitalCarKeySession * _nfSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)session:(id)arg1 didEndTransaction:(id)arg2;
- (void)session:(id)arg1 didEnterFieldWithNotification:(id)arg2;
- (void)session:(id)arg1 didExpireTransactionForApplet:(id)arg2;
- (void)session:(id)arg1 didExpressModeStateChange:(unsigned int)arg2 withObject:(id)arg3;
- (void)session:(id)arg1 didReceivePassthroughMessage:(id)arg2;
- (void)session:(id)arg1 didStartTransaction:(id)arg2;
- (void)session:(id)arg1 event:(id)arg2;
- (void)sessionDidExitField:(id)arg1;
- (void)sessionDidFailDeferredAuthorization:(id)arg1;
- (void)sessionDidReceiveActivityTimeout:(id)arg1 result:(id)arg2;
- (id)setActiveCredential:(id)arg1;
- (id)startNFSessionWithCompletion:(id /* block */)arg1;
- (id)startTransactionWithAuthorization:(id)arg1 options:(unsigned long long)arg2;
- (id)stopTransaction;
- (unsigned char)supportedCredentialType;

@end
