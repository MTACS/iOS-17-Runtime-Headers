
@interface BSSqliteDatabaseConnection : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    struct sqlite3 { } * _queue_dbConnection;
    NSHashTable * _queue_observers;
    NSCache * _queue_queryCache;
}

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initWithFileURL:(id)arg1 dataProtectionClass:(unsigned long long)arg2;
- (id)initWithInMemoryDatabase;
- (id)prepareStatement:(id)arg1;
- (bool)truncateDatabaseAndReturnError:(out id*)arg1;

@end
