
@interface DEDUtils : NSObject

+ (id)checkDefaultsForOverride:(id)arg1;
+ (id)deriveMacDeviceClassForProductType:(id)arg1;
+ (id)deviceClass;
+ (id)deviceClassForProductType:(id)arg1;
+ (id)deviceColor;
+ (id)deviceEnclosureColor;
+ (id)deviceHardwareCodename;
+ (int)deviceHomeButtonType;
+ (id)deviceModel;
+ (id)deviceName;
+ (id)deviceProductType;
+ (id)deviceSerialNumber;
+ (id)deviceUniformTypeIdentifier;
+ (bool)isDataClassBAvailable;
+ (bool)isDebugRequestsEnabled;
+ (bool)isInternalInstall;
+ (id)modelForProductType:(id)arg1;
+ (id)osBuild;
+ (id)platform;
+ (id)sharedLog;
+ (id)uniqueDeviceSpecifier;

@end
