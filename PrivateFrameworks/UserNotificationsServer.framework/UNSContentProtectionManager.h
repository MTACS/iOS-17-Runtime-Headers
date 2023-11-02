
@interface UNSContentProtectionManager : NSObject {
    long long  _contentProtectionState;
    int  _notifyToken;
    UNSKeyedObservable * _observable;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _unlockedSinceBoot;
}

- (void).cxx_destruct;
- (void)_queue_adjustContentProtectionStateWithBlock:(id /* block */)arg1;
- (long long)_queue_keyBagLockState;
- (long long)_queue_observedState;
- (void)addContentProtectionObserver:(id)arg1;
- (id)classCStrategy;
- (id)classCStrategyExcludedFromBackup;
- (id)classDStrategy;
- (id)classDStrategyExcludedFromBackup;
- (id)contentProtectionStrategyForMinimumProtection:(id)arg1 excludedFromBackup:(bool)arg2;
- (void)dealloc;
- (bool)deviceUnlockedSinceBoot;
- (id)init;
- (bool)isProtectedDataAvailable;
- (long long)observedState;
- (void)removeContentProtectionObserver:(id)arg1;

@end
