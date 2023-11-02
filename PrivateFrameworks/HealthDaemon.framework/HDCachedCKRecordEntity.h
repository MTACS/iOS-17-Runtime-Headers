
@interface HDCachedCKRecordEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (long long)containsRecordWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 recordName:(id)arg5 profile:(id)arg6 error:(id*)arg7;
+ (long long)containsRecordsWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 profile:(id)arg5 error:(id*)arg6;
+ (id)databaseTable;
+ (bool)deleteRecordWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 recordName:(id)arg5 profile:(id)arg6 error:(id*)arg7;
+ (bool)enumerateRecordIDAndDataWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 recordType:(id)arg5 recordName:(id)arg6 epoch:(long long)arg7 profile:(id)arg8 error:(id*)arg9 enumerationHandler:(id /* block */)arg10;
+ (bool)enumerateRecordIDsWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 profile:(id)arg5 error:(id*)arg6 enumerationHandler:(id /* block */)arg7;
+ (id)foreignKeys;
+ (bool)insertOrUpdateWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 recordData:(id)arg5 recordType:(id)arg6 recordName:(id)arg7 profile:(id)arg8 error:(id*)arg9;
+ (id)insertWithZoneID:(long long)arg1 recordType:(id)arg2 epoch:(long long)arg3 recordName:(id)arg4 recordData:(id)arg5 transaction:(id)arg6 error:(id*)arg7;
+ (long long)protectionClass;
+ (id)recordDataWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 recordName:(id)arg5 profile:(id)arg6 error:(id*)arg7;
+ (id)uniquedColumns;
+ (bool)updateWithRecordData:(id)arg1 epoch:(long long)arg2 zoneID:(long long)arg3 recordName:(id)arg4 transaction:(id)arg5 error:(id*)arg6;

@end
