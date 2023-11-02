
@protocol HDDevicePowerObserver <NSObject>

@required

- (void)devicePowerMonitor:(HDDevicePowerMonitor *)arg1 primaryPowerSourceIsCharging:(bool)arg2;

@end
