
@protocol HAP2AccessoryServerMetadata <NSObject>

@required

- (unsigned long long)category;
- (unsigned short)configNumber;
- (HAPDeviceID *)deviceID;
- (bool)hasPairings;
- (NSString *)model;
- (NSString *)name;
- (HMFVersion *)protocolVersion;
- (NSData *)setupHash;
- (unsigned short)stateNumber;

@end
