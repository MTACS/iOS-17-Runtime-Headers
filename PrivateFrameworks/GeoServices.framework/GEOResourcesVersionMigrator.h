
@interface GEOResourcesVersionMigrator : NSObject <GEOActiveTileGroupMigrator> {
    geo_isolater * _isolater;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    NSMutableArray * _runningTasks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRunningTask:(id)arg1;
- (void)_removeRunningTask:(id)arg1;
- (id)initWithManifestConfiguration:(id)arg1 mapLayerDataManager:(id)arg2;
- (id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 dataSet:(id)arg6 updateType:(long long)arg7;

@end
