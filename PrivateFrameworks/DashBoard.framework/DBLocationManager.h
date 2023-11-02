
@interface DBLocationManager : NSObject <CLLocationManagerDelegate> {
    NSMutableSet * _activeAssertions;
    NSBundle * _bundle;
    NSString * _bundleIdentifier;
    NSString * _bundlePath;
    unsigned long long  _cacheUsedCount;
    CLLocation * _cachedCurrentLocation;
    CLLocation * _currentLocation;
    CLLocation * _lastPostedLocation;
    bool  _locationActive;
    CLLocationManager * _locationManager;
    NSObject<OS_dispatch_queue> * _locationQueue;
    NSMutableDictionary * _monitoringRegions;
    CARObserverHashTable * _observers;
}

@property (nonatomic, retain) NSMutableSet *activeAssertions;
@property (nonatomic, readonly) bool authorized;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundlePath;
@property (nonatomic) unsigned long long cacheUsedCount;
@property (nonatomic, readonly) CLLocation *cachedCurrentLocation;
@property (nonatomic, retain) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocation *lastPostedLocation;
@property (nonatomic) bool locationActive;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *locationQueue;
@property (nonatomic, retain) NSMutableDictionary *monitoringRegions;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (readonly) Class superclass;

+ (id)homeKitLocationManager;

- (void).cxx_destruct;
- (void)_authorizeIfNeeded;
- (void)_commonInit;
- (void)_commonPostInit;
- (void)_didEnterRegionWithIdentifier:(id)arg1;
- (void)_didExitRegionWithIDentifier:(id)arg1;
- (id)_name;
- (void)_startUpdatingLocationNow;
- (void)_stopUpdatingLocationNow;
- (void)_updateCurrentLocation:(id)arg1;
- (id)activeAssertions;
- (void)addObserver:(id)arg1;
- (bool)authorized;
- (id)bundle;
- (id)bundleIdentifier;
- (id)bundlePath;
- (unsigned long long)cacheUsedCount;
- (id)cachedCurrentLocation;
- (id)currentLocation;
- (void)dealloc;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundlePath:(id)arg1;
- (id)initWithLocationManager:(id)arg1 locationQueue:(id)arg2;
- (id)lastPostedLocation;
- (bool)locationActive;
- (id)locationManager;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id)locationQueue;
- (id)monitoringRegions;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setActiveAssertions:(id)arg1;
- (void)setCacheUsedCount:(unsigned long long)arg1;
- (void)setCurrentLocation:(id)arg1;
- (void)setLastPostedLocation:(id)arg1;
- (void)setLocationActive:(bool)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLocationQueue:(id)arg1;
- (void)setMonitoringRegions:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)startMonitoringForRegionWithIdentifier:(id)arg1 locationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 range:(double)arg3;
- (void)startUpdatingLocationWithIdentifier:(id)arg1;
- (void)stopMonitoringForRegionWithIdentifier:(id)arg1;
- (void)stopUpdatingLocationWithIdentifier:(id)arg1;

@end
