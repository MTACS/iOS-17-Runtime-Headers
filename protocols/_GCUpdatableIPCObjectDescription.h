
@protocol _GCUpdatableIPCObjectDescription <_GCIPCObjectDescription>

@required

- (bool)update:(id <_GCIPCObject>)arg1 withContext:(id <_GCIPCObjectMaterializationContext>)arg2;

@end
