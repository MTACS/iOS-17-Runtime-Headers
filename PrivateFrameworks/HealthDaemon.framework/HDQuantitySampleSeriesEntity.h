
@interface HDQuantitySampleSeriesEntity : HDQuantitySampleEntity <HDSeriesEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)_hasSeriesDataWithDatabase:(id)arg1 hfdKey:(unsigned long long)arg2 error:(id*)arg3;
+ (id)additionalPredicateForEnumeration;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteSeriesDataWithKey:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)deleteSeriesWithID:(id)arg1 deleteSeriesData:(bool)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (Class)entityClassForEnumeration;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateDataWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateDataWithIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateDataWithTransaction:(id)arg1 HFDKey:(long long)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateRawDataWithTransaction:(id)arg1 HFDKey:(long long)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (id)foreignKeys;
+ (id)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 endDate:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)hasSeriesDataForHFDKey:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)indices;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (bool)insertValues:(id)arg1 series:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)isConcreteEntity;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5 insertHandler:(id /* block */)arg6;
+ (id /* block */)objectInsertionFilterForProfile:(id)arg1;
+ (id)orderingTermForSortDescriptor:(id)arg1;
+ (bool)performPostFirstJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)primitiveInsertValues:(id)arg1 seriesVersion:(long long)arg2 HFDKey:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (bool)primitiveRemoveDatums:(id)arg1 HFDKey:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)privateSubEntities;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeSQL;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeWithTransaction:(id)arg1 error:(id*)arg2;
+ (id)removeValues:(id)arg1 fromQuantitySeriesSample:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)replaceExistingObject:(id)arg1 existingObjectID:(id)arg2 replacementObject:(id)arg3 replacementObjectID:(id)arg4 profile:(id)arg5 transaction:(id)arg6 error:(id*)arg7;
+ (bool)replaceObjectID:(id)arg1 replacementObjectID:(id)arg2 deleteOriginalSeriesData:(bool)arg3 profile:(id)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (bool)supportsObjectMerging;
+ (bool)unitTesting_insertValues:(id)arg1 quantitySample:(id)arg2 seriesVersion:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (long long)unitTesting_insertionEra;
+ (void)unitTesting_updateInsertionEra;
+ (bool)validateEntityWithProfile:(id)arg1 error:(id*)arg2 validationErrorHandler:(id /* block */)arg3;

- (id)HFDKeyWithDatabase:(id)arg1 error:(id*)arg2;
- (id)countForSeriesWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)deleteFromDatabase:(id)arg1 error:(id*)arg2;
- (bool)enumerateDataWithTransaction:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)freezeWithEndDate:(id)arg1 transaction:(id)arg2 profile:(id)arg3 error:(id*)arg4;
- (id)hasSeriesDataWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)insertValues:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)startTimeEndTimeCountForSeriesWithTransaction:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (bool)unitTesting_setInsertionEra:(long long)arg1 profile:(id)arg2 error:(id*)arg3;
- (void)willDeleteFromDatabase:(id)arg1;

@end
