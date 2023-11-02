
@interface _GCMutableDeviceConfiguration : _GCDeviceConfiguration

@property (copy) <NSObject><NSCopying><NSSecureCoding> *deviceBuilderIdentifier;
@property (copy) NSArray *deviceDependencies;
@property (copy) <NSObject><NSCopying><NSSecureCoding> *deviceIdentifier;
@property (copy) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property unsigned long long priority;
@property (getter=isTransient) bool transient;

- (id)_initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setDeviceBuilderIdentifier:(id)arg1;
- (void)setDeviceDependencies:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setTransient:(bool)arg1;
- (void)setValue:(id)arg1 forAttribute:(id)arg2;

@end
