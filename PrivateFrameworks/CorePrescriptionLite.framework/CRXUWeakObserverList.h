
@interface CRXUWeakObserverList : NSObject {
    NSHashTable * _observers;
}

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (id)observersRespondingToSelector:(SEL)arg1;
- (void)removeObserver:(id)arg1;

@end
