
@interface SBFMotionGestureController : NSObject {
    CMGestureManager * _motionGestureManager;
    NSMutableDictionary * _observersByPriority;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addGestureManager;
- (void)_addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)_enumerateObserversByPriority:(id /* block */)arg1;
- (bool)_hasObservers;
- (id)_highestPriorityObservers;
- (void)_notifyObserversOfGesture:(int)arg1;
- (id)_observersForPriority:(unsigned long long)arg1;
- (void)_removeGestureManager;
- (void)_removeGestureObserver:(id)arg1;
- (void)_updateGestureManager;
- (void)addGestureObserver:(id)arg1;
- (void)addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (void)removeGestureObserver:(id)arg1;

@end
