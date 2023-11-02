
@interface HDHealthMedicationsPluginProtectedDatabaseSchema : NSObject <HDHealthMedicationsPluginDatabaseSchema>

@property (nonatomic, readonly) long long currentSchemaVersion;
@property (nonatomic, readonly, copy) NSArray *databaseEntities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)_addCompatibilityVersionColumnsWithTransaction:(id)arg1 error:(id*)arg2;
- (long long)_addUniqueConstraintToScheduleMedicationIdentifier:(id)arg1 error:(id*)arg2;
- (id)_getLegacySyncIdentityWithTransaction:(id)arg1 errorOut:(id*)arg2;
- (long long)_moveLifestyleFactorsFromUserDefaultsToKeyValueDomain:(id)arg1 error:(id*)arg2;
- (long long)_sydney_addSyncIdentityToMedicationScheduleEntityWithTransaction:(id)arg1 error:(id*)arg2;
- (long long)_sydney_createMedicationDismissedInteractionsTableWithTransaction:(id)arg1 error:(id*)arg2;
- (long long)_sydney_dropAndReAddMedicationScheduleTableWithTransaction:(id)arg1 error:(id*)arg2;
- (long long)_sydney_dropMedicationIngredientsTableWithTransaction:(id)arg1 error:(id*)arg2;
- (long long)currentSchemaVersion;
- (id)databaseEntities;
- (void)registerMigrationStepsWithMigrator:(id)arg1 schemaName:(id)arg2;

@end
