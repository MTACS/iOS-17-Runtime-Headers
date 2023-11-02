
@interface HDHearingPlugin : NSObject <HDDatabaseSchemaProvider, HDPlugin, HDSyncEntityProvider, HDTaskServerClassProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *pluginIdentifier;
@property (nonatomic, readonly, copy) NSString *schemaName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *syncSchemaIdentifier;

- (id)_databaseSchemaForProtectionClass:(long long)arg1;
- (long long)currentSchemaVersionForProtectionClass:(long long)arg1;
- (id)databaseEntitiesForProtectionClass:(long long)arg1;
- (id)extensionForHealthDaemon:(id)arg1;
- (id)extensionForProfile:(id)arg1;
- (id)orderedSyncEntities;
- (id)pluginIdentifier;
- (void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(id)arg2;
- (id)schemaName;
- (id)syncSchemaIdentifier;
- (id)taskServerClasses;

@end
