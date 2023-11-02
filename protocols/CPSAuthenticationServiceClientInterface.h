
@protocol CPSAuthenticationServiceClientInterface <NSObject>

@required

- (void)authenticationSessionDeviceStartedAuthentication:(CPSDevice *)arg1;
- (void)authenticationSessionDeviceTappedNotification:(CPSDevice *)arg1;
- (void)authenticationSessionDidFailWithError:(NSError *)arg1;
- (void)authenticationSessionDidFinishWithResponse:(CPSAuthenticationResponse *)arg1;

@end
