
@interface PLMigrationContext : NSObject <PLModelMigrationContext> {
    PLCoreAnalyticsEventManager * _analyticsEventManager;
    NSPersistentStoreCoordinator * _coordinator;
    PLLazyObject * _lazyModelMigrationHistory;
    long long  _libraryIdentifier;
    NSDictionary * _options;
    PLPhotoLibraryPathManager * _pathManager;
    unsigned int  _policy;
    unsigned short  _previousStoreVersion;
    NSPersistentStore * _store;
    NSURL * _storeURL;
}

@property (nonatomic, retain) PLCoreAnalyticsEventManager *analyticsEventManager;
@property (nonatomic, retain) NSPersistentStoreCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long libraryIdentifier;
@property (readonly) PLModelMigrationHistory *modelMigrationHistory;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic, retain) PLPhotoLibraryPathManager *pathManager;
@property unsigned int policy;
@property unsigned short previousStoreVersion;
@property (nonatomic, retain) NSPersistentStore *store;
@property (nonatomic, retain) NSURL *storeURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsEventManager;
- (id)coordinator;
- (void)dealloc;
- (id)initWithPathManager:(id)arg1 coordinator:(id)arg2 onStore:(id)arg3 orStoreURL:(id)arg4 version:(unsigned short)arg5 options:(id)arg6 migrationPolicy:(unsigned int)arg7 analyticsEventManager:(id)arg8;
- (long long)libraryIdentifier;
- (id)modelMigrationHistory;
- (id)newModelMigrationHistory;
- (id)options;
- (id)pathManager;
- (unsigned int)policy;
- (unsigned short)previousStoreVersion;
- (void)setAnalyticsEventManager:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setLibraryIdentifier:(long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setPathManager:(id)arg1;
- (void)setPolicy:(unsigned int)arg1;
- (void)setPreviousStoreVersion:(unsigned short)arg1;
- (void)setStore:(id)arg1;
- (void)setStoreURL:(id)arg1;
- (id)store;
- (id)storeURL;

@end
