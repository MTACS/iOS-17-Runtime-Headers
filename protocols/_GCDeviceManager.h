
@protocol _GCDeviceManager <NSObject>

@required

- (<_GCDeviceRegistry> *)deviceRegistry;
- (<NSObject><NSCopying><NSSecureCoding> *)identifier;
- (void)setDeviceRegistry:(id <_GCDeviceRegistry>)arg1;

@end
