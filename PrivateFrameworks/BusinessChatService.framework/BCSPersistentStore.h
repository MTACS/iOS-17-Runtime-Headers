
@interface BCSPersistentStore : NSObject <BCSBatchable> {
    long long  _batchCount;
    struct sqlite3 { } * _openedDatabase;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct sqlite3 { }*openedDatabase;
@property (readonly) Class superclass;

+ (const char *)debugQueueName;

- (void).cxx_destruct;
- (void)beginBatch;
- (id)databasePath;
- (void)dealloc;
- (bool)deleteDatabaseFile;
- (void)endBatch;
- (id)init;
- (struct sqlite3 { }*)openedDatabase;
- (const char *)schema;
- (long long)schemaVersion;
- (void)schemaVersionDidChangeForDatabase:(struct sqlite3 { }*)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3;
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 { }*)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3;

@end
