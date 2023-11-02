
@interface _GEOExperimentConfigurationObserverProxy : NSObject {
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)description;
- (void)forEachObserver:(id /* block */)arg1;
- (id)init;
- (unsigned long long)observersCount;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
