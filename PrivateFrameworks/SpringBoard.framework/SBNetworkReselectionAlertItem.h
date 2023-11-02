
@interface SBNetworkReselectionAlertItem : SBPhoneAlertItem

- (void)_showPrefs;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)initWithSlot:(long long)arg1;
- (id)lockLabel;
- (void)performUnlockAction;
- (id)shortLockLabel;

@end
