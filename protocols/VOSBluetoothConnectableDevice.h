
@protocol VOSBluetoothConnectableDevice <NSObject>

@required

- (NSString *)address;
- (void)connect;
- (bool)connected;
- (bool)connecting;
- (void)disconnect;
- (NSString *)identifier;
- (NSString *)name;
- (bool)paired;
- (void)unpair;

@end
