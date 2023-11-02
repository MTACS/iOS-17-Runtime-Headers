
@interface C2DeviceInfo : NSObject

+ (id)buildVersion;
+ (bool)isAppleInternal;
+ (id)processName;
+ (id)processUUID;
+ (id)processVersion;
+ (id)productName;
+ (id)productType;
+ (id)productVersion;
+ (id)testName;
+ (bool)whitelistedForDisableAPWakeOnIdleConnections;

@end
