
@interface AEDeactivationPool : NSObject {
    <AEPerformancePrimitives> * _performancePrimitives;
    NSArray * _persistentDeactivations;
    <AEPolicyStore> * _policyStore;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;

@end
