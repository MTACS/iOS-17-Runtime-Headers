
@protocol ACMSystemInfoProtocol

@required

- (NSString *)IPAddress;
- (NSString *)MACAddress;
- (NSString *)deviceModel;
- (bool)isPreRelease;
- (bool)isRetailDevice;
- (bool)isRunningOnModernMobileSystem;
- (bool)isTouchIDAvailable;
- (NSString *)systemVersion;
- (NSString *)uniqueDeviceIdentifier;
- (NSString *)version;

@end
