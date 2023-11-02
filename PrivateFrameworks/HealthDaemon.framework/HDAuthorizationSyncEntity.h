
@interface HDAuthorizationSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)companionDidChangeForProfile:(id)arg1 error:(id*)arg2;
+ (id)createCodableSourceAuthorizationWithSource:(id)arg1 syncSession:(id)arg2;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)arg1;
+ (bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5;
+ (int)nanoSyncObjectType;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (long long)receiveSyncObjects:(id)arg1 version:(struct { int x1; int x2; })arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (bool)supportsSyncStore:(id)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;

@end