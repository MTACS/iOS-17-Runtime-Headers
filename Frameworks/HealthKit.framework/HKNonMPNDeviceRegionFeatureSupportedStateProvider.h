
@interface HKNonMPNDeviceRegionFeatureSupportedStateProvider : NSObject <HKDeviceRegionFeatureSupportedStateProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)atrialFibrillationDetectionSupportedStateForCurrentDeviceRegion;
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg1;
+ (unsigned long long)electrocardiogramSupportedOnPhone:(id)arg1 iOSVersionString:(id)arg2;
+ (unsigned long long)electrocardiogramSupportedStateForCurrentDeviceRegion;
+ (unsigned long long)electrocardiogramSupportedStateForDeviceRegion:(id)arg1;

@end
