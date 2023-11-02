
@interface GEOLocationShifterPersistence : NSObject {
    GEOSQLiteDB * _db;
    NSString * _dbPath;
}

+ (id)sharedPersister;

- (void).cxx_destruct;
- (bool)_setup:(id)arg1;
- (void)findResponseForCoordinate:(struct { double x1; double x2; })arg1 reduceRadius:(double)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)getAllEntries:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (id)init;
- (id)initWithDBFilePath:(id)arg1;
- (void)pruneEntriesOlderThan:(id)arg1 maximumEntriesToKeep:(int)arg2;
- (void)removeAllEntries;
- (void)removeAllEntriesSync;
- (void)storeResponse:(id)arg1;
- (void)tearDown;

@end
