
@interface BKSTerminationAssertionObserverManager : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMutableSet * _launchPreventedBundleIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBSProcessMonitor * _monitor;
    bool  _monitorIsReady;
    NSMutableSet * _observers;
}

- (void).cxx_destruct;
- (void)_createMonitor;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (unsigned long long)efficacyForBundleID:(id)arg1;
- (bool)hasTerminationAssertionForBundleID:(id)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
