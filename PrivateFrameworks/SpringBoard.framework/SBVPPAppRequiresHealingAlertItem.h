
@interface SBVPPAppRequiresHealingAlertItem : SBAlertItem {
    SBApplication * _application;
}

- (void).cxx_destruct;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (bool)dismissOnLock;
- (id)initWithApplication:(id)arg1;
- (bool)shouldShowInLockScreen;

@end
