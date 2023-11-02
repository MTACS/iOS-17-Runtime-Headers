
@interface REEngineLocationManager : RERelevanceEngineSubsystem <REEngineLocationManagerProperties> {
    CLLocation * _currentLocation;
    CLLocation * _location;
    RELocationManager * _locationManager;
    bool  _monitoringLocation;
    REObserverStore * _observers;
    RELocationManager * _simulatedLocationManager;
}

@property (nonatomic, retain) CLLocation *currentLocation;
@property (retain) CLLocation *location;
@property (nonatomic, readonly) RELocationManager *locationManager;
@property (nonatomic, readonly) bool monitoringLocation;

- (void).cxx_destruct;
- (void)_beginMonitoringLocationForManager:(id)arg1;
- (void)_beginTraining;
- (id)_currentLocationManager;
- (void)_endTraining;
- (void)_handleLocationUpdate:(id)arg1;
- (void)_stopMonitoringLocationForManager:(id)arg1;
- (void)_updateLocationStatus;
- (bool)_wantsLocation;
- (void)addObserver:(id)arg1;
- (id)currentLocation;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1 locationManager:(id)arg2;
- (id)location;
- (id)locationManager;
- (bool)monitoringLocation;
- (void)pause;
- (void)removeObserver:(id)arg1;
- (void)resume;
- (void)setCurrentLocation:(id)arg1;
- (void)setLocation:(id)arg1;

@end
