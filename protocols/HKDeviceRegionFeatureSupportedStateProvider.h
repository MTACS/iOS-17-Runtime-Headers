
@protocol HKDeviceRegionFeatureSupportedStateProvider <NSObject>

@required

+ (unsigned long long)atrialFibrillationDetectionSupportedStateForCurrentDeviceRegion;
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForDeviceRegion:(NRDevice *)arg1;
+ (unsigned long long)electrocardiogramSupportedOnPhone:(NRDevice *)arg1 iOSVersionString:(NSString *)arg2;
+ (unsigned long long)electrocardiogramSupportedStateForCurrentDeviceRegion;
+ (unsigned long long)electrocardiogramSupportedStateForDeviceRegion:(NRDevice *)arg1;

@end
