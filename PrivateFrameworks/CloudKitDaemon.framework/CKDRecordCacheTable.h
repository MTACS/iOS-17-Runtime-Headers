
@interface CKDRecordCacheTable : CKSQLiteCacheTable <CKDRecordCaching>

+ (id)dbProperties;
+ (Class)entryClass;

- (bool)_cachedRecordHasValidAssets:(id)arg1 forRequiredKeys:(id)arg2;
- (bool)_cachedRecordKnownUserKeyData:(id)arg1 satisfiesRequiredKeys:(id)arg2;
- (id)_dsidForAccount:(id)arg1;
- (id)_recordWithID:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;
- (id)_trimRecord:(id)arg1 toRequiredKeys:(id)arg2;
- (void)addRecord:(id)arg1 container:(id)arg2 knownUserKeys:(id)arg3 scope:(long long)arg4;
- (void)clearAllRecords;
- (void)clearAllRecordsForZoneWithID:(id)arg1;
- (void)clearAllRecordsInScope:(long long)arg1;
- (void)clearAssetAuthTokensForRecord:(id)arg1 container:(id)arg2 scope:(long long)arg3;
- (void)clearAssetAuthTokensForRecordWithID:(id)arg1 container:(id)arg2 scope:(long long)arg3;
- (void)deleteRecordWithID:(id)arg1 scope:(long long)arg2;
- (id)etagForRecordID:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;
- (id)fetchCacheEntryRecordData:(id)arg1;
- (id)init;
- (unsigned long long)numberOfRecordsWithID:(id)arg1 container:(id)arg2;
- (id)recordWithID:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;
- (id)recordsWithIDs:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;

@end
