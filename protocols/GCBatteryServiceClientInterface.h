
@protocol GCBatteryServiceClientInterface

@required

- (void)updateBattery:(unsigned char)arg1 isCharging:(bool)arg2;

@end
