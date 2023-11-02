
@interface HDWorkoutEntity : HDSampleEntity

+ (bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (bool)copySampleAssociationsFromWorkout:(id)arg1 toWorkout:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)databaseTable;
+ (id)deleteStatementsForRelatedEntitiesWithTransaction:(id)arg1;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateCondensedWorkoutsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (bool)isConcreteEntity;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5 insertHandler:(id /* block */)arg6;
+ (id)orderingTermForSortDescriptor:(id)arg1;
+ (bool)supportsObjectMerging;
+ (bool)workoutActivityType:(unsigned long long*)arg1 associatedWithRouteUUID:(id)arg2 transaction:(id)arg3 error:(id*)arg4;

- (id)codableCondensedWorkoutWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)getCondenserVersion:(out long long*)arg1 date:(out id*)arg2 profile:(id)arg3 error:(id*)arg4;
- (bool)isCondenserVersionLessThan:(long long)arg1 transaction:(id)arg2;
- (id)mainWorkoutActivityTypeWithTransaction:(id)arg1 error:(id*)arg2;
- (id)totalDistanceInCanonicalUnitWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)updateCondenserVersion:(long long)arg1 date:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (id)workoutDurationWithTransaction:(id)arg1 error:(id*)arg2;
- (id)workoutStartDateWithTransaction:(id)arg1 error:(id*)arg2;

@end
