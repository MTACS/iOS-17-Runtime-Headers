
@interface HDWorkoutStatisticsEntity : HDHealthEntity

+ (id)_allProperties;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateWorkoutStatisticsForActivityId:(unsigned long long)arg1 database:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (id)foreignKeys;
+ (bool)insertWorkoutStatistics:(id)arg1 workoutActivityId:(unsigned long long)arg2 database:(id)arg3 error:(id*)arg4;
+ (Class)ownerEntityClass;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)workoutStatisticsForActivityId:(unsigned long long)arg1 quantityType:(id)arg2 database:(id)arg3 error:(id*)arg4;

@end
