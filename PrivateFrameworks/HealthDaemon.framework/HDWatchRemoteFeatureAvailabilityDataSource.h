
@interface HDWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource> {
    NRDevice * _device;
    NSString * _onboardingCountryCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *onboardingCountryCode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentDeviceClass;
- (id)iOSBuildVersion;
- (struct { long long x1; long long x2; long long x3; })iOSVersion;
- (id)initWithDevice:(id)arg1;
- (id)onboardingCountryCode;
- (void)setOnboardingCountryCode:(id)arg1;
- (struct { long long x1; long long x2; long long x3; })watchAtrialFibrillationDetectionVersion;
- (id)watchBuildType;
- (id)watchModelNumber;
- (id)watchOSBuildVersion;
- (struct { long long x1; long long x2; long long x3; })watchOSVersion;
- (id)watchProductType;
- (id)watchRegion;
- (id)watchRegionInfo;

@end
