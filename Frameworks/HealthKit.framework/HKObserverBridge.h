
@interface HKObserverBridge : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _observerBlocksByKeyByObserver;
    NSMutableDictionary * _observersByKey;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)makeAndRegisterBridgedObserverForKey:(id)arg1 handle:(id)arg2;
- (bool)notifyObserversOfChangeForKey:(id)arg1 newValue:(id)arg2;
- (void)registerObserver:(id)arg1 forKey:(id)arg2 newValueHandler:(id /* block */)arg3;
- (void)unregisterBridgedObserver:(id)arg1 forKey:(id)arg2;
- (void)unregisterObserver:(id)arg1 forKey:(id)arg2;

@end
