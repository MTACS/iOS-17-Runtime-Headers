
@interface HKNanoRegistryDeviceUtility : NSObject

+ (id)activeNonFamilySetupDevice;
+ (id)activePairedDeviceHousingColor;
+ (id)activePairedDeviceModelNumber;
+ (id)activePairedDeviceProductType;
+ (id)activePairedDeviceRegionInfo;
+ (id)activePairedDeviceSystemBuildVersion;
+ (id)deviceHousingColor:(id)arg1;
+ (id)electrocardiogramV2AvailableRegionsForDevice:(id)arg1;
+ (bool)isDeviceSeries4:(id)arg1;
+ (id)modelNumberForDevice:(id)arg1;
+ (id)productTypeForDevice:(id)arg1;
+ (id)regionInfoForDevice:(id)arg1;
+ (id)systemBuildVersionForDevice:(id)arg1;
+ (unsigned int)systemVersionForDevice:(id)arg1;

@end
