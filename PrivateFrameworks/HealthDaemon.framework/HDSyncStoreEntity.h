
@interface HDSyncStoreEntity : HDHealthEntity

+ (id)allSyncStoreEntitiesOfType:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)existingSyncStoreEntityWithUUID:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (id)recreateSyncStoreWithUUID:(id)arg1 type:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)syncStoreEntityWithUUID:(id)arg1 type:(long long)arg2 healthDatabase:(id)arg3 error:(id*)arg4;

- (long long)syncProvenance;

@end
