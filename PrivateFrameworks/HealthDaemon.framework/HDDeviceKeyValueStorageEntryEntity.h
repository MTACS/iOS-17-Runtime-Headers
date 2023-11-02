
@interface HDDeviceKeyValueStorageEntryEntity : HDHealthEntity

+ (id)_predicateForAnyKeys:(id)arg1;
+ (id)_predicateForKeys:(id)arg1 domain:(id)arg2;
+ (id)_predicateForSyncEntityIdentity:(long long)arg1 domain:(id)arg2 keys:(id)arg3;
+ (id)_propertiesForEntity;
+ (void)binderHandlerForBinder:(struct HDSQLiteStatementBinder { }*)arg1 key:(id)arg2 domain:(id)arg3 object:(id)arg4 syncEntityIdentity:(long long)arg5 deviceContext:(long long)arg6 modificationDate:(id)arg7;
+ (void)binderHandlerForBinder:(struct HDSQLiteStatementBinder { }*)arg1 syncEntityIdentity:(long long)arg2 deviceContext:(long long)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateAllEntriesForSyncIdentity:(id)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (id)fetchEntriesForKeys:(id)arg1 domain:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)fetchEntryForKey:(id)arg1 domain:(id)arg2 syncEntityIdentity:(long long)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (long long)protectionClass;
+ (bool)removeEntitesForKeys:(id)arg1 domain:(id)arg2 syncEntityIdentity:(long long)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (bool)replaceEntriesForOldSyncIdentity:(long long)arg1 withNewSyncIdentity:(long long)arg2 deviceContextID:(long long)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (int)setData:(id)arg1 forKey:(id)arg2 domain:(id)arg3 deviceContextID:(long long)arg4 syncEntityIdentity:(long long)arg5 modificationDate:(id)arg6 transaction:(id)arg7 error:(id*)arg8;

@end
