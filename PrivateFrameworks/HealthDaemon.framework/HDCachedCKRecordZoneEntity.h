
@interface HDCachedCKRecordZoneEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteZoneWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)enumerateCKRecordZoneIDsWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 profile:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
+ (id)foreignKeys;
+ (bool)insertIfDoesNotExistWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 userRecordName:(id)arg5 serverChangeToken:(id)arg6 profile:(id)arg7 error:(id*)arg8;
+ (bool)insertOrUpdateWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 userRecordName:(id)arg5 serverChangeToken:(id)arg6 fetchComplete:(id)arg7 profile:(id)arg8 error:(id*)arg9;
+ (id)insertWithDatabaseID:(long long)arg1 zoneName:(id)arg2 ownerName:(id)arg3 serverChangeToken:(id)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (long long)protectionClass;
+ (long long)requiresFetchForZoneWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (id)serverChangeTokenForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)setRequiresFetch:(bool)arg1 containerIdentifier:(id)arg2 databaseScope:(long long)arg3 zoneName:(id)arg4 ownerName:(id)arg5 transaction:(id)arg6 error:(id*)arg7;
+ (bool)setZoneEntityState:(long long)arg1 containerIdentifier:(id)arg2 databaseScope:(long long)arg3 zoneName:(id)arg4 ownerName:(id)arg5 profile:(id)arg6 error:(id*)arg7;
+ (id)uniquedColumns;
+ (bool)updateServerChangeToken:(id)arg1 databaseID:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 transaction:(id)arg5 error:(id*)arg6;

@end
