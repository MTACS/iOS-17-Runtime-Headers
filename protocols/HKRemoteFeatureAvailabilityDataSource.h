
@protocol HKRemoteFeatureAvailabilityDataSource <NSObject>

@required

- (NSString *)currentDeviceClass;
- (NSString *)iOSBuildVersion;
- (struct { long long x1; long long x2; long long x3; })iOSVersion;
- (NSString *)onboardingCountryCode;
- (struct { long long x1; long long x2; long long x3; })watchAtrialFibrillationDetectionVersion;
- (NSString *)watchBuildType;
- (NSString *)watchModelNumber;
- (NSString *)watchOSBuildVersion;
- (struct { long long x1; long long x2; long long x3; })watchOSVersion;
- (NSString *)watchProductType;
- (NSString *)watchRegion;
- (NSString *)watchRegionInfo;

@end
