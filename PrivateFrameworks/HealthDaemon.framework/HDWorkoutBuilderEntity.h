
@interface HDWorkoutBuilderEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)createEntityForBuilderConfiguration:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)databaseTable;
+ (bool)discardBuilderWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)finishWorkoutBuilderWithIdentifier:(id)arg1 dateInterval:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)foreignKeys;
+ (id)privateSubEntities;
+ (long long)protectionClass;
+ (id)workoutBuilderEntitiesExcludingSessions:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)workoutBuilderEntitiesForSource:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)workoutBuilderEntityWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;

- (long long)associateObject:(id)arg1 timestamp:(double)arg2 transaction:(id)arg3 error:(id*)arg4;
- (id)configurationWithTransaction:(id)arg1 error:(id*)arg2;
- (id)dataIntervalInTransaction:(id)arg1 error:(id*)arg2;
- (id)endDateInTransaction:(id)arg1 error:(id*)arg2;
- (bool)enumerateAssociatedSampleValuesOfType:(id)arg1 interval:(id)arg2 profile:(id)arg3 error:(id*)arg4 sampleHandler:(id /* block */)arg5;
- (bool)enumerateAssociatedSamplesOfTypes:(id)arg1 interval:(id)arg2 profile:(id)arg3 error:(id*)arg4 sampleHandler:(id /* block */)arg5;
- (bool)enumerateAssociatedUUIDsWithTransaction:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)enumerateDataSourcesForProfile:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)enumerateStatisticsInTransaction:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)insertPrimaryWorkoutActivity:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)insertWorkoutActivity:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)insertWorkoutEvent:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)metadataWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)pruneAssociatedSamplesToDateInterval:(id)arg1 transaction:(id)arg2 error:(id*)arg3 zonesHandler:(id /* block */)arg4;
- (id)quantityTypesIncludedWhilePausedInTransaction:(id)arg1 error:(id*)arg2;
- (bool)removeDataSourceWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (id)sessionIdentifierWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)setArchivedState:(id)arg1 forDataSourceIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4;
- (bool)setDataInterval:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setDeviceEntity:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setEndDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setMetadata:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setQuantityTypesIncludedWhilePaused:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setSessionIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setStartDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setWorkoutConfiguration:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)startDateInTransaction:(id)arg1 error:(id*)arg2;
- (bool)storeStatisticsCalculator:(id)arg1 anchor:(id)arg2 activityUUID:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
- (bool)updateWorkoutActivityEndDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)updateWorkoutActivityMetadata:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)workoutActivitiesInTransaction:(id)arg1 error:(id*)arg2;
- (id)workoutEventsInTransaction:(id)arg1 error:(id*)arg2;

@end
