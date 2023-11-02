
@protocol _GCPhysicalDeviceRegistry <_GCDeviceRegistry>

@required

- (void)deviceManager:(id <_GCPhysicalDeviceManager>)arg1 deviceDidConnect:(id <_GCPhysicalDevice>)arg2;
- (void)deviceManager:(id <_GCPhysicalDeviceManager>)arg1 deviceDidDisconnect:(id <_GCPhysicalDevice>)arg2;

@end
