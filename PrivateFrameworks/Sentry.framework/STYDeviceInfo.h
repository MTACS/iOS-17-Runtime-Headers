
@interface STYDeviceInfo : NSObject

+ (unsigned long long)_determineBootVolumeType;
+ (id)_determineHardwareModel;
+ (unsigned long long)bootVolumeType;
+ (id)hardwareModel;
+ (bool)isAppleInternal;
+ (bool)isMemoryConstrained;
+ (id)osBuild;

@end
