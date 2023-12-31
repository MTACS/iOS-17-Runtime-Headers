
@interface CoreThemeDefinitionMigrator : NSObject {
    NSURL * _documentURL;
    NSMigrationManager * _migrationManager;
    long long  _newVersion;
    long long  _oldVersion;
    NSString * temporaryMigrationPath;
}

@property (copy) NSString *temporaryMigrationPath;

- (bool)_checkDiskSpace:(id*)arg1;
- (bool)_updateMetadata:(id*)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 oldVersion:(long long)arg2 newVersion:(long long)arg3;
- (id)mappingModelForMigrationWithError:(id*)arg1;
- (bool)migrateWithError:(id*)arg1;
- (void)setTemporaryMigrationPath:(id)arg1;
- (id)temporaryMigrationPath;

@end
