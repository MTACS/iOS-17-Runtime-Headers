
@protocol _GCIPCObjectRegistry <NSObject>

@required

- (<_GCIPCObject> *)IPCObjectWithIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg1;
- (void)registerIPCObject:(id <_GCIPCObject>)arg1;

@end
