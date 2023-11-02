
@interface QLThumbnailAdditionIndex : NSObject <QLThumbnailAdditionIndexInterface> {
    PQLConnection * _db;
    NSObject<OS_dispatch_source> * _dbWatcher;
    bool  _exitsOnCorruption;
    NSURL * _url;
}

@property (readonly, copy) NSURL *databaseURL;
@property (readonly) PQLConnection *db;

+ (void)registerCleanupXPCActivity;
+ (void)setUpCleanupXPCActivitySynchronously:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cleanUpAfterClose;
- (void)_closeDatabaseOnItsQueue:(id)arg1;
- (void)_neuterAutoRollbackHandler;
- (void)_resetDatabaseOnItsQueue:(id)arg1;
- (bool)addThumbnailForURL:(id)arg1 lastHitDate:(id)arg2 size:(unsigned long long)arg3;
- (bool)addThumbnailForURL:(id)arg1 size:(unsigned long long)arg2;
- (void)addThumbnailForURLWrapper:(id)arg1 size:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)allEntries;
- (id)batchOfEntriesStartingAt:(unsigned long long)arg1 endingAt:(unsigned long long*)arg2;
- (void)cancelCacheDeletePurge;
- (void)cleanUpBatchOfEntries:(id)arg1;
- (void)close;
- (id)databaseConnection;
- (id)databaseURL;
- (id)db;
- (int)deviceForHomeDirectory;
- (bool)dispatchSyncOnDatabaseQueue:(id /* block */)arg1;
- (id)entriesEnumerator;
- (void)enumerateCacheEntriesWithHandler:(id /* block */)arg1;
- (void)flush;
- (bool)hasThumbnailForURL:(id)arg1 updateLastHitDate:(bool)arg2 andSize:(unsigned long long)arg3;
- (void)hasThumbnailForURLWrapper:(id)arg1 updateLastHitDate:(bool)arg2 andSize:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)init;
- (id)initForTesting;
- (id)initWithURL:(id)arg1;
- (void)logError:(id)arg1 onDB:(id)arg2 statement:(id)arg3;
- (id)makeDatabaseAtURL:(id)arg1 error:(id*)arg2;
- (bool)open;
- (id)openDatabaseAtURL:(id)arg1 error:(id*)arg2;
- (void)performDatabaseMaintenance;
- (long long)purgeOnMountPoint:(id)arg1 withUrgency:(int)arg2 beforeDate:(id)arg3;
- (long long)purgeableSpaceOnMountPoint:(id)arg1 withUrgency:(int)arg2 beforeDate:(id)arg3;
- (void)removeAllAdditions;
- (bool)removeDatabaseAtURL:(id)arg1 error:(id*)arg2;
- (void)removeEntriesFromDatabase:(id)arg1;
- (bool)removeThumbnailForURL:(id)arg1;
- (void)removeThumbnailForURL:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveAllAdditions:(id /* block */)arg1;
- (void)setUpDatabase:(id)arg1;
- (bool)updateFileSize:(unsigned long long)arg1 ofThumbnailForURL:(id)arg2;
- (void)updateFileSize:(unsigned long long)arg1 ofThumbnailForURL:(id)arg2 completion:(id /* block */)arg3;
- (bool)updateLastHitDate:(id)arg1 ofThumbnailForURL:(id)arg2;
- (void)updateLastHitDate:(id)arg1 ofThumbnailForURL:(id)arg2 completion:(id /* block */)arg3;
- (id)upgradeDatabaseIfNeeded:(id)arg1 error:(id*)arg2;
- (id)volumeRestrictionForMountPoint:(id)arg1;
- (id)whereClauseForURL:(id)arg1;

@end
