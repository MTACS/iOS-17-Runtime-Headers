
@interface SBBluetoothAccessoryLowPowerAlertItem : SBAlertItem {
    NSString * _accessoryName;
    long long  _batteryLevel;
}

- (void).cxx_destruct;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)initWithAccessory:(id)arg1 batteryLevel:(long long)arg2;
- (bool)wakeDisplay;

@end
