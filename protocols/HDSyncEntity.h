
@protocol HDSyncEntity <NSObject>

@required

+ (<HDSyncCodable> *)decodeSyncObjectWithData:(NSData *)arg1;
+ (bool)generateSyncObjectsForSession:(HDSyncSession *)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 profile:(HDProfile *)arg3 messageHandler:(id <HDSyncMessageHandler>)arg4 error:(id*)arg5;
+ (NSSet *)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (HDSyncEntityIdentifier *)syncEntityIdentifier;

@optional

+ (int)currentSyncVersion;
+ (NSSet *)excludedSyncIdentitiesForSession:(HDSyncSession *)arg1;
+ (NSSet *)excludedSyncStoresForSession:(HDSyncSession *)arg1;
+ (long long)nextSyncAnchorWithSession:(HDSyncSession *)arg1 predicate:(HDSQLitePredicate *)arg2 startSyncAnchor:(long long)arg3 profile:(HDProfile *)arg4 error:(id*)arg5;
+ (long long)nextSyncAnchorWithSession:(HDSyncSession *)arg1 startSyncAnchor:(long long)arg2 profile:(HDProfile *)arg3 error:(id*)arg4;
+ (NSNumber *)pruneSyncedObjectsThroughAnchor:(NSNumber *)arg1 limit:(unsigned long long)arg2 nowDate:(NSDate *)arg3 profile:(HDProfile *)arg4 error:(id*)arg5;
+ (long long)receiveSyncObjects:(NSArray *)arg1 syncStore:(id <HDSyncStore>)arg2 profile:(HDProfile *)arg3 error:(id*)arg4;
+ (long long)receiveSyncObjects:(NSArray *)arg1 version:(struct { int x1; int x2; })arg2 syncStore:(id <HDSyncStore>)arg3 profile:(HDProfile *)arg4 error:(id*)arg5;
+ (struct { int x1; int x2; })supportedSyncVersionRange;
+ (bool)supportsDateBasedSharding;
+ (bool)supportsSyncStore:(id <HDSyncStore>)arg1;
+ (struct { int x1; int x2; })syncVersionRangeForSession:(HDSyncSession *)arg1;

@end
