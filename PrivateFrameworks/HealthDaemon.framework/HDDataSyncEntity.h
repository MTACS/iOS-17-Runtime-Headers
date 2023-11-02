
@interface HDDataSyncEntity : NSObject <HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;
+ (bool)_insertObjectsFromCodableObjectCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)_objectWithCodable:(id)arg1 collection:(id)arg2;
+ (id)_predicateForSyncSession:(id)arg1;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5;
+ (Class)healthEntityClass;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)objectsFromCodableObjectsInCollection:(id)arg1;
+ (id)pruneSyncedObjectsThroughAnchor:(id)arg1 limit:(unsigned long long)arg2 nowDate:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (long long)receiveSyncObjects:(id)arg1 version:(struct { int x1; int x2; })arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (bool)supportsDateBasedSharding;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;
+ (id)unitTest_predicateForSyncSession:(id)arg1;
+ (id)unitTest_pruningPredicateForDate:(id)arg1 profile:(id)arg2;

@end
