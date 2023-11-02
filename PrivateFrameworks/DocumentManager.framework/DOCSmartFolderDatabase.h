
@interface DOCSmartFolderDatabase : NSObject {
    PQLConnection * _connection;
    RBSAssertion * _processAssertion;
    NSURL * _url;
    NSObject<OS_dispatch_source> * _watcher;
    NSObject<OS_dispatch_queue> * _workingQueue;
}

@property (nonatomic, readonly) PQLConnection *connection;
@property (nonatomic, retain) RBSAssertion *processAssertion;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *watcher;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workingQueue;

- (void).cxx_destruct;
- (void)_cleanUpAfterClose;
- (void)_closeDatabaseOnItsQueue:(id)arg1;
- (id)_createDatabaseIfNeededAtURL:(id)arg1 error:(id*)arg2;
- (id)_existingEventSimilarToEvent:(id)arg1;
- (id)_existingFileNameHitsSimilarToHit:(id)arg1;
- (id)_existingFiletypeHitSimilarToHit:(id)arg1;
- (id)_openConnectionToDatabaseAtURL:(id)arg1;
- (void)_registerHit:(id)arg1;
- (void)_registerSavingFile:(id)arg1 inFolder:(id)arg2 atDate:(id)arg3 withFrecencyScore:(double)arg4 rowId:(id)arg5;
- (void)_registerSavingFileType:(id)arg1 inFolder:(id)arg2 atDate:(id)arg3 withFrecencyScore:(double)arg4 rowId:(id)arg5;
- (void)_resetDatabaseOnItsQueue:(id)arg1;
- (void)_setUpDatabaseWatcher:(id)arg1;
- (id)_setupDatabaseTablesIfNeeded:(id)arg1 error:(id*)arg2;
- (void)close;
- (id)connection;
- (void)deleteFolderWithIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)logError:(id)arg1 onDB:(id)arg2 statement:(id)arg3;
- (void)open;
- (id)previousEventsForAppBundleIdentifier:(id)arg1 excluding:(id)arg2;
- (id)previousHits;
- (id)processAssertion;
- (void)purgeOldEntries;
- (void)registerEvent:(id)arg1;
- (void)registerFilenameHit:(id)arg1 fileTypeHit:(id)arg2 smartScoreBlock:(id /* block */)arg3;
- (void)setProcessAssertion:(id)arg1;
- (void)setWatcher:(id)arg1;
- (void)setWorkingQueue:(id)arg1;
- (id)url;
- (id)watcher;
- (id)workingQueue;

@end
