
@interface AEActivePolicySession : NSObject <AEInvalidationRouterDelegate, AEPolicySession> {
    NSArray * _activation;
    id /* block */  _invalidationHandler;
    AEInvalidationRouter * _invalidationRouter;
    <AEPerformancePrimitives> * _performancePrimitives;
    NSArray * _persistentDeactivations;
    <AEPolicyStore> * _policyStore;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ invalidationHandler;

+ (id)sessionWithPolicyStore:(id)arg1 performancePrimitives:(id)arg2 invalidationRouter:(id)arg3 activations:(id)arg4 persistentDeactivations:(id)arg5 queue:(id)arg6;

- (void).cxx_destruct;
- (void)deactivateWithCompletion:(id /* block */)arg1;
- (id /* block */)invalidationHandler;
- (void)invalidationRouter:(id)arg1 didReceiveInvalidationError:(id)arg2;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
