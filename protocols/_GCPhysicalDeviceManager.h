
@protocol _GCPhysicalDeviceManager <_GCDeviceManager>

@required

- (void)claimHIDService:(_GCHIDServiceInfo *)arg1;
- (<_GCPhysicalDeviceRegistry> *)deviceRegistry;
- (NSNumber *)matchHIDService:(_GCHIDServiceInfo *)arg1;
- (void)relinquishHIDService:(_GCHIDServiceInfo *)arg1;
- (void)setDeviceRegistry:(id <_GCPhysicalDeviceRegistry>)arg1;

@optional

- (bool)acceptDriverConnection:(id <_GCDeviceDriverConnection>)arg1 forHIDService:(_GCHIDServiceInfo *)arg2;
- (bool)acceptFilterConnection:(id <_GCDeviceDriverConnection>)arg1 forHIDService:(_GCHIDServiceInfo *)arg2;

@end
