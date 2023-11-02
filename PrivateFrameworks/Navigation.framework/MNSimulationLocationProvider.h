
@interface MNSimulationLocationProvider : NSObject <MNLocationProvider> {
    NSMutableArray * _currentGeoFences;
    <MNLocationProviderDelegate> * _delegate;
    MNSimulatedLocationGenerator * _locationGenerator;
    NSTimer * _locationUpdateTimer;
    NSMutableArray * _monitoredGeoFences;
    bool  _simulateGeoFences;
    long long  _simulationType;
    double  _speedMultiplier;
}

@property (nonatomic, retain) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) bool coarseModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNLocationProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSBundle *effectiveBundle;
@property (nonatomic, copy) NSString *effectiveBundleIdentifier;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headingOrientation;
@property (nonatomic, readonly) bool isAuthorized;
@property (nonatomic, readonly) bool isTracePlayer;
@property (nonatomic, retain) NSString *requestingAppIdentifier;
@property (nonatomic) double speedMultiplier;
@property (nonatomic) double speedOverride;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeScale;
@property (nonatomic, readonly) unsigned long long traceVersion;

- (void).cxx_destruct;
- (void)_resetLocationUpdateInterval;
- (void)_sendLocationUpdate:(id)arg1;
- (id)auditToken;
- (bool)coarseModeEnabled;
- (void)dealloc;
- (id)delegate;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (int)headingOrientation;
- (id)initWithSimulationType:(long long)arg1 routeInfo:(id)arg2;
- (id)initWithSimulationType:(long long)arg1 routeInfo:(id)arg2 alternateRouteInfos:(id)arg3;
- (bool)isAuthorized;
- (bool)isTracePlayer;
- (id)requestingAppIdentifier;
- (void)resetForActiveTileGroupChanged;
- (void)setAuditToken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setRequestingAppIdentifier:(id)arg1;
- (void)setSpeedMultiplier:(double)arg1;
- (void)setSpeedOverride:(double)arg1;
- (double)speedMultiplier;
- (double)speedOverride;
- (void)startMonitoringForRegion:(id)arg1;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopMonitoringForRegion:(id)arg1;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (double)timeScale;
- (unsigned long long)traceVersion;
- (void)updatePosition:(double)arg1;
- (void)updateWithRouteInfo:(id)arg1;

@end
