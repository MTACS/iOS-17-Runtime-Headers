
@protocol _GCIPCObjectDescription <_GCObjectDescription>

@required

- (<NSObject><NSCopying><NSSecureCoding> *)identifier;
- (<_GCIPCObject> *)materializeWithContext:(id <_GCIPCObjectMaterializationContext>)arg1;

@end
