
@interface SBTripleClickSOSMigrationAlertItem : SBAlertItem

- (bool)allowInSetup;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (bool)forcesModalAlertAppearance;
- (bool)shouldShowInLockScreen;

@end
