
@interface GEOKeyBagNotification : NSObject {
    int  _currentState;
    int  _notifyTokenAfterFirstUnlock;
    int  _notifyTokenBeforeFirstUnlock;
}

@property (nonatomic, readonly) int state;

+ (bool)canAccessFilesWithProtection:(unsigned long long)arg1;
+ (id)sharedObject;

- (void)_statusChangedAfterFirstUnlock;
- (void)_statusChangedBeforeFirstUnlock;
- (bool)addDataDidBecomeAvailableAfterFirstUnlockObserver:(id)arg1;
- (bool)canAccessFilesWithProtection:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (void)runAfterFirstUnlock:(id)arg1 block:(id /* block */)arg2;
- (int)state;
- (void)updateState;

@end
