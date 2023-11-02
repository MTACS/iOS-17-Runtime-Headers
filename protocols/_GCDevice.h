
@protocol _GCDevice <NSObject>

@required

- (NSSet *)components;
- (<NSObject><NSCopying><NSSecureCoding> *)identifier;
- (<_GCDeviceManager> *)manager;
- (id)propertyForKey:(NSString *)arg1;

@end
