
@protocol AXHARemoteUpdateProtocol <NSObject>

@required

- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(NSString *)arg2;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(NSString *)arg3;

@end
