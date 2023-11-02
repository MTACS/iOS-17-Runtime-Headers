
@interface GEORequestResponsePersister : NSObject {
    GEOSQLiteDB * _db;
    NSObject<OS_dispatch_source> * _pruneTimer;
}

- (void).cxx_destruct;
- (bool)_checkDbIsWriteable:(id*)arg1;
- (void)_persistEvent:(id)arg1;
- (bool)_pruneDBToDefaultAge:(id*)arg1;
- (bool)_pruneDBToDefaultSize:(id*)arg1;
- (bool)_pruneDBToSize:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_pruneEntriesOlderThan:(id)arg1 error:(id*)arg2;
- (void)_reschedulePruner;
- (unsigned int)_restoreOrphanedEntries:(id*)arg1;
- (bool)_runAllPruners:(id*)arg1;
- (void)dealloc;
- (id)enumerateAllEntriesWithBlock:(id /* block */)arg1;
- (id)enumerateEntriesInRange:(id)arg1 withBlock:(id /* block */)arg2;
- (id)enumerateEntriesOfType:(int)arg1 inRange:(id)arg2 withBlock:(id /* block */)arg3;
- (id)enumerateEntriesOfType:(int)arg1 withBlock:(id /* block */)arg2;
- (id)findRequest:(id)arg1 withBlock:(id /* block */)arg2;
- (id)findResponse:(id)arg1 withBlock:(id /* block */)arg2;
- (unsigned long long)getTotalSize:(id*)arg1;
- (id)initWritable:(bool)arg1;
- (void)persistRequestTask:(id)arg1 url:(id)arg2 request:(id)arg3;
- (void)persistResponseTask:(id)arg1 error:(id)arg2;
- (void)persistResponseTask:(id)arg1 response:(id)arg2;
- (void)persistResponseTaskCanceled:(id)arg1;
- (bool)pruneDBToDefaultAge:(id*)arg1;
- (bool)pruneDBToDefaultSize:(id*)arg1;
- (bool)pruneDBToSize:(unsigned long long)arg1 error:(id*)arg2;
- (bool)pruneEntriesOlderThan:(id)arg1 error:(id*)arg2;
- (unsigned int)restoreOrphanedEntries:(id*)arg1;
- (bool)runAllPruners:(id*)arg1;

@end
