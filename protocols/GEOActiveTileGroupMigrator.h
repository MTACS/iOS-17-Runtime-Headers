
@protocol GEOActiveTileGroupMigrator <NSObject>

@required

- (id)initWithManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 mapLayerDataManager:(GEOMapLayerDataManager *)arg2;
- (<GEOActiveTileGroupMigrationTask> *)taskForNewTileGroup:(GEOTileGroup *)arg1 inResourceManifest:(GEOResources *)arg2 oldTileGroup:(GEOActiveTileGroup *)arg3 activeScales:(NSSet *)arg4 activeScenarios:(NSSet *)arg5 dataSet:(GEODataSetDescription *)arg6 updateType:(long long)arg7;

@optional

- (bool)needsMigrationForNewTileGroup:(GEOTileGroup *)arg1 inResourceManifest:(GEOResources *)arg2 oldTileGroup:(GEOActiveTileGroup *)arg3 dataSet:(GEODataSetDescription *)arg4;
- (<GEOActiveTileGroupMigrationTask> *)opportunisticTaskForNewTileGroup:(GEOTileGroup *)arg1 inResourceManifest:(GEOResources *)arg2 oldTileGroup:(GEOActiveTileGroup *)arg3 activeScales:(NSSet *)arg4 activeScenarios:(NSSet *)arg5 dataSet:(GEODataSetDescription *)arg6;

@end
