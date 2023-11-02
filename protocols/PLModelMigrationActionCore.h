
@protocol PLModelMigrationActionCore <NSProgressReporting>

@required

+ (NSString *)actionDescription;
+ (long long)actionProgressWeight;
+ (NSString *)shortenedMigrationActionClassName;

- (NSString *)actionName;
- (NSProgress *)cancellableDiscreteProgressWithTotalUnitCount:(void *)arg1 pendingParentUnitCount:(void *)arg2 cancellationHandler:(void *)arg3; // needs 3 arg types, found 8: long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PLModelMigratorLog *, void*
- (void)finalizeProgress;
- (PLModelMigratorLog *)logger;
- (PLModelMigrationHistory *)migrationHistory;
- (PLPhotoLibraryPathManager *)pathManager;
- (void)setup;

@end
