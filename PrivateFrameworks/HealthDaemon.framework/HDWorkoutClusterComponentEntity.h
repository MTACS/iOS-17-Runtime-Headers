
@interface HDWorkoutClusterComponentEntity : HDHealthEntity

+ (bool)associateWorkout:(id)arg1 withCluster:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateWorkoutsForCluster:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (id)foreignKeys;
+ (id)numberOfWorkoutsInCluster:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)removeWorkout:(id)arg1 fromCluster:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)uniquedColumns;

@end
