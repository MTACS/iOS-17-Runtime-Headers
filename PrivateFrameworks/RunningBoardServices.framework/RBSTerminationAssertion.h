
@interface RBSTerminationAssertion : NSObject {
    RBSProcessPredicate * _allow;
    RBSAssertion * _assertion;
    bool  _deathMonitorsSetUp;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBSProcessMonitor * _monitor;
    NSHashTable * _observers;
    bool  _observersHaveBeenNotified;
    RBSProcessPredicate * _predicate;
    bool  _processExists;
    NSMutableSet * _runningHandles;
    <RBSServiceLocalProtocol> * _service;
    unsigned long long  _state;
    RBSTerminateContext * _terminateContext;
}

@property (nonatomic, readonly) bool processExists;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (bool)acquireWithError:(out id*)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithPredicate:(id)arg1 context:(id)arg2;
- (id)initWithPredicate:(id)arg1 context:(id)arg2 allowLaunch:(id)arg3;
- (id)initWithPredicate:(id)arg1 context:(id)arg2 allowLaunch:(id)arg3 service:(id)arg4;
- (id)initWithTarget:(id)arg1 context:(id)arg2;
- (void)invalidate;
- (bool)invalidateWithError:(out id*)arg1;
- (bool)isValid;
- (bool)processExists;
- (void)removeObserver:(id)arg1;

@end
