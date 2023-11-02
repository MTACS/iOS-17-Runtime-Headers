
@interface HDRaceRouteWorkoutEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)createRaceRouteWorkoutFromWorkout:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)databaseTable;
+ (id)entityForWorkoutUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)enumerateRoutePointsForWorkoutPersistentID:(long long)arg1 timestampAnchor:(double)arg2 limit:(unsigned long long)arg3 startDuration:(double)arg4 finishDuration:(double)arg5 transaction:(id)arg6 error:(id*)arg7 handler:(id /* block */)arg8;
+ (bool)enumerateRoutePointsForWorkoutUUID:(id)arg1 timestampAnchor:(double)arg2 limit:(unsigned long long)arg3 profile:(id)arg4 error:(id*)arg5 dataHandler:(id /* block */)arg6;
+ (id)insertCodableRacingMetrics:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)insertCodableRoutePoints:(id)arg1 workoutPersistentID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)markForDeletionWorkoutDataWithPersistentID:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)privateSubEntities;
+ (long long)protectionClass;
+ (bool)pruneWorkoutsMarkedForDeletionInTransaction:(id)arg1 error:(id*)arg2;
+ (id)startingPointForWorkoutWithPersistentID:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;

- (id)dateToDeleteInTransaction:(id)arg1 error:(id*)arg2;
- (bool)setDateToDelete:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
