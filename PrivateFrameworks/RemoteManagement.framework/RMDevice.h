
@interface RMDevice : NSObject

@property (nonatomic, readonly) NSString *UDID;
@property (nonatomic, readonly) bool hasSEP;
@property (nonatomic, readonly) bool locked;
@property (nonatomic, readonly) NSString *modelFamily;
@property (nonatomic, readonly) NSString *modelIdentifier;
@property (nonatomic, readonly) NSString *modelMarketingName;
@property (nonatomic, readonly) NSString *modelNumber;
@property (nonatomic, readonly) NSString *operatingSystem;
@property (nonatomic, readonly) NSString *operatingSystemBuildVersion;
@property (nonatomic, readonly) NSString *operatingSystemMarketingName;
@property (nonatomic, readonly) NSString *operatingSystemSupplementalBuildVersion;
@property (nonatomic, readonly) NSString *operatingSystemSupplementalExtraVersion;
@property (nonatomic, readonly) NSString *operatingSystemVersion;
@property (nonatomic, readonly) NSString *serialNumber;

+ (id)currentDevice;

- (id)UDID;
- (bool)hasSEP;
- (bool)locked;
- (id)modelFamily;
- (id)modelIdentifier;
- (id)modelMarketingName;
- (id)modelNumber;
- (id)operatingSystem;
- (id)operatingSystemBuildVersion;
- (id)operatingSystemMarketingName;
- (id)operatingSystemSupplementalBuildVersion;
- (id)operatingSystemSupplementalExtraVersion;
- (id)operatingSystemVersion;
- (id)serialNumber;

@end
