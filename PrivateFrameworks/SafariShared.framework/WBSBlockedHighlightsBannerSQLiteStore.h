
@interface WBSBlockedHighlightsBannerSQLiteStore : NSObject {
    WBSSQLiteDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSURL * _databaseURL;
}

+ (id)defaultDatabaseURL;

- (void).cxx_destruct;
- (void)_closeDatabaseOnDatabaseQueue;
- (void)_configureDatabase;
- (void)_createDatabaseSchemaIfNeeded;
- (void)_openDatabase;
- (void)_openDatabaseIfNeeded;
- (long long)_schemaVersion;
- (void)clearAllBannedHighlightsWithCompletionHandler:(id /* block */)arg1;
- (void)clearBlockedBannerHighlightsAfterDate:(id)arg1 beforeDate:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)closeDatabase;
- (void)fetchAllBlockedHighlightsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithDatabaseURL:(id)arg1;
- (void)removeBlockedBannerhighlightWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)storeBlockedHighlightWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)verifyIfHighlightIsBlockedWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

@end
