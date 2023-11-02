
@interface VNObservationsCache : NSObject {
    NSMapTable * _observationsCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observationsCacheLock;
}

- (void).cxx_destruct;
- (id)init;
- (id)observationsAcceptedByRequest:(id)arg1 testedKeyHandler:(id /* block */)arg2;
- (id)observationsForKey:(id)arg1;
- (void)setObservations:(id)arg1 forKey:(id)arg2;

@end
