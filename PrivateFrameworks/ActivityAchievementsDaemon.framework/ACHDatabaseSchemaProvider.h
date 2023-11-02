
@interface ACHDatabaseSchemaProvider : NSObject <HDDatabaseSchemaProvider>

@property (nonatomic, readonly, copy) NSString *schemaName;

- (void)_addAddAvailableCountryCodesColumnMigrationToMigrator:(id)arg1;
- (void)_addAddSuffixesColumnMigrationToMigrator:(id)arg1;
- (void)_addDailyTargetExpressionAndUnitColumnsMigrationToMigrator:(id)arg1;
- (void)_addDropSyncAnchorSaveOffTableIfNecessaryToMigrator:(id)arg1;
- (void)_addEarnedInstancesExternalIdentifierMigrationToMigrator:(id)arg1;
- (void)_addGraceExpressionColumnsMigrationToMigrator:(id)arg1;
- (void)_addGracePredicateColumnsMigrationToMigrator:(id)arg1;
- (void)_addMisnamedTemplateRemovalToMigrator:(id)arg1;
- (void)_addNullTemplatesRemovalToMigrator:(id)arg1;
- (void)_addPrereqisiteTemplateNameFieldToTemplates:(id)arg1;
- (void)_addResetSyncAnchorsMigrationStepToMigrator:(id)arg1;
- (void)_addSyncAnchorSaveOffMigrationStepToMigrator:(id)arg1;
- (void)_addSyncIdentityColumnToEarnedInstanceEntityToMigrator:(id)arg1;
- (void)_addSyncIdentityColumnToTemplateEntityToMigrator:(id)arg1;
- (void)_addTemplateRowIdBumpToMigrator:(id)arg1;
- (void)_addValidateEarnedInstanceRowStepToMigrator:(id)arg1;
- (void)_addVersion5MigratorToMigrator:(id)arg1;
- (void)_removeErroneousFitnessPlusTemplates:(id)arg1;
- (void)_removeErroneousWorkoutTemplates:(id)arg1;
- (void)_removeMoveGoalMultiplierEarnedInstances:(id)arg1;
- (void)_removePerfectMonthEarnedInstances:(id)arg1;
- (void)_updateGoalFor31DaysSeptemberMonthlyChallenge:(id)arg1;
- (long long)currentSchemaVersionForProtectionClass:(long long)arg1;
- (id)databaseEntitiesForProtectionClass:(long long)arg1;
- (void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(id)arg2;
- (id)schemaName;

@end
