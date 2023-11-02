
@interface HDWorkoutClusterEntity : HDHealthEntity

+ (id)clusterEntitiesWithTransaction:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3;
+ (id)clusterUUIDsForWorkoutUUIDs:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteWorkoutClusterWithUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)entityForClusterUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)foreignKeys;
+ (id)insertWorkoutCluster:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)privateSubEntities;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (bool)updateWorkoutClusterWithUUID:(id)arg1 relevanceValue:(id)arg2 lastWorkoutUUID:(id)arg3 bestWorkoutUUID:(id)arg4 workoutUUIDsToAssociate:(id)arg5 workoutUUIDsToRemove:(id)arg6 profile:(id)arg7 error:(id*)arg8;
+ (bool)updateWorkoutClusterWithUUID:(id)arg1 routeLabel:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)updateWorkoutClusterWithUUID:(id)arg1 routeSnapshot:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)workoutClusterContainingWorkoutUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)workoutClustersForProfile:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3;
+ (id)workoutEntityForUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)workoutUUIDsForClusterUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;

- (bool)modelPropertiesWithTransaction:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)numberOfWorkoutsWithTransaction:(id)arg1 error:(id*)arg2;
- (id)snapshotEntityWithTransaction:(id)arg1 error:(id*)arg2;
- (id)workoutRouteSnapshotWithTransaction:(id)arg1 error:(id*)arg2;
- (id)workoutUUIDsWithTransaction:(id)arg1 error:(id*)arg2;

@end
