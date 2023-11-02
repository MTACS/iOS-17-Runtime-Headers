
@protocol RBProcessMonitoring <NSObject>

@required

- (void)addObserver:(id <RBProcessMonitorObserving>)arg1;
- (void)didAddProcess:(RBProcess *)arg1 withState:(RBProcessState *)arg2;
- (void)didRemoveProcess:(RBProcess *)arg1 withState:(RBProcessState *)arg2;
- (void)didResolvePreventLaunchPredicates:(NSSet *)arg1;
- (void)didUpdateProcessStates:(RBProcessStateChangeSet *)arg1;
- (NSObject<OS_dispatch_queue> *)monitorSerializationQueue;
- (NSSet *)preventLaunchPredicates;
- (void)removeObserver:(id <RBProcessMonitorObserving>)arg1;
- (void)removeStateForProcessIdentity:(RBSProcessIdentity *)arg1;
- (NSArray *)statesMatchingConfiguration:(RBSProcessMonitorConfiguration *)arg1;
- (NSArray *)statesMatchingPredicate:(RBSProcessPredicate *)arg1;
- (void)suppressUpdatesForIdentity:(RBSProcessIdentity *)arg1;
- (void)trackStateForProcessIdentity:(RBSProcessIdentity *)arg1;
- (void)unsuppressUpdatesForIdentity:(RBSProcessIdentity *)arg1;

@end
