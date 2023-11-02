
@interface _LSInProcessSettingsStore : LSSettingsStore {
    struct sqlite3 { } * _database;
    NSObject<OS_dispatch_source> * _dbCloseTimer;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (nonatomic) struct sqlite3 { }*database;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;

- (void).cxx_destruct;
- (void)_internalQueue_loadDatabase;
- (void)_internalQueue_purgeDatabase;
- (unsigned char)_internalQueue_selectUserElectionForIdentifier:(id)arg1;
- (struct sqlite3 { }*)database;
- (void)dealloc;
- (id)init;
- (id)internalQueue;
- (void)setDatabase:(struct sqlite3 { }*)arg1;
- (unsigned char)userElectionForExtensionKey:(id)arg1;

@end
