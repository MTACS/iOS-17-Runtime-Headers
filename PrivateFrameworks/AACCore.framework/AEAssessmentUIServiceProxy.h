
@interface AEAssessmentUIServiceProxy : NSObject <AEAssessmentUIService, AEXPCConnection> {
    NSObject<OS_dispatch_queue> * _queue;
    AEXPCProxy * _xpcProxy;
}

@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;

+ (id)proxyWithEndpoint:(id)arg1 queue:(id)arg2;
+ (id)serviceProxyWithQueue:(id)arg1;

- (void).cxx_destruct;
- (void)activateWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)animateInWithCompletion:(id /* block */)arg1;
- (void)animateOutWithCompletion:(id /* block */)arg1;
- (void)deactivateWithCompletion:(id /* block */)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
