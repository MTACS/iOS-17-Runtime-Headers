
@interface HDWorkoutActivityEntity : HDHealthEntity

+ (id)_allProperties;
+ (bool)_insertOrReplaceWorkoutActivity:(id)arg1 shouldReplace:(bool)arg2 ownerID:(unsigned long long)arg3 isPrimaryActivity:(bool)arg4 database:(id)arg5 error:(id*)arg6;
+ (id)_numberProperty:(id)arg1 primaryActivityOwnerID:(unsigned long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)_primaryActivityPredicateForOwnerID:(unsigned long long)arg1;
+ (id)_statisticsForWorkoutActivityWithPersistentId:(unsigned long long)arg1 workoutActivity:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)_workoutActivityFromRow:(struct HDSQLiteRow { }*)arg1;
+ (id)activityEntityWithUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)activityTypeForPrimaryActivityOwnerID:(unsigned long long)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)durationForPrimaryActivityOwnerID:(unsigned long long)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)enumerateActivityEntitiesForOwnerID:(unsigned long long)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (id)foreignKeys;
+ (id)indices;
+ (bool)insertPrimaryActivity:(id)arg1 ownerID:(unsigned long long)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)insertSubActivities:(id)arg1 ownerID:(unsigned long long)arg2 database:(id)arg3 error:(id*)arg4;
+ (Class)ownerEntityClass;
+ (id)primaryWorkoutActivityForOwnerID:(unsigned long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (id)subActivitiesWithOwnerID:(unsigned long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)subActivityEntityWithUUID:(id)arg1 ownerID:(unsigned long long)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)supportsNullableEndDate;

- (id)UUIDInTransaction:(id)arg1 error:(id*)arg2;
- (bool)setDuration:(double)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setEndDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setMetadata:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)unitTest_validateInTransaction:(id)arg1 error:(id*)arg2;

@end
