
@interface SBLaunchSnapshotWaitingAlertItem : SBAlertItem

- (bool)allowLockScreenDismissal;
- (bool)allowMenuButtonDismissal;
- (bool)behavesSuperModally;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (bool)forcesModalAlertAppearance;
- (bool)reappearsAfterLock;
- (bool)reappearsAfterUnlock;
- (bool)shouldShowInLockScreen;

@end
