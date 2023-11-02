
@interface CRComputeDeviceUtilities : NSObject

+ (id)allComputeDevices;
+ (unsigned long long)computeDeviceTypeForOptions:(id)arg1 mtlDevice:(id*)arg2;
+ (id)computeDevices:(id)arg1 ofTypes:(unsigned long long)arg2;
+ (long long)mlComputeUnitFromComputeDeviceType:(unsigned long long)arg1;

@end
