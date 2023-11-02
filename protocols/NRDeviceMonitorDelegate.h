
@protocol NRDeviceMonitorDelegate <NSObject>

@optional

- (void)deviceHasUnpairedBluetooth:(NRDeviceMonitor *)arg1;
- (void)deviceIsAsleepDidChange:(NRDeviceMonitor *)arg1 isAsleep:(bool)arg2;
- (void)deviceIsClassCConnectedDidChange:(NRDeviceMonitor *)arg1 isClassCConnected:(bool)arg2;
- (void)deviceIsCloudConnectedDidChange:(NRDeviceMonitor *)arg1 isCloudConnected:(bool)arg2;
- (void)deviceIsConnectedDidChange:(NRDeviceMonitor *)arg1 isConnected:(bool)arg2;
- (void)deviceIsEnabledDidChange:(NRDeviceMonitor *)arg1 isEnabled:(bool)arg2;
- (void)deviceIsNearbyDidChange:(NRDeviceMonitor *)arg1 isNearby:(bool)arg2;
- (void)deviceIsRegisteredDidChange:(NRDeviceMonitor *)arg1 isRegistered:(bool)arg2;
- (void)deviceLinkTypeDidChange:(NRDeviceMonitor *)arg1 linkType:(unsigned char)arg2;
- (void)deviceLinkTypeDidChange:(NRDeviceMonitor *)arg1 linkType:(unsigned char)arg2 linkSubtype:(unsigned char)arg3;
- (void)deviceProxyServiceInterfaceNameDidChange:(NRDeviceMonitor *)arg1 interfaceName:(NSString *)arg2;
- (void)deviceThermalPressureLevelDidChange:(NRDeviceMonitor *)arg1 thermalPressureLevel:(int)arg2;

@end
