
@interface HDAuthorizationBackupSyncEntity : HDAuthorizationSyncEntity

+ (id)authorizationBackupPullIdentifierWithSyncStore:(id)arg1;
+ (id)authorizationBackupPushIdentifierWithSyncStore:(id)arg1;
+ (id)backupInfoUserDefaultsKey;
+ (id)createCodableSourceAuthorizationWithSource:(id)arg1 syncSession:(id)arg2;
+ (void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)arg1;
+ (id)excludedSyncIdentitiesForSession:(id)arg1;
+ (id)excludedSyncStoresForSession:(id)arg1;
+ (bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5;
+ (long long)receiveSyncObjects:(id)arg1 version:(struct { int x1; int x2; })arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (void)resetAuthorizationBackupIdentifiers;
+ (void)setAuthorizationBackupPushIdentifier:(id)arg1 syncStore:(id)arg2;
+ (bool)supportsSyncStore:(id)arg1;
+ (id)syncEntityIdentifier;

@end
