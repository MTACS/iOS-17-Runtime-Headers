
@interface HDRaceRouteGenerationQueueEntity : HDHealthEntity

+ (id)clearQueueWithTransaction:(id)arg1 error:(id*)arg2;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)finishWorkoutCluster:(id)arg1 concreteCluster:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)foreignKeys;
+ (id)nextWorkoutClusterWithTransaction:(id)arg1 error:(id*)arg2;
+ (bool)populateWithWorkoutClusters:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (id)uniquedColumns;

@end
