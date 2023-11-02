
@interface HDVersionedMedicationScheduleSyncEntity : NSObject <HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)decodeSyncObjectWithData:(id)arg1;
+ (bool)enumerateCodableObjectsForPredicate:(id)arg1 limit:(long long)arg2 orderingTerms:(id)arg3 transaction:(id)arg4 error:(id*)arg5 handler:(id /* block */)arg6;
+ (bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)pruneSyncedObjectsThroughAnchor:(id)arg1 limit:(unsigned long long)arg2 nowDate:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (bool)receiveCodableSchedules:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (long long)receiveSyncObjects:(id)arg1 version:(struct { int x1; int x2; })arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (struct { int x1; int x2; })supportedSyncVersionRange;
+ (bool)supportsSyncStore:(id)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;
+ (struct { int x1; int x2; })syncVersionRangeForSession:(id)arg1;

@end
