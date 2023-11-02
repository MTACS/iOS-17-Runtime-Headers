
@protocol _GCDeviceClient

@required

- (<_GCIPCObjectRegistry> *)IPCObjectRegistry;
- (<_GCIPCServiceRegistry> *)IPCServiceRegistry;
- (id)addInvalidationHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)bundleIdentifier;
- (bool)isInvalid;
- (int)processIdentifier;

@end
