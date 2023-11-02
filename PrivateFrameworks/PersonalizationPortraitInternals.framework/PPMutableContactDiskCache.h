
@interface PPMutableContactDiskCache : PPContactDiskCache

- (id)_createNewCacheObjectWithCreatedAt:(long long)arg1;
- (id)_recordSetBucketsForNameRecords:(id)arg1;
- (bool)_writeCache:(id)arg1 path:(id)arg2 error:(id*)arg3;
- (bool)addNameRecords:(id)arg1 error:(id*)arg2;
- (bool)deleteCacheIfTooOld;
- (bool)deleteNameRecordCache;
- (long long)lastCreatedAt;
- (void)setLastCreatedAt:(long long)arg1;
- (bool)updateNameRecordCacheWithHistoryRecords:(id)arg1 error:(id*)arg2;

@end
