
@protocol ATXLocationManagerRoutine

@required

- (void)fetchClosestLOIWithinDistance:(void *)arg1 ofLocation:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: double, CLLocation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXLocationOfInterest *, NSError *, void*
- (void)fetchLOILocationOfType:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLLocation *, NSError *, void*
- (void)fetchLOIVisitedDuring:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchNextPredictedLOIFromLocation:(void *)arg1 startDate:(void *)arg2 timeInterval:(void *)arg3 requireHighConfidence:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: CLLocation *, NSDate *, double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchPredictedExitDatesFromLocation:(void *)arg1 onDate:(void *)arg2 requireHighConfidence:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: CLLocation *, NSDate *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (unsigned long long)fetchRoutineModeFromLocation:(CLLocation *)arg1;

@end
