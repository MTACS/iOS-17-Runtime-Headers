
@interface SBRestoreFailureAlertItem : SBAlertItem

- (void)_rebootNow;
- (bool)allowInSetup;
- (bool)allowMenuButtonDismissal;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (bool)forcesModalAlertAppearance;
- (void)performUnlockAction;
- (void)restartSystemEvent;
- (bool)shouldShowInLockScreen;
- (bool)suppressForKeynote;

@end
