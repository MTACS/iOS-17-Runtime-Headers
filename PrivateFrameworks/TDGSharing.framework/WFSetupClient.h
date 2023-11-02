
@interface WFSetupClient : NSObject {
    id /* block */  _progressEventHandler;
    WFSetupClientInternal * _underlyingSwiftObject;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly, copy) CUMessageSession *messageSessionTemplate;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, copy) id /* block */ progressEventHandler;
@property (nonatomic, copy) id /* block */ receivedObjectHandler;
@property (nonatomic, copy) id /* block */ securePairingCompletionHandler;
@property (nonatomic, copy) id /* block */ setupProgressEventHandler;
@property (nonatomic, copy) id /* block */ showPINHandler;
@property (readonly) WFSetupClientInternal *underlyingSwiftObject;
@property (nonatomic, copy) id /* block */ userInteractionProgressEventHandler;

- (void).cxx_destruct;
- (void)activate;
- (id)dispatchQueue;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)messageSessionTemplate;
- (id)peerDevice;
- (id /* block */)progressEventHandler;
- (id /* block */)receivedObjectHandler;
- (id /* block */)securePairingCompletionHandler;
- (void)sendObject:(id)arg1 encrypted:(bool)arg2;
- (void)sendUserInteractionEvent:(id)arg1 withEncryption:(bool)arg2 responseHandler:(id /* block */)arg3;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setProgressEventHandler:(id /* block */)arg1;
- (void)setReceivedObjectHandler:(id /* block */)arg1;
- (void)setSecurePairingCompletionHandler:(id /* block */)arg1;
- (void)setSetupProgressEventHandler:(id /* block */)arg1;
- (void)setShowPINHandler:(id /* block */)arg1;
- (void)setUserInteractionProgressEventHandler:(id /* block */)arg1;
- (id /* block */)setupProgressEventHandler;
- (id /* block */)showPINHandler;
- (id)underlyingSwiftObject;
- (id /* block */)userInteractionProgressEventHandler;

@end
