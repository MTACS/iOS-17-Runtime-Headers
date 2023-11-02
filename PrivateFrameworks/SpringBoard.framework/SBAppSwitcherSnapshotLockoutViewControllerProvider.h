
@interface SBAppSwitcherSnapshotLockoutViewControllerProvider : NSObject {
    NSMutableArray * _availableControllers;
}

- (void).cxx_destruct;
- (void)_receivedMemoryWarning:(id)arg1;
- (id)blockingViewControllerForBundleIdentifier:(id)arg1 screenTimePolicy:(long long)arg2;
- (void)dealloc;
- (id)init;
- (void)recycleBlockingViewController:(id)arg1;

@end
