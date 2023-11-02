
@interface AEActivationPool : NSObject {
    NSArray * _activations;
    id /* block */  _invalidationHandler;
    <AEPerformancePrimitives> * _performancePrimitives;
    <AEPolicyStore> * _policyStore;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;

@end
