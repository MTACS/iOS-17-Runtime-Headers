
@interface PLBackgroundMigrationContext : NSObject <PLModelMigrationContext> {
    PLCoreAnalyticsEventManager * _analyticsEventManager;
    PLDatabaseContext * _databaseContext;
    PLLazyObject * _lazyModelMigrationHistory;
    long long  _libraryIdentifier;
    PLPhotoLibraryPathManager * _pathManager;
    unsigned int  _policy;
}

@property (nonatomic, retain) PLCoreAnalyticsEventManager *analyticsEventManager;
@property (nonatomic, retain) PLDatabaseContext *databaseContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long libraryIdentifier;
@property (readonly) PLModelMigrationHistory *modelMigrationHistory;
@property (nonatomic, retain) PLPhotoLibraryPathManager *pathManager;
@property unsigned int policy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsEventManager;
- (id)databaseContext;
- (void)dealloc;
- (id)initWithPathManager:(id)arg1 databaseContext:(id)arg2 analyticsEventManager:(id)arg3;
- (long long)libraryIdentifier;
- (id)modelMigrationHistory;
- (id)newModelMigrationHistory;
- (id)pathManager;
- (unsigned int)policy;
- (void)setAnalyticsEventManager:(id)arg1;
- (void)setDatabaseContext:(id)arg1;
- (void)setLibraryIdentifier:(long long)arg1;
- (void)setPathManager:(id)arg1;
- (void)setPolicy:(unsigned int)arg1;

@end
