
@protocol MFActivityConditionBuilder <NSObject>

@required

- (long long)maxThermalPressureLevel;
- (float)minBatteryLevel;
- (bool)requireExternalPower;
- (bool)requireLowPowerModeDisabled;
- (bool)requireScreenLocked;
- (bool)requireWiFi;
- (void)setMaxThermalPressureLevel:(long long)arg1;
- (void)setMinBatteryLevel:(float)arg1;
- (void)setRequireExternalPower:(bool)arg1;
- (void)setRequireLowPowerModeDisabled:(bool)arg1;
- (void)setRequireScreenLocked:(bool)arg1;
- (void)setRequireWiFi:(bool)arg1;

@end
