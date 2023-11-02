
@interface GEOConfigPersistence : NSObject {
    _GEOConfigDB * _configDB;
    GEOSQLiteDB * _db;
    _GEOConfigCache * _keyExpiryCache;
    _GEOConfigDBOperationQueue * _operationQueue;
    _GEOConfigDB * _xpcConfigDB;
}

+ (bool)_migrateDates:(id)arg1 withConverter:(id /* block */)arg2;
+ (bool)_setup:(id)arg1;

- (void).cxx_destruct;
- (id)_getExpiredKeyPathsOlderThanTime:(id)arg1 osVersion:(id)arg2;
- (id)_getExpiredKeyPathsOlderThanTime:(id)arg1 osVersion:(id)arg2 from:(id)arg3;
- (void)_pruneExpiredKeyPathsOlderThanTime:(id)arg1 osVersion:(id)arg2;
- (void)clearExpirationForKeyPath:(id)arg1;
- (void)dealloc;
- (id)defaultForKeyPath:(id)arg1;
- (id)defaultForKeyPathComponents:(id)arg1;
- (void)flush;
- (id)getAllExpiringKeys;
- (id)getExpireForKeyPath:(id)arg1;
- (id)getExpiredKeyPathsOlderThanOSVersion:(id)arg1;
- (id)getExpiredKeyPathsOlderThanTime:(id)arg1;
- (id)initWithDBPath:(id)arg1;
- (void)pruneExpiredKeyPathsOlderThanOSVersion:(id)arg1;
- (void)pruneExpiredKeyPathsOlderThanTime:(id)arg1;
- (void)setDefault:(id)arg1 forKeyPath:(id)arg2;
- (void)setExpire:(id)arg1;
- (void)setXPCDefault:(id)arg1 forKeyPath:(id)arg2;
- (void)tearDown;
- (id)xpcDefaultForKeyPath:(id)arg1;
- (id)xpcDefaultForKeyPathComponents:(id)arg1;

@end
