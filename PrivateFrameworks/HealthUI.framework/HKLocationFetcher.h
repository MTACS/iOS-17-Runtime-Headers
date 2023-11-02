
@interface HKLocationFetcher : NSObject {
    HKHealthStore * _healthStore;
    HKAnchoredObjectQuery * _routesQuery;
    _HKWorkoutRouteStore * _routesStore;
    _HKLocationShifter * _shifter;
}

@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKAnchoredObjectQuery *routesQuery;
@property (nonatomic, retain) _HKWorkoutRouteStore *routesStore;
@property (nonatomic, retain) _HKLocationShifter *shifter;

- (void).cxx_destruct;
- (void)_handleAndShiftLocations:(id)arg1 forWorkout:(id)arg2 withSamplesHandler:(id /* block */)arg3;
- (bool)_routesAreSmoothed:(id)arg1;
- (id)_workoutRoutesQueryForWorkout:(id)arg1 withUpdateHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)fetchLocationsFromWorkout:(id)arg1 applyThreshold:(bool)arg2 withSamplesHandler:(id /* block */)arg3;
- (void)fetchLocationsFromWorkout:(id)arg1 withSamplesHandler:(id /* block */)arg2;
- (void)fetchLocationsFromWorkout:(id)arg1 workoutActivity:(id)arg2 samplesHandler:(id /* block */)arg3;
- (void)fetchRoutesFromWorkout:(id)arg1 withUpdateHandler:(id /* block */)arg2;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)routesQuery;
- (id)routesStore;
- (void)setHealthStore:(id)arg1;
- (void)setRoutesQuery:(id)arg1;
- (void)setRoutesStore:(id)arg1;
- (void)setShifter:(id)arg1;
- (id)shifter;

@end
