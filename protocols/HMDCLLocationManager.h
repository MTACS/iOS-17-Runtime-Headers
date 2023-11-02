
@protocol HMDCLLocationManager <NSObject>

@required

+ (int)authorizationStatusForBundle:(NSBundle *)arg1;
+ (bool)locationServicesEnabled;

- (int)authorizationStatus;
- (<HMDCLLocationManagerDelegate> *)delegate;
- (double)desiredAccuracy;
- (NSSet *)monitoredRegions;
- (void)requestCurrentMicroLocationWithAdditionalInformation:(NSDictionary *)arg1;
- (void)requestLocation;
- (void)requestMicroLocationRecordingScanWithAdditionalInformation:(NSDictionary *)arg1;
- (void)requestStateForRegion:(CLRegion *)arg1;
- (void)requestWhenInUseAuthorization;
- (void)setDelegate:(id <HMDCLLocationManagerDelegate>)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)startMonitoringForRegion:(CLRegion *)arg1;
- (void)startUpdatingLocation;
- (void)stopMonitoringForRegion:(CLRegion *)arg1;
- (void)stopUpdatingLocation;

@end
