
@interface WFSetupServerInternal : NSObject {
    void anisetteDataProvider;
    void completionHandler;
    void dispatchQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  peer;
    void preventExitForLocaleClient;
    void receivedObjectHandler;
    void resumeAuthTag;
    void serverState;
    void setupProgressEventHandler;
    void setupPromptPinHandler;
    void sfService;
    void sfSession;
    void shouldAdvertiseFast;
    void userInteractionProgressEventHandler;
}

@property (nonatomic, retain) _TtC10TDGSharing33WFSetupServerAnisetteDataProvider *anisetteDataProvider;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) OS_dispatch_queue *dispatchQueue;
@property (nonatomic, copy) id /* block */ receivedObjectHandler;
@property (nonatomic, copy) id /* block */ setupProgressEventHandler;
@property (nonatomic, copy) id /* block */ setupPromptPinHandler;
@property (nonatomic, copy) id /* block */ userInteractionProgressEventHandler;

- (void).cxx_destruct;
- (void)activate;
- (id)anisetteDataProvider;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (id /* block */)receivedObjectHandler;
- (void)sendObjectWithObject:(id)arg1 encrypted:(bool)arg2;
- (void)sendSetupWithAction:(unsigned int)arg1 info:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)sendUserInteractionEventInEvent:(id)arg1 withEncryption:(bool)arg2 responseHandler:(id /* block */)arg3;
- (void)setAnisetteDataProvider:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setReceivedObjectHandler:(id /* block */)arg1;
- (void)setSetupProgressEventHandler:(id /* block */)arg1;
- (void)setSetupPromptPinHandler:(id /* block */)arg1;
- (void)setUserInteractionProgressEventHandler:(id /* block */)arg1;
- (id /* block */)setupProgressEventHandler;
- (id /* block */)setupPromptPinHandler;
- (void)startSecureChannelPairingWith:(bool)arg1 completion:(id /* block */)arg2;
- (void)startSecureChannelPairingWith:(bool)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)tryPin:(id)arg1;
- (id /* block */)userInteractionProgressEventHandler;

@end
