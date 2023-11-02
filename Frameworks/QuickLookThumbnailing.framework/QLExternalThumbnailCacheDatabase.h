
@interface QLExternalThumbnailCacheDatabase : NSObject {
    NSURL * _databaseURL;
    PQLConnection * _db;
}

@property (nonatomic, readonly) NSURL *databaseURL;
@property (nonatomic, readonly) PQLConnection *db;

- (void).cxx_destruct;
- (void)_closeDatabaseOnItsQueue:(id)arg1;
- (id)_createDatabaseIfNeededAtURL:(id)arg1 error:(id*)arg2;
- (id)_openDatabaseAtURL:(id)arg1;
- (id)_setupDatabaseTablesIfNeeded:(id)arg1 error:(id*)arg2;
- (void)close;
- (id)databaseURL;
- (id)db;
- (bool)deleteOldestThumbnail;
- (id)deleteOldestThumbnailsToFreeAtLeastSpace:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1;
- (bool)insertOrReplaceThumbnailRepresentingFPItem:(id)arg1 size:(unsigned long long)arg2 modificationDate:(id)arg3 fileExtension:(id)arg4 error:(id*)arg5;
- (void)logError:(id)arg1 onDB:(id)arg2 statement:(id)arg3;
- (id)oldestThumbnailsToFreeAtLeastSpace:(unsigned long long)arg1 error:(id*)arg2;
- (bool)open;
- (id)pathExtensionForItem:(id)arg1 error:(id*)arg2;
- (bool)removeAllThumbnails:(id*)arg1;
- (unsigned long long)totalThumbnailCount;
- (unsigned long long)totalThumbnailsSize;
- (id)whereClauseForItem:(id)arg1;

@end
