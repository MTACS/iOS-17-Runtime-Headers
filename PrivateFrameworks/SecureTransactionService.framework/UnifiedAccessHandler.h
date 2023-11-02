
@interface UnifiedAccessHandler : STSTransactionHandler <NFUnifiedAccessSessionDelegate> {
    NFUnifiedAccessSession * _nfSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)setActiveCredential:(id)arg1;
- (id)startNFSessionWithCompletion:(id /* block */)arg1;
- (id)startTransactionWithAuthorization:(id)arg1 options:(unsigned long long)arg2;
- (id)stopTransaction;
- (unsigned char)supportedCredentialType;
- (void)unifiedAccessSession:(id)arg1 didDetectField:(bool)arg2;
- (void)unifiedAccessSession:(id)arg1 didEndTransaction:(id)arg2;
- (void)unifiedAccessSession:(id)arg1 didEnterFieldWithNotification:(id)arg2;
- (void)unifiedAccessSession:(id)arg1 didExpireTransactionForApplet:(id)arg2;
- (void)unifiedAccessSession:(id)arg1 didExpressModeStateChange:(unsigned int)arg2 withObject:(id)arg3;
- (void)unifiedAccessSession:(id)arg1 didSelectApplet:(id)arg2;
- (void)unifiedAccessSession:(id)arg1 didStartTransaction:(id)arg2;

@end
