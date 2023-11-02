
@interface PLBackgroundModelMigration : NSObject <NSProgressReporting> {
    unsigned long long  _actionProgressPortionBackground;
    NSMutableArray * _actionsBackground;
    id /* block */  _continuationHandler;
    <PLModelMigrationContext> * _internalMigrationContext;
    PLLazyObject * _lazyAppPrivateData;
    PLModelMigratorLog * _logger;
    NSString * _migrationUUID;
    NSProgress * _progress;
}

@property (copy) id /* block */ continuationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PLModelMigratorLog *logger;
@property (nonatomic, retain) NSString *migrationUUID;
@property (nonatomic, retain) NSProgress *progress;
@property (readonly) Class superclass;

+ (bool)hasCompletedBackgroundActionClass:(Class)arg1 pathManager:(id)arg2;
+ (bool)isCompletedBackgroundActionClass:(Class)arg1 appPrivateData:(id)arg2;
+ (long long)migrateBackgroundActionsWithPhotoLibraryBundle:(id)arg1 logger:(id)arg2 error:(id*)arg3 continuationHandler:(id /* block */)arg4;
+ (bool)resetBackgroundActionClass:(Class)arg1 pathManager:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)analyticsEventManager;
- (id)appPrivateData;
- (id /* block */)continuationHandler;
- (id)databaseContext;
- (id)initBackgroundMigrationWithPhotoLibraryBundle:(id)arg1 logger:(id)arg2 continuationHandler:(id /* block */)arg3;
- (bool)isMigrationCancelledWithError:(id*)arg1;
- (long long)libraryIdentifier;
- (id)logger;
- (long long)migrateBackgroundPostProcessingWithError:(id*)arg1;
- (id)migrationContext;
- (id)migrationUUID;
- (id)pathManager;
- (id)progress;
- (void)registerBackgroundActionClass:(Class)arg1 onCondition:(bool)arg2;
- (long long)runBackgroundMigrationAction:(id)arg1 error:(id*)arg2;
- (void)setContinuationHandler:(id /* block */)arg1;
- (void)setLogger:(id)arg1;
- (void)setMarkerForBackgroundAction:(id)arg1 marker:(long long)arg2;
- (void)setMigrationUUID:(id)arg1;
- (void)setProgress:(id)arg1;

@end
