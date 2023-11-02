
@protocol _GCDefaultPhysicalDeviceDelegate <NSObject>

@optional

- (void)physicalDevice:(void *)arg1 getAdaptiveTriggersStatusesWithReply:(void *)arg2; // needs 2 arg types, found 7: _GCDefaultPhysicalDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)physicalDevice:(void *)arg1 getBatteryWithReply:(void *)arg2; // needs 2 arg types, found 7: _GCDefaultPhysicalDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GCDeviceBattery *, void*
- (void)physicalDevice:(void *)arg1 getLightWithReply:(void *)arg2; // needs 2 arg types, found 7: _GCDefaultPhysicalDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GCDeviceLight *, void*
- (void)physicalDevice:(void *)arg1 getSensorsActiveWithReply:(void *)arg2; // needs 2 arg types, found 7: _GCDefaultPhysicalDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (id)physicalDevice:(_GCDefaultPhysicalDevice *)arg1 propertyForKey:(NSString *)arg2 isFinal:(bool*)arg3;
- (void)physicalDevice:(_GCDefaultPhysicalDevice *)arg1 setAdaptiveTriggersPayload:(GCDeviceAdaptiveTriggersPayload *)arg2 forIndex:(int)arg3;
- (void)physicalDevice:(_GCDefaultPhysicalDevice *)arg1 setIndicatedPlayerIndex:(long long)arg2;
- (void)physicalDevice:(_GCDefaultPhysicalDevice *)arg1 setLight:(GCDeviceLight *)arg2;
- (void)physicalDevice:(_GCDefaultPhysicalDevice *)arg1 setSensorsActive:(bool)arg2;
- (NSArray *)physicalDeviceGetHapticCapabilities:(_GCDefaultPhysicalDevice *)arg1;
- (GCHapticCapabilityGraph *)physicalDeviceGetHapticCapabilityGraph:(_GCDefaultPhysicalDevice *)arg1;
- (long long)physicalDeviceGetIndicatedPlayerIndex:(_GCDefaultPhysicalDevice *)arg1;
- (bool)physicalDeviceSupportsMotion:(_GCDefaultPhysicalDevice *)arg1;
- (bool)physicalDeviceUsesACHomeForMenu:(_GCDefaultPhysicalDevice *)arg1;

@end
