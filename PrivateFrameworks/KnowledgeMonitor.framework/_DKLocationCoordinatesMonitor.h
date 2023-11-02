
@interface _DKLocationCoordinatesMonitor : _DKMonitor <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_source> * _fetchLoiTimer;
    RTLocation * _home;
    CLLocation * _lastLocation;
    unsigned long long  _lastLocationGeoHash300m;
    BMStream * _locationCoordinatesStream;
    BMSource * _locationCoordinatesStreamSource;
    BMStream * _locationHashedCoordinatesStream;
    BMSource * _locationHashedCoordinatesStreamSource;
    CLLocationManager * _locationManager;
    RTLocation * _work;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) RTLocation *home;
@property (readonly) Class superclass;
@property (retain) RTLocation *work;

+ (id)entitlements;
+ (id)eventStream;
+ (id)log;

- (void).cxx_destruct;
- (void)_fetchAndCacheLOIs;
- (int)altitudeRangeFrom:(double)arg1;
- (void)deactivate;
- (void)dealloc;
- (int)distanceRangeFrom:(double)arg1;
- (id)home;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (int)locationTypeFrom:(int)arg1;
- (void)setHome:(id)arg1;
- (void)setWork:(id)arg1;
- (int)speedRangeFrom:(double)arg1;
- (void)start;
- (void)stop;
- (id)work;

@end
