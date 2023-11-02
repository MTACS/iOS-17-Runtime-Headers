
@interface HDCloudSyncStoreEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateShardsForOwnerIdentifier:(id)arg1 containerIdentifier:(id)arg2 syncIdentity:(id)arg3 transaction:(id)arg4 error:(id*)arg5 handler:(id /* block */)arg6;
+ (id)foreignKeys;
+ (bool)persistState:(id)arg1 storeUUID:(id)arg2 shouldReplace:(bool)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (id)persistedMostRecentLastSyncDateForProfile:(id)arg1 error:(id*)arg2;
+ (id)persistedStateForStoreUUID:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)persistedStateForStoreUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)persistedStoreUUIDsForProfile:(id)arg1 error:(id*)arg2;
+ (long long)protectionClass;
+ (bool)rebaseRequiredByDate:(id)arg1 intervals:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)resetLastSyncDateExcludingStores:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)storeIdentifiersForOwnerIdentifier:(id)arg1 containerIdentifier:(id)arg2 syncIdentity:(id)arg3 profile:(id)arg4 error:(id*)arg5;

- (bool)fetchShardPropertiesInTransaction:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)storeUUIDInTransaction:(id)arg1 error:(id*)arg2;
- (bool)updateShardStartDate:(id)arg1 endDate:(id)arg2 type:(long long)arg3 transaction:(id)arg4 error:(id*)arg5;
- (bool)updateSyncIdentity:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
