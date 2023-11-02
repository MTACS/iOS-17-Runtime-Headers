
@interface HDMedicalIDSyncEntity : NSObject <HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_codableFromMedicalID:(id)arg1;
+ (id)_medicalIDFromCodable:(id)arg1;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5;
+ (id)getSyncProvencanceOfMedicalIDForProfile:(id)arg1 error:(id*)arg2;
+ (bool)incrementSyncAnchorWithProfile:(id)arg1 error:(id*)arg2;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (long long)receiveSyncObjects:(id)arg1 version:(struct { int x1; int x2; })arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (bool)setSyncProvenance:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)supportsSyncStore:(id)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;
+ (bool)touchSyncAnchorIfNecessaryWithProfile:(id)arg1 error:(id*)arg2;

@end
