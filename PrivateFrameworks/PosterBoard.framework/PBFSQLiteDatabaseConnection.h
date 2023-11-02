
@interface PBFSQLiteDatabaseConnection : NSObject <BSInvalidatable> {
    NSObject<OS_os_log> * _loggingCategory;
    NSObject<OS_dispatch_queue> * _queue;
    struct sqlite3 { } * _queue_dbConnection;
    NSHashTable * _queue_observers;
    NSCache * _queue_queryCache;
    NSString * _sqliteDatabasePath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *loggingCategory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)dataDumpResultOfAllTablesWithError:(out id*)arg1;
- (id)dataDumpResultOfQuery:(id)arg1 error:(out id*)arg2;
- (id)dataDumpResultOfTable:(id)arg1 error:(out id*)arg2;
- (void)dealloc;
- (bool)executeQuery:(id)arg1 bindings:(id)arg2 resultRowHandler:(id /* block */)arg3 error:(out id*)arg4;
- (bool)executeQuery:(id)arg1 error:(out id*)arg2;
- (bool)executeQuery:(id)arg1 resultRowHandler:(id /* block */)arg2 error:(out id*)arg3;
- (id)init;
- (id)initWithFileURL:(id)arg1 dataProtectionClass:(unsigned long long)arg2;
- (id)initWithFileURL:(id)arg1 options:(int)arg2 dataProtectionClass:(unsigned long long)arg3 error:(out id*)arg4;
- (id)initWithInMemoryDatabase;
- (void)invalidate;
- (id)lastErrorMessage;
- (id)loggingCategory;
- (id)prepareStatement:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setLoggingCategory:(id)arg1;
- (id)tableNames;
- (bool)truncateDatabaseAndReturnError:(out id*)arg1;

@end
