
@interface _GEORegionalResourcesVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {
    NSSet * _activeScales;
    NSSet * _activeScenarios;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    GEORegionalResourcesVersionMigrator * _migrator;
    GEOTileGroup * _newTileGroup;
    GEOActiveTileGroupMigrationTaskOptions * _options;
    GEOReportedProgress * _progress;
    GEOResources * _resourceManifest;
    <NSObject> * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedWeight;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOActiveTileGroupMigrationTaskOptions *options;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NSObject> *transaction;

+ (id)_resourcesDirectory:(id)arg1;

- (void).cxx_destruct;
- (id)_resourcesDirectory;
- (void)cancel;
- (long long)estimatedWeight;
- (id)init;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 activeScales:(id)arg5 activeScenarios:(id)arg6;
- (id)options;
- (void)populateTileGroup:(id)arg1;
- (id)progress;
- (void)removeOldData:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1 callbackQueue:(id)arg2;
- (id)transaction;

@end
