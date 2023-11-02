
@interface HDKeyValueEntity : HDHealthEntity

+ (long long)_deviceLocalCategory;
+ (Class)_entityClassForKeyValueCategory:(long long)arg1;
+ (bool)_enumerateKeyValueEntitiesInCategory:(long long)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 usingBlock:(id /* block */)arg5;
+ (bool)_insertCodableCategoryDomainDictionary:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)_insertCodableTimestampedKeyValuePairs:(id)arg1 domain:(id)arg2 category:(long long)arg3 provenance:(long long)arg4 syncIdentity:(long long)arg5 profile:(id)arg6 error:(id*)arg7;
+ (bool)_insertCodableTimestampedKeyValuePairs:(id)arg1 domain:(id)arg2 category:(long long)arg3 provenance:(long long)arg4 syncIdentity:(long long)arg5 updatePolicy:(long long)arg6 profile:(id)arg7 error:(id*)arg8;
+ (bool)_insertKeysAndValues:(id)arg1 modificationDate:(id)arg2 domain:(id)arg3 category:(long long)arg4 provenance:(long long)arg5 syncIdentity:(long long)arg6 updatePolicy:(long long)arg7 profile:(id)arg8 error:(id*)arg9;
+ (const char *)_insertStatementKey;
+ (bool)_insertValues:(id)arg1 forKeys:(id)arg2 modificationDates:(id)arg3 domain:(id)arg4 category:(long long)arg5 provenance:(long long)arg6 syncIdentity:(long long)arg7 updatePolicy:(long long)arg8 profile:(id)arg9 error:(id*)arg10;
+ (id)_modDateForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id*)arg5 error:(id*)arg6;
+ (id)_rawValuesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (bool)_setRawKeysAndValues:(id)arg1 domain:(id)arg2 category:(long long)arg3 syncIdentity:(long long)arg4 database:(id)arg5 error:(id*)arg6;
+ (id)allValuesForDomain:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)dataForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id*)arg5 error:(id*)arg6;
+ (id)databaseTable;
+ (id)dateComponentsForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id*)arg5 error:(id*)arg6;
+ (id)dateForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id*)arg5 error:(id*)arg6;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateValuesForDomain:(id)arg1 category:(long long)arg2 keys:(id)arg3 profile:(id)arg4 error:(id*)arg5 usingBlock:(id /* block */)arg6;
+ (id)generateNewDatabaseIdentifier;
+ (id)modificationDatesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)numberForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id*)arg5 error:(id*)arg6;
+ (id)okemoZursObjectAnchorWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)persistDatabaseIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)persistDatabaseIdentifier:(id)arg1 syncIdentity:(long long)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (id)quantityForKey:(id)arg1 unit:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 entity:(id*)arg6 error:(id*)arg7;
+ (bool)removeValuesForDomain:(id)arg1 category:(long long)arg2 keys:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)retrieveDatabaseIdentifierCreationDateFromProfile:(id)arg1 error:(id*)arg2;
+ (id)retrieveDatabaseIdentifierFromDatabase:(id)arg1 error:(id*)arg2;
+ (id)retrieveDatabaseIdentifierFromProfile:(id)arg1 error:(id*)arg2;
+ (bool)setData:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)setData:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 syncIdentity:(long long)arg5 profile:(id)arg6 error:(id*)arg7;
+ (bool)setDate:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)setDateComponents:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)setNumber:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)setOkemoZursObjectAnchor:(long long)arg1 syncIdentity:(long long)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)setQuantity:(id)arg1 unit:(id)arg2 forKey:(id)arg3 domain:(id)arg4 category:(long long)arg5 profile:(id)arg6 error:(id*)arg7;
+ (bool)setString:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)setValueForAllKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (bool)setValuesWithDictionary:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)stringForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id*)arg5 error:(id*)arg6;
+ (id)uniquedColumns;
+ (id)valuesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id*)arg5;

@end
