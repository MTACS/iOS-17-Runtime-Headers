
@protocol _GCLogicalDeviceManager <_GCDeviceManager>

@required

- (<_GCLogicalDeviceRegistry> *)deviceRegistry;
- (<_GCLogicalDevice> *)makeDeviceWithConfiguration:(_GCDeviceConfiguration *)arg1 dependencies:(NSSet *)arg2;
- (void)setDeviceRegistry:(id <_GCLogicalDeviceRegistry>)arg1;

@optional

- (void)activateLogicalDevice:(id <_GCLogicalDevice>)arg1;
- (bool)canMakeDeviceWithConfiguration:(_GCDeviceConfiguration *)arg1 dependencies:(NSSet *)arg2;
- (void)deactivateLogicalDevice:(id <_GCLogicalDevice>)arg1;

@end
