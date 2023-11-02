
@interface NPKObserverManager : NSObject {
    NSMutableDictionary * _observersTables;
    NSMutableIndexSet * _priorityIndexSet;
}

- (void).cxx_destruct;
- (void)_enumerateObserversTablesCopy:(bool)arg1 withBlock:(id /* block */)arg2;
- (void)_enumerateObserversUsingBlock:(id /* block */)arg1;
- (void)_registerObserver:(id)arg1;
- (void)_registerObserver:(id)arg1 withRelativePriority:(unsigned long long)arg2;
- (void)_unregisterObserver:(id)arg1;
- (void)enumerateObserversUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)registerObserver:(id)arg1;
- (void)registerObserver:(id)arg1 withRelativePriority:(unsigned long long)arg2;
- (void)unregisterObserver:(id)arg1;

@end
