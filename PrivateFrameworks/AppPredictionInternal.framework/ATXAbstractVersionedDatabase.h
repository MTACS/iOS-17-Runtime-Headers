
@interface ATXAbstractVersionedDatabase : NSObject {
    _PASSqliteDatabase * _db;
    bool  _dbInitialized;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) _PASSqliteDatabase *db;

- (void).cxx_destruct;
- (bool)_configureDatabase;
- (void)_disconnectFromDb;
- (void)_initializeSchemaVersion:(long long)arg1;
- (bool)_initializeTables;
- (void)_runMigration;
- (void)_startDatabase;
- (long long)countRowsOfTable:(id)arg1;
- (id)createCustomSchema;
- (id)createSchema;
- (long long)currentSchemaVersion;
- (id)db;
- (id)init;
- (id)initWithDbPath:(id)arg1;
- (id)initWithDefaultPath:(id)arg1;
- (long long)latestVersion;
- (bool)migrate;

@end
