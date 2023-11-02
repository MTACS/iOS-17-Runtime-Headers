
@interface CKiCloudSyncStateBuilder : NSObject

+ (id)_messagesInCloudCountStringWithLongCount:(unsigned long long)arg1;
+ (id)_syncingMessagesStringWithLongCount:(unsigned long long)arg1;
+ (id)accountMismatchStateForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x1; id x2; unsigned long long x3; unsigned long long x4; id x5; })arg1;
+ (id)idleStateForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x1; id x2; unsigned long long x3; unsigned long long x4; id x5; })arg1;
+ (id)noSyncStorageAlmostFullForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x1; id x2; unsigned long long x3; unsigned long long x4; id x5; })arg1;
+ (id)noSyncStorageFullForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x1; id x2; unsigned long long x3; unsigned long long x4; id x5; })arg1;
+ (id)noSyncStorageOverFullForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x1; id x2; unsigned long long x3; unsigned long long x4; id x5; })arg1;
+ (id)syncCompleteForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x1; id x2; unsigned long long x3; unsigned long long x4; id x5; })arg1;
+ (id)syncDownloadingForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x1; id x2; unsigned long long x3; unsigned long long x4; id x5; })arg1;
+ (id)syncModelForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x1; id x2; unsigned long long x3; unsigned long long x4; id x5; })arg1;
+ (id)syncPausedAirplaneModeForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x1; id x2; unsigned long long x3; unsigned long long x4; id x5; })arg1;
+ (id)syncPausedCellularDataDisabledForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x1; id x2; unsigned long long x3; unsigned long long x4; id x5; })arg1;
+ (id)syncPausedNoInternetConnectionForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x1; id x2; unsigned long long x3; unsigned long long x4; id x5; })arg1;
+ (id)syncUploadingForDescriptor:(struct CKiCloudSyncStatusDescriptor { long long x1; id x2; unsigned long long x3; unsigned long long x4; id x5; })arg1;

@end
