
@interface HDCachedSecureCKRecordEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteRecordWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 recordName:(id)arg5 profile:(id)arg6 error:(id*)arg7;
+ (bool)insertOrUpdateWithContainerIdentifier:(id)arg1 databaseScope:(long long)arg2 zoneName:(id)arg3 ownerName:(id)arg4 recordData:(id)arg5 recordName:(id)arg6 profile:(id)arg7 error:(id*)arg8;
+ (bool)insertOrUpdateWithRecordID:(long long)arg1 recordData:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)insertWithRecordID:(long long)arg1 recordData:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)protectedRecordDataForUnprotectedEntity:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)synchronizeRecordsWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)updateWithRecordData:(id)arg1 recordID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;

@end
