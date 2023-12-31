
@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (id)btMacAddress;
- (id)chipId;
- (id)deviceClass;
- (id)deviceModelName;
- (id)deviceName;
- (id)deviceUDID;
- (id)ecid;
- (bool)hasSEP;
- (id)imei;
- (bool)isDeviceSecured;
- (bool)isInternalBuild;
- (id)meid;
- (id)osBuildVersion;
- (id)osVersion;
- (id)ownerAccount;
- (id)productName;
- (id)productType;
- (id)serialNumber;
- (id)wifiMacAddress;

@end
