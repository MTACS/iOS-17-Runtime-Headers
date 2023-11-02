
@interface SKStepBasicConfigClient : NSObject <SKStepable> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    bool  _responseReceived;
    int  _runState;
    id /* block */  _skCompletionHandler;
    <CUMessaging> * _skMessaging;
    SKSetupBase * _skSetupObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ skCompletionHandler;
@property (nonatomic, retain) <CUMessaging> *skMessaging;
@property (nonatomic) SKSetupBase *skSetupObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeWithError:(id)arg1;
- (void)_invalidated;
- (void)_run;
- (bool)_runBasicConfigStart;
- (void)activate;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)setDispatchQueue:(id)arg1;
- (void)setSkCompletionHandler:(id /* block */)arg1;
- (void)setSkMessaging:(id)arg1;
- (void)setSkSetupObject:(id)arg1;
- (id /* block */)skCompletionHandler;
- (id)skMessaging;
- (id)skSetupObject;

@end
