
@interface ACMSystemInfo : NSObject <ACMSystemInfoProtocol>

@property (nonatomic, readonly) NSString *IPAddress;
@property (nonatomic, readonly) NSString *MACAddress;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) bool isPreRelease;
@property (nonatomic, readonly) bool isRetailDevice;
@property (nonatomic, readonly) bool isRunningOnModernMobileSystem;
@property (nonatomic, readonly) bool isTouchIDAvailable;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) NSString *uniqueDeviceIdentifier;
@property (nonatomic, readonly) NSString *version;

- (id)IPAddress;
- (id)MACAddress;
- (id)deviceModel;
- (bool)isPreRelease;
- (bool)isRetailDevice;
- (bool)isRunningOnModernMobileSystem;
- (bool)isTouchIDAvailable;
- (id)previousVersionUUID;
- (id)systemVersion;
- (id)uniqueDeviceIdentifier;
- (id)version;

@end
