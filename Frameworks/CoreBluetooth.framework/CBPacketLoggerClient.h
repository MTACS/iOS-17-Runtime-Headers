
@interface CBPacketLoggerClient : NSObject <CBActivatable, CBErrorReporting, CBInterruptable> {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    id /* block */  _rawPacketHandler;
    NSObject<OS_xpc_object> * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ rawPacketHandler;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_activateXPC:(bool)arg1 completion:(id /* block */)arg2;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_xpcReceivedEvent:(id)arg1;
- (void)_xpcReceivedPacket:(id)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id /* block */)rawPacketHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRawPacketHandler:(id /* block */)arg1;

@end
