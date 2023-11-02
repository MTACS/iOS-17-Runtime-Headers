
@interface MapsSuggestionsRealRoutineConnector : NSObject <MapsSuggestionsRoutineConnector> {
    RTRoutineManager * _routineManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearAllVehicleEventsWithHandler:(id /* block */)arg1;
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(id /* block */)arg3;
- (void)fetchNextPLOIsFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(id /* block */)arg4;
- (void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(id /* block */)arg2;
- (id)init;
- (void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)startMonitoringVehicleEventsWithHandler:(id /* block */)arg1;
- (void)stopMonitoringVehicleEvents;

@end
