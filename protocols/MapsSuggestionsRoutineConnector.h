
@protocol MapsSuggestionsRoutineConnector <NSObject>

@required

- (void)clearAllVehicleEventsWithHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)fetchLocationOfInterestAtLocation:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: CLLocation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RTLocationOfInterest *, NSError *, void*
- (void)fetchLocationOfInterestWithIdentifier:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RTLocationOfInterest *, NSError *, void*
- (void)fetchLocationsOfInterestOfType:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchLocationsOfInterestVisitedSinceDate:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchLocationsOfInterestWithinDistance:(void *)arg1 ofLocation:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 9: double, CLLocation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchNextPLOIsFromLocation:(void *)arg1 startDate:(void *)arg2 timeInterval:(void *)arg3 withHandler:(void *)arg4; // needs 4 arg types, found 10: CLLocation *, NSDate *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchPredictedExitDatesFromLocation:(void *)arg1 onDate:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 9: CLLocation *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchRoutineModeFromLocation:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: CLLocation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)removeLocationOfInterestWithIdentifier:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startMonitoringVehicleEventsWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)stopMonitoringVehicleEvents;

@end
