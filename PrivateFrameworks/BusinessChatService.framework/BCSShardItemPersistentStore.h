
@interface BCSShardItemPersistentStore : BCSPersistentStore <BCSShardCacheQueryable> {
    long long  _schemaVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const char *)debugQueueName;

- (long long)countOfExpiredShardsOfType:(long long)arg1;
- (long long)countOfShardsOfType:(long long)arg1;
- (id)databasePath;
- (void)deleteExpiredShardItemsOfType:(long long)arg1;
- (void)deleteShardItemMatching:(id)arg1;
- (void)deleteShardItemsOfType:(long long)arg1;
- (id)init;
- (id)initWithSchemaVersion:(long long)arg1;
- (const char *)schema;
- (long long)schemaVersion;
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 { }*)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3;
- (id)shardItemMatching:(id)arg1;
- (void)updateShardItem:(id)arg1 withShardIdentifier:(id)arg2;

@end
