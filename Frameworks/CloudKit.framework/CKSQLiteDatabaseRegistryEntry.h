
@interface CKSQLiteDatabaseRegistryEntry : CKSQLiteTableEntry {
    NSString * _databaseDirectory;
    NSNumber * _databaseID;
    NSData * _uniquingKey;
}

@property (nonatomic, retain) NSString *databaseDirectory;
@property (nonatomic, retain) NSNumber *databaseID;
@property (nonatomic, retain) NSData *uniquingKey;

- (void).cxx_destruct;
- (id)databaseDirectory;
- (id)databaseID;
- (void)setDatabaseDirectory:(id)arg1;
- (void)setDatabaseID:(id)arg1;
- (void)setUniquingKey:(id)arg1;
- (id)uniquingKey;

@end
