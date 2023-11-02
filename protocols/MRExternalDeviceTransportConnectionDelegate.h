
@protocol MRExternalDeviceTransportConnectionDelegate <NSObject>

@required

- (void)transport:(MRExternalDeviceTransportConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)transportDidClose:(MRExternalDeviceTransportConnection *)arg1 error:(NSError *)arg2;

@end
