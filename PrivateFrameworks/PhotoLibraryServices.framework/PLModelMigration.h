
@interface PLModelMigration : NSObject <NSProgressReporting> {
    unsigned long long  _actionProgressPortion;
    unsigned long long  _actionProgressPortionPostRepair;
    unsigned long long  _actionProgressPortionPreRepair;
    NSMutableArray * _actions;
    NSMutableArray * _actionsPostRepair;
    NSMutableArray * _actionsPreRepair;
    NSMutableArray * _actionsStaged;
    bool  _allowRebuild;
    bool  _didCreateSqliteErrorIndicator;
    bool  _hadStagedMigration;
    <PLModelMigrationContext> * _internalMigrationContext;
    id  _legacyMigrationDelegate;
    PLModelMigratorLog * _logger;
    NSString * _migrationUUID;
    NSProgress * _progress;
}

@property (readonly) bool allowRebuild;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool didCreateSqliteErrorIndicator;
@property (readonly) unsigned long long hash;
@property (retain) id legacyMigrationDelegate;
@property (nonatomic, retain) PLModelMigratorLog *logger;
@property (nonatomic, retain) NSString *migrationUUID;
@property (nonatomic, retain) NSProgress *progress;
@property (readonly) Class superclass;

+ (int)currentModelVersion;

- (void).cxx_destruct;
- (id)_managedObjectModelForLightweightMigrationStageWithURL:(id)arg1;
- (id)_nextRequiredStagedMigrationVersionAfterVersion:(id)arg1;
- (void)_registerActionClass:(Class)arg1 actionsContainer:(id)arg2 progressPortion:(unsigned long long*)arg3;
- (id)_stagedManagedObjectModelURLWithStageVersion:(id)arg1;
- (void)actionRegistration;
- (id)addStoreWithCoordinator:(id)arg1 migrationUUID:(id)arg2 storeURL:(id)arg3 options:(id)arg4 description:(id)arg5 fromVersion:(int)arg6 toVersion:(int)arg7 progress:(id)arg8 progressUnitCount:(unsigned long long)arg9 error:(id*)arg10;
- (bool)allowRebuild;
- (id)analyticsEventManager;
- (bool)didCreateSqliteErrorIndicator;
- (id)initWithMigrationContext:(id)arg1 logger:(id)arg2;
- (bool)isMigrationCancelledWithError:(id*)arg1;
- (id)legacyMigrationDelegate;
- (id)logger;
- (long long)migratePostProcessingWithActions:(id)arg1 migrationActionType:(long long)arg2 progress:(id)arg3 progressUnitCount:(unsigned long long)arg4 error:(id*)arg5;
- (long long)migratePostProcessingWithProgressUnitCount:(unsigned long long)arg1 error:(id*)arg2;
- (long long)migrateSchemaMigrationWithAutoMigrationOptions:(id)arg1 currentStoreVersion:(id)arg2 error:(id*)arg3;
- (long long)migrateStagedMigrationWithAutoMigrationOptions:(id)arg1 currentStoreVersion:(id)arg2 error:(id*)arg3;
- (long long)migrateWithError:(id*)arg1;
- (id)migrationContext;
- (id)migrationUUID;
- (id)pathManager;
- (id)progress;
- (void)registerActionClass:(Class)arg1 onCondition:(bool)arg2;
- (void)registerPostRepairActionClass:(Class)arg1 onCondition:(bool)arg2;
- (void)registerPreRepairActionClass:(Class)arg1 onCondition:(bool)arg2;
- (void)registerStagedActionClass:(Class)arg1 onCondition:(bool)arg2;
- (void)resetBackgroundActionClass:(Class)arg1 onCondition:(bool)arg2;
- (long long)runMigrationAction:(id)arg1 withCoordinator:(id)arg2 error:(id*)arg3;
- (void)setLegacyMigrationDelegate:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setMigrationUUID:(id)arg1;
- (void)setProgress:(id)arg1;
- (long long)setupWithError:(id*)arg1;

@end
