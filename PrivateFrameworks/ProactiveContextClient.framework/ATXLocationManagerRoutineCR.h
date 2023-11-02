
@interface ATXLocationManagerRoutineCR : NSObject <ATXLocationManagerRoutine> {
    RTRoutineManager * _routineManager;
}

+ (id)closestLOI:(id)arg1 toLocation:(id)arg2;

- (void).cxx_destruct;
- (void)fetchClosestLOIWithinDistance:(double)arg1 ofLocation:(id)arg2 reply:(id /* block */)arg3;
- (void)fetchLOILocationOfType:(long long)arg1 reply:(id /* block */)arg2;
- (void)fetchLOIVisitedDuring:(id)arg1 reply:(id /* block */)arg2;
- (void)fetchNextPredictedLOIFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 requireHighConfidence:(bool)arg4 reply:(id /* block */)arg5;
- (void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 requireHighConfidence:(bool)arg3 reply:(id /* block */)arg4;
- (unsigned long long)fetchRoutineModeFromLocation:(id)arg1;
- (id)init;
- (id)initWithRoutineManager:(id)arg1;

@end
