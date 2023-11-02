
@interface HKActiveWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource> {
    NSString * _onboardingCountryCode;
    NRPairedDeviceRegistry * _pairedDeviceRegistry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *onboardingCountryCode;
@property (nonatomic, retain) NRPairedDeviceRegistry *pairedDeviceRegistry;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeWatch;
- (struct { long long x1; long long x2; long long x3; })_operatingSystemVersionForOSVersion:(unsigned int)arg1;
- (id)currentDeviceClass;
- (id)iOSBuildVersion;
- (struct { long long x1; long long x2; long long x3; })iOSVersion;
- (id)init;
- (id)onboardingCountryCode;
- (id)pairedDeviceRegistry;
- (void)setOnboardingCountryCode:(id)arg1;
- (void)setPairedDeviceRegistry:(id)arg1;
- (struct { long long x1; long long x2; long long x3; })watchAtrialFibrillationDetectionVersion;
- (id)watchBuildType;
- (id)watchModelNumber;
- (id)watchOSBuildVersion;
- (struct { long long x1; long long x2; long long x3; })watchOSVersion;
- (id)watchProductType;
- (id)watchRegion;
- (id)watchRegionInfo;

@end
