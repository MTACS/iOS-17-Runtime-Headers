
@interface PLModelMigrationActionCore : NSObject <PLModelMigrationActionCore> {
    PLModelMigratorLog * _logger;
    PLMigrationContext * _migrationContext;
    NSProgress * _progress;
}

@property (readonly) NSString *actionName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) PLModelMigratorLog *logger;
@property (readonly) PLMigrationContext *migrationContext;
@property (readonly) PLModelMigrationHistory *migrationHistory;
@property (readonly) PLPhotoLibraryPathManager *pathManager;
@property (retain) NSProgress *progress;
@property (readonly) unsigned short startingSchemaVersion;
@property (readonly) Class superclass;

+ (id)actionDescription;
+ (long long)actionProgressWeight;
+ (id)shortenedMigrationActionClassName;

- (void).cxx_destruct;
- (id)actionName;
- (id)cancellableDiscreteProgressWithTotalUnitCount:(long long)arg1 pendingParentUnitCount:(long long)arg2 cancellationHandler:(id /* block */)arg3;
- (id)description;
- (void)finalizeProgress;
- (id)initWithMigrationContext:(id)arg1 logger:(id)arg2 progress:(id)arg3;
- (bool)isCancelledWithError:(id*)arg1;
- (id)logger;
- (id)migrationContext;
- (id)migrationHistory;
- (id)pathManager;
- (id)progress;
- (void)setLogger:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setup;
- (unsigned short)startingSchemaVersion;

@end
