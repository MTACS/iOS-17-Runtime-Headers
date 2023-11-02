
@interface CPSClipDataSQLiteStore : NSObject {
    WBSSQLiteDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSURL * _databaseURL;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (bool)_checkDatabaseIntegrity;
- (void)_closeDatabase;
- (int)_createClipEntryPointsTable;
- (int)_createFreshDatabaseSchema;
- (bool)_insertAppClipRecord:(id)arg1;
- (bool)_insertOrReplaceEntryPointRecord:(id)arg1;
- (bool)_isDatabaseOpen;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (int)_migrateToSchemaVersion:(int)arg1;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_4;
- (int)_migrateToSchemaVersion_5;
- (int)_migrateToSchemaVersion_6;
- (int)_migrateToSchemaVersion_7;
- (int)_migrateToSchemeVersion_8;
- (void)_openDatabaseAndCheckIntegrity:(bool)arg1;
- (int)_schemaVersion;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (bool)_updateAppClipRecord:(id)arg1;
- (void)getAppClipRecordWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)getEntryPointRecordWithWebClipIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithDatabaseURL:(id)arg1;
- (void)removeRecordWithBundleID:(id)arg1;
- (void)saveAppClipRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)saveClipEntryPointRecord:(id)arg1 completion:(id /* block */)arg2;

@end
