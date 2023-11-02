
@interface HDCachedCKDatabaseEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteDatabasesNotMatchingUserRecordName:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)entityForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 userRecordName:(id)arg3 transaction:(id)arg4 shouldCreate:(bool)arg5 error:(id*)arg6;
+ (bool)insertIfDoesNotExistWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 userRecordName:(id)arg3 serverChangeToken:(id)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)insertOrUpdateWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 userRecordName:(id)arg3 serverChangeToken:(id)arg4 profile:(id)arg5 error:(id*)arg6;
+ (id)insertWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 userRecordName:(id)arg3 serverChangeToken:(id)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (long long)previousEpochForTransaction:(id)arg1 error:(id*)arg2;
+ (long long)protectionClass;
+ (id)serverChangeTokenForContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)uniquedColumns;
+ (bool)updateServerChangeToken:(id)arg1 containerIdentifier:(id)arg2 databaseScope:(long long)arg3 transaction:(id)arg4 error:(id*)arg5;

- (bool)setCurrentEpoch:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
