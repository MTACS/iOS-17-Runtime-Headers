
@interface WFSetupClientInternal : NSObject <AKAnisetteServiceProtocol> {
    void clientState;
    void dispatchQueue;
    void interruptionHandler;
    void invalidationHandler;
    void messageSessionTemplate;
    void peerDevice;
    void receivedObjectHandler;
    void setupProgressEventHandler;
    void setupSecurePairingCompletionHandler;
    void sfSession;
    void showPinHandler;
    void userInteractionProgressEventHandler;
}

@property (nonatomic, retain) OS_dispatch_queue *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) CUMessageSession *messageSessionTemplate;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, copy) id /* block */ receivedObjectHandler;
@property (nonatomic, copy) id /* block */ setupProgressEventHandler;
@property (nonatomic, copy) id /* block */ setupSecurePairingCompletionHandler;
@property (nonatomic, copy) id /* block */ showPinHandler;
@property (nonatomic, copy) id /* block */ userInteractionProgressEventHandler;

- (void).cxx_destruct;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (void)eraseAnisetteWithCompletion:(id /* block */)arg1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1 deviceIdentifier:(id)arg2;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)messageSessionTemplate;
- (id)peerDevice;
- (void)provisionAnisetteWithCompletion:(id /* block */)arg1;
- (id /* block */)receivedObjectHandler;
- (void)sendObject:(id)arg1 encrypted:(bool)arg2;
- (void)sendUserInteractionEventInEvent:(id)arg1 withEncryption:(bool)arg2 responseHandler:(id /* block */)arg3;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMessageSessionTemplate:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setReceivedObjectHandler:(id /* block */)arg1;
- (void)setSetupProgressEventHandler:(id /* block */)arg1;
- (void)setSetupSecurePairingCompletionHandler:(id /* block */)arg1;
- (void)setShowPinHandler:(id /* block */)arg1;
- (void)setUserInteractionProgressEventHandler:(id /* block */)arg1;
- (id /* block */)setupProgressEventHandler;
- (id /* block */)setupSecurePairingCompletionHandler;
- (id /* block */)showPinHandler;
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)userInteractionProgressEventHandler;

@end
