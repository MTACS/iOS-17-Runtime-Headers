
@interface SBAppProfileNeedsValidationAlertItem : SBAlertItem {
    SBApplication * _application;
}

- (void).cxx_destruct;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (bool)dismissOnLock;
- (bool)forcesModalAlertAppearance;
- (id)initWithApp:(id)arg1;
- (bool)shouldShowInLockScreen;

@end
