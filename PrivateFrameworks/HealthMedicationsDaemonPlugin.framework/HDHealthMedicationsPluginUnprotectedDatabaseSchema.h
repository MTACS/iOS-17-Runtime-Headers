
@interface HDHealthMedicationsPluginUnprotectedDatabaseSchema : NSObject <HDHealthMedicationsPluginDatabaseSchema>

@property (nonatomic, readonly) long long currentSchemaVersion;
@property (nonatomic, readonly, copy) NSArray *databaseEntities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)currentSchemaVersion;
- (id)databaseEntities;
- (void)registerMigrationStepsWithMigrator:(id)arg1 schemaName:(id)arg2;

@end
