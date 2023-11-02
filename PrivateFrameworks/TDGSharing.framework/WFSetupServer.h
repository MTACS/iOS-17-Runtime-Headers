
@interface WFSetupServer : NSObject {
    WFSetupServerInternal * _underlyingSwiftObject;
}

@property (nonatomic, readonly) _TtC10TDGSharing33WFSetupServerAnisetteDataProvider *anisetteDataProvider;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ receivedObjectHandler;
@property (nonatomic, copy) id /* block */ setupProgressEventHandler;
@property (nonatomic, copy) id /* block */ setupPromptPinHandler;
@property (readonly) WFSetupServerInternal *underlyingSwiftObject;
@property (nonatomic, copy) id /* block */ userInteractionProgressEventHandler;

- (void).cxx_destruct;
- (void)activate;
- (id)anisetteDataProvider;
- (id /* block */)completionHandler;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)receivedObjectHandler;
- (void)sendObject:(id)arg1 withEncryption:(bool)arg2;
- (void)sendSetupAction:(unsigned int)arg1 info:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)sendUserInteractionEvent:(id)arg1 withEncryption:(bool)arg2 responseHandler:(id /* block */)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setReceivedObjectHandler:(id /* block */)arg1;
- (void)setSetupProgressEventHandler:(id /* block */)arg1;
- (void)setSetupPromptPinHandler:(id /* block */)arg1;
- (void)setUserInteractionProgressEventHandler:(id /* block */)arg1;
- (id /* block */)setupProgressEventHandler;
- (id /* block */)setupPromptPinHandler;
- (void)startSecureChannelWithResetFlag:(bool)arg1 completion:(id /* block */)arg2;
- (void)startSecureChannelWithResetFlag:(bool)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)tryPIN:(id)arg1;
- (id)underlyingSwiftObject;
- (id /* block */)userInteractionProgressEventHandler;

@end
