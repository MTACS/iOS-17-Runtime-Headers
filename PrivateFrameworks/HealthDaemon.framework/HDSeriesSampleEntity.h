
@interface HDSeriesSampleEntity : HDSampleEntity <HDSeriesEntity, _HDSeriesFreezeJournalEntrySeries>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)additionalPredicateForEnumeration;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteSeriesWithID:(id)arg1 deleteSeriesData:(bool)arg2 insertDeletedObject:(bool)arg3 profile:(id)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (id)foreignKeys;
+ (id)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (bool)migrateDataFromDataStore:(const void*)arg1 to:(void*)arg2 database:(id)arg3 recoveryAnalytics:(id)arg4 error:(id*)arg5;
+ (bool)migrateDataToSQLFromStore:(const void*)arg1 database:(id)arg2 error:(id*)arg3;
+ (id /* block */)objectInsertionFilterForProfile:(id)arg1;
+ (bool)replaceObjectID:(id)arg1 replacementObjectID:(id)arg2 deleteOriginalSeriesData:(bool)arg3 insertDeletedObject:(bool)arg4 profile:(id)arg5 transaction:(id)arg6 error:(id*)arg7;
+ (id)seriesSampleWithID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (void)updateInsertionEra;

- (id)HFDKeyWithDatabase:(id)arg1 error:(id*)arg2;
- (bool)canAddDatumInDatabase:(id)arg1 error:(id*)arg2;
- (id)freezeWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (bool)updateSampleCount:(long long)arg1 withDatabase:(id)arg2 error:(id*)arg3;

@end
