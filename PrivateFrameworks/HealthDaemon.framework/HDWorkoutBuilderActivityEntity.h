
@interface HDWorkoutBuilderActivityEntity : HDWorkoutActivityEntity

+ (id)_statisticsForWorkoutActivityWithPersistentId:(unsigned long long)arg1 workoutActivity:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)databaseTable;
+ (Class)ownerEntityClass;
+ (long long)protectionClass;
+ (bool)supportsNullableEndDate;

@end
