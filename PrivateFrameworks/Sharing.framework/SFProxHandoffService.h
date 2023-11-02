
@interface SFProxHandoffService : NSObject {
    bool  _activateCalled;
    id /* block */  _activateCompletion;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    SFService * _service;
    int  _serviceState;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_activated;
- (void)_cleanup;
- (void)_completedWithError:(id)arg1;
- (void)_serviceStart;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)setDispatchQueue:(id)arg1;

@end
