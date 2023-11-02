
@interface _GEOResourceManifestTileGroupObserverProxy : NSObject {
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)registerObserver:(id)arg1;

@end
