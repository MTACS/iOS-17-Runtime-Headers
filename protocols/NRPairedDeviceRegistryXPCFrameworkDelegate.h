
@protocol NRPairedDeviceRegistryXPCFrameworkDelegate

@required

- (void)xpcDeviceID:(NSUUID *)arg1 needsPasscode:(NSNumber *)arg2;
- (void)xpcHasNewOOBKey:(NSData *)arg1;

@end
