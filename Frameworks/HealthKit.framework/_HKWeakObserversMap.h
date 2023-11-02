
@interface _HKWeakObserversMap : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKMultimap * _map;
}

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forKey:(id)arg2;
- (void)addObserver:(id)arg1 queue:(id)arg2 forKey:(id)arg3;
- (id)init;
- (void)notifyObserversOfKey:(id)arg1 handler:(id /* block */)arg2;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forKey:(id)arg2;
- (id)test_observersForKey:(id)arg1;

@end
