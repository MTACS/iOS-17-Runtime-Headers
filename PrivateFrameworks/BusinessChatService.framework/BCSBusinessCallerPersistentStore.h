
@interface BCSBusinessCallerPersistentStore : BCSPersistentStore <BCSItemCaching> {
    long long  _schemaVersion;
}

+ (const char *)debugQueueName;

- (id)databasePath;
- (void)deleteExpiredItemsOfType:(long long)arg1;
- (void)deleteItemMatching:(id)arg1;
- (void)deleteItemsOfType:(long long)arg1;
- (id)init;
- (id)itemMatching:(id)arg1;
- (const char *)schema;
- (long long)schemaVersion;
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 { }*)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3;
- (void)updateItem:(id)arg1 withItemIdentifier:(id)arg2;

@end
