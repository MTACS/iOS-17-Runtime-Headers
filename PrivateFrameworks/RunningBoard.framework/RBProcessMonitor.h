
@interface RBProcessMonitor : NSObject <RBProcessMonitoring, RBStateCapturing> {
    <RBHistoricalStatisticsMaintaining> * _historicalStatistics;
    NSMutableSet * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSSet * _preventLaunchPredicates;
    RBProcessIndex * _processIndex;
    RBProcessMap * _publishedState;
    NSObject<OS_dispatch_queue> * _queue;
    <RBStateCaptureManaging> * _stateCaptureManager;
    RBProcessMap * _stateMap;
    NSCountedSet * _suppressedIdentities;
    RBProcessMap * _suppressedState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *monitorSerializationQueue;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)captureState;
- (id)description;
- (void)didAddProcess:(id)arg1 withState:(id)arg2;
- (void)didRemoveProcess:(id)arg1 withState:(id)arg2;
- (void)didResolvePreventLaunchPredicates:(id)arg1;
- (void)didUpdateProcessStates:(id)arg1;
- (id)initWithStateCaptureManager:(id)arg1 historialStatistics:(id)arg2;
- (id)monitorSerializationQueue;
- (id)preventLaunchPredicates;
- (void)removeObserver:(id)arg1;
- (void)removeStateForProcessIdentity:(id)arg1;
- (id)stateCaptureTitle;
- (id)statesMatchingConfiguration:(id)arg1;
- (id)statesMatchingPredicate:(id)arg1;
- (void)suppressUpdatesForIdentity:(id)arg1;
- (void)trackStateForProcessIdentity:(id)arg1;
- (void)unsuppressUpdatesForIdentity:(id)arg1;

@end
