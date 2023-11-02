
@protocol NFHostEmulationSessionCallbacks <NSObject, NFSessionCallbackInterface>

@required

- (void)didConnectToReader;
- (void)didDisconnectFromReader;
- (void)didReceiveAPDU:(NSData *)arg1;
- (void)didReceiveField:(NFFieldNotification *)arg1;

@end
