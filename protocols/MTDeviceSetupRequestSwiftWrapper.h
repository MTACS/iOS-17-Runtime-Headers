
@protocol MTDeviceSetupRequestSwiftWrapper <NSObject>

@required

- (NSString *)ecosystemName;
- (NSData *)serializedAsData;
- (MTRSetupPayload *)setupPayload;
- (bool)shouldScanNetworks;
- (bool)shouldShowDeviceWithUUID:(NSUUID *)arg1 vendorID:(NSNumber *)arg2 productID:(NSNumber *)arg3 serialNumber:(NSString *)arg4 rootPublicKey:(NSData *)arg5 nodeID:(NSNumber *)arg6;
- (MTSDeviceSetupTopology *)topology;

@end
