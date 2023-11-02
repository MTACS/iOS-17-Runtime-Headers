
@interface PLModelMigrationActionBackground : NSObject <PLModelMigrationActionCore> {
    id /* block */  _continuationHandler;
    PLLazyObject * _lazyAppPrivateData;
    PLModelMigratorLog * _logger;
    <PLModelMigrationContext> * _migrationContext;
    NSProgress * _progress;
    NSString * _resumeMarkerKeyPath;
}

@property (readonly) NSString *actionName;
@property (copy) id /* block */ continuationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isCancelled;
@property (retain) PLModelMigratorLog *logger;
@property (readonly) <PLModelMigrationContext> *migrationContext;
@property (readonly) PLModelMigrationHistory *migrationHistory;
@property (readonly) PLPhotoLibraryPathManager *pathManager;
@property (retain) NSProgress *progress;
@property (readonly) Class superclass;

+ (id)actionDescription;
+ (long long)actionProgressWeight;
+ (id)shortenedMigrationActionClassName;

- (void).cxx_destruct;
- (id)actionName;
- (id)appPrivateData;
- (id)cancellableDiscreteProgressWithTotalUnitCount:(long long)arg1 pendingParentUnitCount:(long long)arg2 cancellationHandler:(id /* block */)arg3;
- (id /* block */)continuationHandler;
- (id)description;
- (void)finalizeProgress;
- (id)initWithMigrationContext:(id)arg1 logger:(id)arg2 progress:(id)arg3 continuationHandler:(id /* block */)arg4;
- (bool)isCancelled;
- (bool)isCancelledWithResumeMarker:(id)arg1 error:(id*)arg2;
- (id)logger;
- (id)migrationContext;
- (id)migrationHistory;
- (id)pathManager;
- (id)progress;
- (id)resumeMarker;
- (void)setContinuationHandler:(id /* block */)arg1;
- (void)setLogger:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setResumeMarkerValue:(id)arg1;
- (void)setup;

@end
