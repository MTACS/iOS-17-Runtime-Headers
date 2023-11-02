
@interface PCUserDefaultsBroadcaster : NSObject {
    NSMutableDictionary * _userDefaultsBroadcasted;
}

+ (id)sharedInstance;

- (void)addObserver:(id)arg1 ofUserDefaults:(id)arg2;
- (void)dealloc;
- (bool)hasObserversOfUserDefault:(id)arg1;
- (id)init;
- (bool)isWeakReferenceHashTableEmpty:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observersForUserDefault:(id)arg1;
- (void)removeObserver:(id)arg1 forUserDefault:(id)arg2 fromObservers:(id)arg3;
- (void)removeObserver:(id)arg1 ofUserDefaults:(id)arg2;
- (void)removeObserversForUserDefault:(id)arg1;

@end
