
@protocol GCBatteryXPCProxyRemoteClientEndpointInterface <_GCIPCRemoteEndpointInterface>

@required

- (void)newBattery:(GCDeviceBattery *)arg1;
- (void)refreshBattery;

@end
