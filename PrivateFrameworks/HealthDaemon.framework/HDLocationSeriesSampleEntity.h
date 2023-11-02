
@interface HDLocationSeriesSampleEntity : HDSeriesSampleEntity <HDSeriesEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_rawEnumerateLocationDataInDatabase:(id)arg1 HFDKey:(id)arg2 startDate:(id)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
+ (bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)createTableSQL;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateLocationDataInDatabase:(id)arg1 HFDKey:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateLocationDataWithTransaction:(id)arg1 HFDKey:(id)arg2 startDate:(id)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (bool)insertLocationData:(id)arg1 seriesIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)isBackedByTable;
+ (bool)isConcreteEntity;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5 insertHandler:(id /* block */)arg6;
+ (bool)participatesInInsertion;
+ (bool)performPostFirstJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)privateSubEntities;
+ (bool)supportsObjectMerging;
+ (bool)validateEntityWithProfile:(id)arg1 error:(id*)arg2 validationErrorHandler:(id /* block */)arg3;

- (bool)_insertLocationData:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (bool)deleteFromDatabase:(id)arg1 error:(id*)arg2;
- (bool)enumerateLocationDataInDatabase:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (bool)enumerateLocationDataInTransaction:(id)arg1 startDate:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (id)freezeWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (void)willDeleteFromDatabase:(id)arg1;

@end
