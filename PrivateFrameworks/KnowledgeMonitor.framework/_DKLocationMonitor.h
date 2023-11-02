
@interface _DKLocationMonitor : _DKMonitor <CLLocationManagerDelegate> {
    bool  _locationEnabled;
    CLLocationManager * _locationManager;
    RTRoutineManager * _routineManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (void)_handleVisit:(id)arg1;
- (id)_locationFromVisit:(id)arg1;
- (id)init;
- (void)locationManager:(id)arg1 didVisit:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (unsigned long long)placeTypeFromType:(unsigned long long)arg1;
- (void)start;
- (void)stop;
- (unsigned long long)userSpecificPlaceTypeFromType:(unsigned long long)arg1;

@end
