
@protocol PLModelMigrationContext <NSObject>

@required

- (PLCoreAnalyticsEventManager *)analyticsEventManager;
- (long long)libraryIdentifier;
- (PLModelMigrationHistory *)modelMigrationHistory;
- (PLPhotoLibraryPathManager *)pathManager;
- (unsigned int)policy;

@end
