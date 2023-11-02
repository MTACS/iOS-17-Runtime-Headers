
@interface SBPearlInterlockAlertItem : SBAlertItem

- (id)_message;
- (id)_title;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (bool)reappearsAfterLock;
- (bool)shouldShowInLockScreen;

@end
