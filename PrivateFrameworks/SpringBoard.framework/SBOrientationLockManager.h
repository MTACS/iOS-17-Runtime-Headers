
@interface SBOrientationLockManager : NSObject {
    NSMutableSet * _lockOverrideReasons;
    long long  _previousLockedOrientation;
    struct __CFRunLoopObserver { } * _runLoopObserver;
    NSMutableDictionary * _shimmedDeviceOrientationAssertions;
    long long  _userLockedOrientation;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addLockOverrideReason:(id)arg1 orientation:(long long)arg2 force:(bool)arg3;
- (void)_beginShimmingForReason:(id)arg1;
- (void)_endShimmingForReason:(id)arg1;
- (void)_handler_runLoopObserverDispose;
- (void)_removeLockOverrideReason:(id)arg1;
- (void)_setupRunLoopObserverIfNecessaryForOrientation:(long long)arg1 andInitialLockState:(bool)arg2;
- (void)_updateLockStateWithChanges:(id /* block */)arg1;
- (void)_updateLockStateWithOrientation:(long long)arg1 forceUpdateHID:(bool)arg2 changes:(id /* block */)arg3;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)deviceOrientationAsFarAsAppsAreConcerned;
- (long long)effectiveLockedOrientation;
- (void)enableLockOverrideForReason:(id)arg1 forceOrientation:(long long)arg2;
- (void)enableLockOverrideForReason:(id)arg1 suggestOrientation:(long long)arg2;
- (id)init;
- (bool)isEffectivelyLocked;
- (bool)isUserLocked;
- (void)lock;
- (void)lock:(long long)arg1;
- (bool)lockOverrideEnabled;
- (void)restoreStateFromPrefs;
- (void)setLockOverrideEnabled:(bool)arg1 forReason:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)unlock;
- (void)updateLockOverrideForCurrentDeviceOrientation;
- (long long)userLockOrientation;

@end
