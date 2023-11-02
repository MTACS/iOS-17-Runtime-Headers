
@interface HDRaceRouteClusterEntity : HDHealthEntity <HDNanoSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (id)entityForClusterUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)enumerateRoutePointsForClusterUUID:(id)arg1 workoutSelection:(unsigned long long)arg2 timestampAnchor:(double)arg3 limit:(unsigned long long)arg4 profile:(id)arg5 error:(id*)arg6 dataHandler:(id /* block */)arg7;
+ (id)foreignKeys;
+ (bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5;
+ (id)insertCodableCluster:(id)arg1 syncProvenance:(long long)arg2 syncIdentity:(long long)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (id)insertOrUpdateRacingCluster:(id)arg1 routeSnapshot:(id)arg2 syncIdentity:(long long)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)privateSubEntities;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (bool)pruneRaceRouteClustersWithEligibleEntities:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)raceRouteClustersForActivityType:(unsigned long long)arg1 profile:(id)arg2 error:(id*)arg3;
+ (long long)receiveSyncObjects:(id)arg1 version:(struct { int x1; int x2; })arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (bool)supportsSyncStore:(id)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;
+ (id)uniquedColumns;
+ (bool)unitTest_deleteAllClusterAndBackingDataInTransaction:(id)arg1 error:(id*)arg2;

@end
