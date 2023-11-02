
@interface CMContinuityCaptureRapportTransportBase : NSObject <CMContinuityCaptureTransportMessaging, TSClockManagerClient> {
    unsigned long long  _clockIdentifier;
    <ContinuityCaptureTaskDelegate> * _delegate;
    CMContinuityCaptureTransportRapportDevice * _device;
    id /* block */  _incomingStreamRequestHandler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ incomingStreamRequestHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_bindClock:(unsigned long long)arg1 peerAddress:(id)arg2 retries:(long long)arg3 completion:(id /* block */)arg4;
- (void)_enqueueResponse:(id)arg1 identifier:(id)arg2;
- (void)createTimeSyncClockWithPeerAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)disposeTimeSyncClock;
- (void)enqueueResponse:(id)arg1 identifier:(id)arg2;
- (id /* block */)incomingStreamRequestHandler;
- (id)initWithRapportDevice:(id)arg1 queue:(id)arg2 taskDelegate:(id)arg3;
- (void)invalidateCurrentSession:(id /* block */)arg1;
- (void)resetDevice:(id)arg1;
- (void)sendMessage:(id)arg1 message:(id)arg2 completion:(id /* block */)arg3;
- (void)setIncomingStreamRequestHandler:(id /* block */)arg1;
- (void)setTaskDelegate:(id)arg1;

@end
