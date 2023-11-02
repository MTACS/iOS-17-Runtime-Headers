
@interface SBApplicationLaunchNotifyAirplaneModeAlertItem : SBApplicationLaunchNotifyAlertItem {
    bool  _usesCellNetwork;
}

- (id)_createSystemApertureElement;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)initWithApplication:(id)arg1;

@end
