
@interface HDDatabaseMigrator : NSObject {
    bool  _hasPerformedMigration;
    NSMutableArray * _migrationSteps;
    HDDatabaseSchemaManager * _schemaManager;
    HDDatabaseMigrationTransaction * _transaction;
}

@property (nonatomic, readonly) _HKBehavior *behavior;
@property (nonatomic, readonly) HDDatabaseSchemaManager *schemaManager;
@property (nonatomic, readonly) HDDatabaseMigrationTransaction *transaction;

- (void).cxx_destruct;
- (long long)_corry_rewriteHFDStep1WithError:(id*)arg1;
- (long long)_corry_rewriteHFDStep2WithError:(id*)arg1;
- (void)addLockstepMigrationForSchema:(id)arg1 toVersion:(long long)arg2 requiringVersion:(long long)arg3 foreignKeyStatus:(long long)arg4 handler:(id /* block */)arg5;
- (void)addMigrationForSchema:(id)arg1 toVersion:(long long)arg2 foreignKeyStatus:(long long)arg3 handler:(id /* block */)arg4;
- (void)addMigrationSteps:(id)arg1;
- (void)addMigrationTo:(long long)arg1 foreignKeys:(long long)arg2 handler:(id /* block */)arg3;
- (void)addMigrationTo:(long long)arg1 function:(int (*)arg2;
- (void)addMigrationTo:(long long)arg1 function:(int (*)arg2 foreignKeys:(long long)arg3;
- (void)addPrimaryMigrationSteps;
- (void)azul_addProtectedMigrationSteps;
- (void)azul_addUnprotectedMigrationSteps;
- (id)behavior;
- (id)boulderProtectedMigrationSteps;
- (id)boulderUnprotectedMigrationSteps;
- (id)butlerProtectedMigrationSteps;
- (id)butlerUnprotectedMigrationSteps;
- (id)cinarProtectedMigrationSteps;
- (id)cinarUnprotectedMigrationSteps;
- (id)corryProtectedMigrationSteps;
- (id)corryUnprotectedMigrationSteps;
- (void)dawn_addProtectedMigrationSteps;
- (void)dawn_addUnprotectedMigrationSteps;
- (id)eagleProtectedMigrationSteps;
- (id)eagleUnprotectedMigrationSteps;
- (id)emetProtectedMigrationSteps;
- (id)emetUnprotectedMigrationSteps;
- (id)erieProtectedMigrationSteps;
- (id)erieUnprotectedMigrationSteps;
- (bool)executeSQL:(id)arg1 error:(id*)arg2;
- (bool)executeSQLStatements:(id)arg1 error:(id*)arg2;
- (unsigned long long)fetchLegacySyncIdentity:(id)arg1 error:(id*)arg2;
- (void)future_addProtectedMigrationSteps;
- (void)future_addUnprotectedMigrationSteps;
- (id)init;
- (id)initWithTransaction:(id)arg1;
- (void)invalidate;
- (long long)migrateFromVersion:(long long)arg1 toVersion:(long long)arg2 error:(id*)arg3;
- (id)monarchProtectedMigrationSteps;
- (id)monarchUnprotectedMigrationSteps;
- (id)okemoZursProtectedMigrationSteps;
- (id)okemoZursUnprotectedMigrationSteps;
- (void)peace_addProtectedMigrationSteps;
- (void)peace_addUnprotectedMigrationSteps;
- (long long)performHFDMigrationToVersion:(long long)arg1 handler:(id /* block */)arg2 error:(id*)arg3;
- (id)schemaManager;
- (void)sky_addProtectedMigrationSteps;
- (void)sky_addUnprotectedMigrationSteps;
- (void)sydney_addProtectedMigrationSteps;
- (void)sydney_addUnprotectedMigrationSteps;
- (id)tigrisProtectedMigrationSteps;
- (id)tigrisUnprotectedMigrationSteps;
- (id)transaction;
- (id)whitetailProtectedMigrationSteps;
- (id)whitetailUnprotectedMigrationSteps;
- (void)yukon_addProtectedMigrationSteps;
- (void)yukon_addUnprotectedMigrationSteps;

@end
