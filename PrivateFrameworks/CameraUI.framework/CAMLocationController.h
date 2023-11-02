
@interface CAMLocationController : NSObject <CLLocationManagerDelegate> {
    bool  __didRequestLocation;
    NSMutableArray * __enqueuedAssetsWaitingForLocation;
    NSObject<OS_dispatch_queue> * __listenersQueue;
    NSHashTable * __listenersWaitingForLocation;
    CLLocationManager * __locationManager;
    bool  __monitoringLocation;
    CLHeading * _currentHeading;
    CLLocation * _currentLocation;
    bool  _enabled;
    bool  _headingEnabled;
    int  _lastKnownAuthorizationStatus;
}

@property (setter=_setDidRequestLocation:, nonatomic) bool _didRequestLocation;
@property (nonatomic, readonly) NSMutableArray *_enqueuedAssetsWaitingForLocation;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_listenersQueue;
@property (nonatomic, readonly) NSHashTable *_listenersWaitingForLocation;
@property (nonatomic, readonly) CLLocationManager *_locationManager;
@property (getter=_isMonitoringLocation, nonatomic, readonly) bool _monitoringLocation;
@property (nonatomic, readonly) CLHeading *currentHeading;
@property (setter=_setCurrentLocation:, nonatomic, retain) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=isHeadingEnabled, nonatomic) bool headingEnabled;
@property (setter=_setLastKnownAuthorizationStatus:, nonatomic) int lastKnownAuthorizationStatus;
@property (readonly) Class superclass;

+ (id)_sharedGPSDatestampFormatter;
+ (id)_sharedGPSTimestampFormatter;
+ (id)locationMetadataForLocation:(id)arg1 heading:(id)arg2 device:(long long)arg3;

- (void).cxx_destruct;
- (void)_authorizeOrStartLocationManager;
- (bool)_didRequestLocation;
- (id)_enqueuedAssetsWaitingForLocation;
- (bool)_isMonitoringLocation;
- (id)_listenersQueue;
- (id)_listenersWaitingForLocation;
- (id)_locationManager;
- (void)_notifyListenersForAuthorizationStatusUpdate:(int)arg1;
- (void)_notifyListenersWaitingOnLocation:(id)arg1;
- (void)_performBlock:(id /* block */)arg1 andLogIfExecutionExceeds:(double)arg2 logPrefix:(id)arg3;
- (void)_resetDidRequestLocation;
- (void)_setCurrentLocation:(id)arg1;
- (void)_setDidRequestLocation:(bool)arg1;
- (void)_setLastKnownAuthorizationStatus:(int)arg1;
- (void)_startMonitoringLocationUpdates;
- (void)_stopMonitoringLocationUpdates;
- (void)_updateAssetsWaitingOnLocation;
- (void)_updateLocationMonitoring;
- (void)addListenerForLocationUpdates:(id)arg1;
- (id)currentHeading;
- (id)currentLocation;
- (void)dealloc;
- (void)enqueueAssetForLocationUpdates:(id)arg1;
- (id)headingForOrientation:(long long)arg1;
- (id)init;
- (bool)isEnabled;
- (bool)isHeadingEnabled;
- (int)lastKnownAuthorizationStatus;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)removeListenerForLocationUpdates:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHeadingEnabled:(bool)arg1;

@end
