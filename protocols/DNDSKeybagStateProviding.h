
@protocol DNDSKeybagStateProviding <NSObject>

@required

- (void)addObserver:(id <DNDSKeybagStateObserver>)arg1;
- (void)addPriorityObserver:(id <DNDSKeybagStateObserver>)arg1;
- (bool)hasUnlockedSinceBoot;
- (bool)hasUnlockedSinceBootForObserver:(id <DNDSKeybagStateObserver>)arg1;
- (bool)isLocked;
- (void)removeObserver:(id <DNDSKeybagStateObserver>)arg1;

@end
