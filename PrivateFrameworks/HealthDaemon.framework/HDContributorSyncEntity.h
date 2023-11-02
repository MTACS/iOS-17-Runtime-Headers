
@interface HDContributorSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_orderedProperties;
+ (id)_syncCodableContributorFromRow:(struct HDSQLiteRow { }*)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (id)excludedSyncStoresForSession:(id)arg1;
+ (bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (long long)receiveSyncObjects:(id)arg1 version:(struct { int x1; int x2; })arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;

@end
