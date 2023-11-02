
@interface DMCMobileGestalt : NSObject

+ (id)_overridableGestaltForKey:(struct __CFString { }*)arg1 expectedClass:(Class)arg2;
+ (id)availableCapacity;
+ (id)buildVersion;
+ (id)deviceCapacity;
+ (id)deviceClass;
+ (id)deviceColor;
+ (id)deviceUDID;
+ (id)diskCapacity;
+ (id)diskUsage;
+ (bool)hasBattery;
+ (bool)hasCellularDataCapability;
+ (bool)hasInternetTetheringCapability;
+ (bool)hasTelephonyCapability;
+ (bool)isAppleTV;
+ (bool)isHomePod;
+ (bool)isPad;
+ (bool)isPhone;
+ (bool)isWatch;
+ (id)marketingVersion;
+ (id)modelNumber;
+ (id)productName;
+ (id)productType;
+ (id)regionCode;
+ (id)regionInfo;
+ (id)serialNumber;
+ (id)supplementalBuildVersion;
+ (id)supplementalMarketingVersion;
+ (id)supplementalMarketingVersionExtra;

@end
