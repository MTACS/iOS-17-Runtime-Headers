
@interface PLSQLStatementFileRecorder : NSObject <PLSearchIndexManagerDatabaseConnectionDelegate> {
    NSString * _backtraceFilter;
    PLPhotoLibraryBundleController * _bundleController;
    NSObject<OS_dispatch_io> * _file;
    NSMutableDictionary * _isMutedByBacktraceHash;
    NSString * _mocNameFilter;
    NSMutableDictionary * _observationCountByBacktraceHash;
    NSMutableDictionary * _observationCountByNormalizedStatementSQL;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observationsLock;
    _Atomic int  _pageCount;
    PLSQLiteRecorder * _splSearchDbRecorder;
    NSObject<OS_dispatch_queue> * _writingQueue;
}

+ (unsigned long long)_callStackHash;
+ (id)_chooseFileURLFromFileURL:(id)arg1;
+ (id)_daemonSearchIndexManagerFromBundleController:(id)arg1;
+ (void)_writeRecordingPostambleUsingQueue:(id)arg1 toFile:(id)arg2;
+ (void)_writeStatements:(id)arg1 toFile:(id)arg2 usingQueue:(id)arg3 totalPages:(int*)arg4;

- (void).cxx_destruct;
- (bool)_decorateStatement:(id)arg1;
- (void)_installSignalHandler;
- (void)_reconsiderRecordingState;
- (void)didCreateConnection:(struct sqlite3 { }*)arg1;
- (id)initWithBundleController:(id)arg1;
- (bool)startRecordingToFileURL:(id)arg1 withTag:(id)arg2;
- (bool)stopRecordingWithSummary:(long long*)arg1;
- (void)willTeardownConnection:(struct sqlite3 { }*)arg1;

@end
