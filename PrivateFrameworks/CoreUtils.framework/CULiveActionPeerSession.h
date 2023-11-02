
@interface CULiveActionPeerSession : NSObject <CUActivatable> {
    RPCompanionLinkClient * _clinkClient;
    RPCompanionLinkDevice * _destinationDevice;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _invalidationHandler;
    bool  _speakDisable;
}

@property (nonatomic, retain) RPCompanionLinkDevice *destinationDevice;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) bool speakDisable;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)destinationDevice;
- (id)dispatchQueue;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)performRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)setDestinationDevice:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setSpeakDisable:(bool)arg1;
- (void)setupWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)speakDisable;

@end
