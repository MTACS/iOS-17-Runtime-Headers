
@protocol AVOutputDeviceConfigurationRetrieval <NSObject>

@required

- (bool)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (NSString *)deviceID;
- (NSString *)deviceName;
- (NSString *)devicePassword;
- (NSData *)devicePublicKey;
- (bool)onlyAllowsConnectionsFromPeersInHomeGroup;
- (NSArray *)peersInHomeGroup;

@end
