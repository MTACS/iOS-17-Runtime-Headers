
@interface ARLocationSensor : NSObject <ARSensor, CLLocationManagerDelegate> {
    NSMutableArray * _altitudeSkipTiles;
    NSString * _bundleIdentifier;
    ARLocationData * _currentLocation;
    <ARSensorDelegate> * _delegate;
    bool  _isLiveSensor;
    bool  _isStopped;
    double  _lastLocationUpdateTimestamp;
    double  _lastVIOUpdateTimestamp;
    double  _lastVLUpdateTimestamp;
    VLLocalizer * _localizer;
    CLLocationManager * _locationManager;
    <CLLocationManagerDelegate> * _locationManagerDelegate;
    NSObject<OS_dispatch_queue> * _locationManagerQueue;
    _CLLocationPlayer * _locationPlayer;
}

@property (retain) ARLocationData *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CLLocationManagerDelegate> *locationManagerDelegate;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_attemptAltitudeLookupAtCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 attemptCount:(unsigned int)arg2 lookupStartDate:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_createLocationManager;
- (id)_validateLocationAuthorization;
- (void)configureForReplay;
- (id)currentLocation;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationManagerDelegate;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)lookupAltitudeAtCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)providedDataTypes;
- (void)setCurrentLocation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocationManagerDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (void)updateARSessionState:(unsigned long long)arg1;
- (void)updateEstimationFromVIOPose:(id)arg1 imageData:(id)arg2;
- (id)updateFromDeviceOrientationData:(id)arg1;
- (id)updateFromLocationData:(id)arg1;
- (void)updateFromVisualLocalizationResult:(id)arg1;
- (void)waitForOutstandingCallbacks;

@end
