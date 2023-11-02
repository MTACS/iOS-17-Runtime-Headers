
@interface SBLegacyTVRemoteAppLaunchDeniedAlertItem : SBAlertItem

- (id)_supportURLString;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (bool)dismissOnLock;
- (bool)ignoreIfAlreadyDisplaying;

@end
