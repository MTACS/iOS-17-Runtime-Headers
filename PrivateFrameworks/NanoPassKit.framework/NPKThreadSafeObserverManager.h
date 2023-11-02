
@interface NPKThreadSafeObserverManager : NPKObserverManager {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
}

- (void)enumerateObserversUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)registerObserver:(id)arg1;
- (void)registerObserver:(id)arg1 withRelativePriority:(unsigned long long)arg2;
- (void)unregisterObserver:(id)arg1;

@end
