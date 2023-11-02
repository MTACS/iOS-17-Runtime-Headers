
@interface HDHeartDaemonPlugin : NSObject <HDDatabaseSchemaProvider, HDDemoDataGeneratorProvider, HDPlugin, HDTaskServerClassProvider> {
    NSUserDefaults * _heartNotificationsUserDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *pluginIdentifier;
@property (nonatomic, readonly, copy) NSString *schemaName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_databaseSchemaForProtectionClass:(long long)arg1;
- (long long)currentSchemaVersionForProtectionClass:(long long)arg1;
- (id)databaseEntitiesForProtectionClass:(long long)arg1;
- (id)demoDataGeneratorClasses;
- (id)extensionForHealthDaemon:(id)arg1;
- (id)extensionForProfile:(id)arg1;
- (void)handleDatabaseObliteration;
- (id)init;
- (id)initWithHeartNotificationsUserDefaults:(id)arg1;
- (id)pluginIdentifier;
- (void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(id)arg2;
- (id)schemaName;
- (id)taskServerClasses;

@end
