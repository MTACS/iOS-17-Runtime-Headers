
@interface RPNearFieldClient : NSObject <RPNearFieldXPCClientInterfaceOld> {
    id /* block */  _connectionEstablishedHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _failedDiscovery;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    id /* block */  _tapEventHandler;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, copy) id /* block */ connectionEstablishedHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ failedDiscovery;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ tapEventHandler;
@property (nonatomic, readonly) NSXPCConnection *xpcCnx;

- (void).cxx_destruct;
- (id)_XPCConnectionWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (id /* block */)connectionEstablishedHandler;
- (void)didConnect;
- (id)dispatchQueue;
- (void)failDiscoveryWithError:(id)arg1;
- (id /* block */)failedDiscovery;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)receivedAlwaysOnEventWithSuggestedRole:(unsigned int)arg1;
- (void)receivedTapEvent:(id)arg1;
- (void)setConnectionEstablishedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFailedDiscovery:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setTapEventHandler:(id /* block */)arg1;
- (void)stopWithCompletion:(id /* block */)arg1;
- (id /* block */)tapEventHandler;
- (id)xpcCnx;

@end
