
@protocol NPKIDVRemoteDeviceServiceServerDelegate <NSObject>

@required

- (void)identityRemoteDeviceServiceServer:(NPKIDVRemoteDeviceServiceServer *)arg1 didReceiveEvent:(unsigned long long)arg2 fromRemoteDeviceWithID:(NSString *)arg3;

@end
