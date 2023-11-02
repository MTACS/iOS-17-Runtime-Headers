
@interface BTServicesClient : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSXPCListenerEndpoint * _testListenerEndpoint;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) NSXPCListenerEndpoint *testListenerEndpoint;

- (void).cxx_destruct;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)diagnosticControl:(id)arg1 completion:(id /* block */)arg2;
- (void)diagnosticShow:(id)arg1 completion:(id /* block */)arg2;
- (id)dispatchQueue;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setTestListenerEndpoint:(id)arg1;
- (id)testListenerEndpoint;

@end
