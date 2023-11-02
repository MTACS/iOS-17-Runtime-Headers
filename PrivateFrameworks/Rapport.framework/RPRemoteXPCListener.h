
@interface RPRemoteXPCListener : NSObject {
    id /* block */  _acceptHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _serviceName;
}

@property (nonatomic, copy) id /* block */ acceptHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly, copy) NSString *serviceName;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (id /* block */)acceptHandler;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)dispatchQueue;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)serviceName;
- (void)setAcceptHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
