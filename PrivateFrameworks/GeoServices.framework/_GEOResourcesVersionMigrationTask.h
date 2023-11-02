
@interface _GEOResourcesVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {
    NSSet * _activeScales;
    NSSet * _activeScenarios;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    GEOResourceLoader * _immediateResourceLoader;
    NSArray * _loadedResources;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    GEOResourcesVersionMigrator * _migrator;
    GEOTileGroup * _newTileGroup;
    GEOActiveTileGroup * _oldTileGroup;
    GEOActiveTileGroupMigrationTaskOptions * _options;
    GEOPowerAssertion * _powerAssertion;
    GEODataSetDescription * _preferredDataSet;
    GEOReportedProgress * _progress;
    GEOResources * _resourceManifest;
    bool  _running;
    <NSObject> * _transaction;
    NSArray * _unloadedConditionalResources;
    GEOResourceLoader * _wifiOnlyResourceLoader;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedWeight;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOActiveTileGroupMigrationTaskOptions *options;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NSObject> *transaction;

+ (Class)_resourceLoaderClass;
+ (id)_resourcesDirectory:(id)arg1;

- (void).cxx_destruct;
- (void)_loadImmediateResources:(id)arg1 conditionalWifiResources:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_resourcesDirectory;
- (id)_staleResourceForResource:(id)arg1;
- (void)cancel;
- (long long)estimatedWeight;
- (id)init;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 dataSet:(id)arg5 oldTileGroup:(id)arg6 activeScales:(id)arg7 activeScenarios:(id)arg8;
- (id)options;
- (void)populateTileGroup:(id)arg1;
- (id)progress;
- (void)removeOldData:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1 callbackQueue:(id)arg2;
- (id)transaction;

@end
