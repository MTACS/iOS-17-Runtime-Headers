
@protocol MNLocationProvider <NSObject>

@required

- (bool)coarseModeEnabled;
- (<MNLocationProviderDelegate> *)delegate;
- (NSBundle *)effectiveBundle;
- (NSString *)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (int)headingOrientation;
- (bool)isAuthorized;
- (bool)isTracePlayer;
- (void)resetForActiveTileGroupChanged;
- (void)setDelegate:(id <MNLocationProviderDelegate>)arg1;
- (void)setEffectiveBundle:(NSBundle *)arg1;
- (void)setEffectiveBundleIdentifier:(NSString *)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)startMonitoringForRegion:(CLRegion *)arg1;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopMonitoringForRegion:(CLRegion *)arg1;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (double)timeScale;
- (unsigned long long)traceVersion;

@optional

- (id)initWithEffectiveBundle:(NSBundle *)arg1;
- (id)initWithEffectiveBundleIdentifier:(NSString *)arg1;
- (void)setCLParameters:(MNLocationProviderCLParameters *)arg1;

@end
