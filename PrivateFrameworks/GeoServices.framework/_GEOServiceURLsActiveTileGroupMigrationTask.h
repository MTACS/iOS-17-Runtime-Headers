
@interface _GEOServiceURLsActiveTileGroupMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {
    GEODataSetDescription * _dataSetDescription;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    GEOServiceURLsActiveTileGroupMigrator * _migrator;
    GEOTileGroup * _newTileGroup;
    GEOActiveTileGroup * _oldTileGroup;
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

- (void).cxx_destruct;
- (void)cancel;
- (long long)estimatedWeight;
- (id)init;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 oldTileGroup:(id)arg5 dataSet:(id)arg6;
- (id)options;
- (void)populateTileGroup:(id)arg1;
- (id)progress;
- (void)removeOldData:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1 callbackQueue:(id)arg2;
- (id)transaction;

@end
