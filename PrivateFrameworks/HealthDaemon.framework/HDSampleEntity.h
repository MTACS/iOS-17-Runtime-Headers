
@interface HDSampleEntity : HDDataEntity

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)_deletedEntityClass;
+ (Class)_entityClassForDeletion;
+ (bool)_validateEntityWithEnumerator:(id)arg1 error:(id*)arg2 validationErrorHandler:(id /* block */)arg3;
+ (id)anySampleOfType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 error:(id*)arg5;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)columnNamesForTimeOffset;
+ (long long)countOfSamplesWithType:(id)arg1 profile:(id)arg2 matchingPredicate:(id)arg3 withError:(id*)arg4;
+ (id)databaseTable;
+ (id)dateIntervalsForSampleTypes:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 deletionContext:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 generateDeletedObjects:(bool)arg3 transaction:(id)arg4 profile:(id)arg5 recursiveDeleteAuthorizationBlock:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
+ (void)deleteSamplesWithTypes:(id)arg1 sourceEntities:(id)arg2 profile:(id)arg3 recursiveDeleteAuthorizationBlock:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (id)entityEnumeratorWithType:(id)arg1 profile:(id)arg2;
+ (id)entityEnumeratorWithTypes:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)enumerateAssociatedObjectsForIdentifier:(long long)arg1 inDatabase:(id)arg2 error:(id*)arg3 associatedObjectHandler:(id /* block */)arg4;
+ (id)indices;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (id)maxAnchorForSamplesWithType:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)minimumSampleStartDateForProfile:(id)arg1 error:(id*)arg2;
+ (id)mostRecentSampleWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 anchor:(id*)arg5 error:(id*)arg6;
+ (id /* block */)objectInsertionFilterForProfile:(id)arg1;
+ (id)oldestSampleWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 error:(id*)arg5;
+ (id)orderingTermForSortDescriptor:(id)arg1;
+ (id)populatedSampleTypes:(id)arg1 inDateInterval:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (long long)preferredEntityType;
+ (bool)requiresSampleTypePredicate;
+ (id)sampleCountsByTypeForProfile:(id)arg1 error:(id*)arg2;
+ (id)sampleTypesForSamplesMatchingPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)samplesWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 limit:(unsigned long long)arg5 anchor:(id*)arg6 error:(id*)arg7;
+ (id)sourceIDsForSamplesWithType:(id)arg1 profile:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
+ (id)syntheticQuantityColumnName;
+ (bool)validateEntitiesOfTypes:(id)arg1 profile:(id)arg2 error:(id*)arg3 validationErrorHandler:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

+ (bool)hdmc_analysisSampleInfo:(id*)arg1 forProfile:(id)arg2 error:(id*)arg3;
+ (id)hdmc_daySummaryAnchorWithHealthDatabase:(id)arg1 error:(id*)arg2;

@end
