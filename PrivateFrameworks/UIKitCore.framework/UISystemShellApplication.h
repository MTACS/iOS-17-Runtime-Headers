
@interface UISystemShellApplication : UIApplication {
    id  _didFinishLaunchingObserver;
    FBDisplayLayoutTransition * _interfaceOrientationTransition;
}

+ (bool)registerAsSystemApp;
+ (bool)rendersLocally;

- (void).cxx_destruct;
- (long long)_interfaceOrientationRotationDirectionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (bool)_openURL:(id)arg1;
- (bool)_saveSnapshotWithName:(id)arg1;
- (bool)canOpenURL:(id)arg1;
- (bool)handleDoubleHeightStatusBarTapWithStyleOverride:(unsigned long long)arg1;
- (bool)handleStatusBarHoverActionForRegion:(long long)arg1;
- (id)init;
- (bool)isFrontBoard;
- (bool)isSuspended;
- (bool)isSuspendedEventsOnly;
- (bool)isSuspendedUnderLock;
- (void)noteActiveInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithSettings:(id)arg2 fromOrientation:(long long)arg3;
- (void)noteActiveInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)resetIdleTimerAndUndim;
- (long long)startupInterfaceOrientation;

@end
