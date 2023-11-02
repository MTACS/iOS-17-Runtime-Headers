
@interface GEONavdCachePersistenceManager : NSObject {
    GEOSQLiteDB * _db;
}

- (void).cxx_destruct;
- (void)deleteFromDiskWithKey:(id)arg1;
- (long long)dumpToDiskWithKey:(id)arg1 value:(id)arg2;
- (id)entryWithRowId:(long long)arg1;
- (void)enumerateAllEntriesWithHandler:(id /* block */)arg1;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)arg1;
- (id)init;
- (double)nextTimeStampForRefreshTimer;
- (long long)numberOfEntries;
- (id)readValueWithKey:(id)arg1;
- (void)removeAllEntries;
- (void)tearDown;

@end
