
@interface FMSystemInfo_ios : FMSystemInfo

- (bool)_boolDeviceInfoForKey:(struct __CFString { }*)arg1;
- (id)_deviceInfoForKey:(struct __CFString { }*)arg1;
- (id)_deviceInfoNumberForKey:(struct __CFString { }*)arg1;
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
- (id)meid;
- (id)osBuildVersion;
- (id)osVersion;
- (id)productName;
- (id)productType;
- (id)serialNumber;
- (id)wifiMacAddress;

@end
