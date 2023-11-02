
@interface CKSnapshotUtilities : NSObject

+ (void)_cacheSnapshotView:(id)arg1 forGUID:(id)arg2;
+ (long long)_convertUserInterfaceStyle:(long long)arg1;
+ (void)_saveSnapshot:(id)arg1 url:(id)arg2;
+ (id)_snapshotAtURL:(id)arg1;
+ (id)_snapshotViewForGUID:(id)arg1;
+ (void)cacheSnapshot:(id)arg1 guid:(id)arg2 postChangeNotification:(bool)arg3;
+ (bool)snapshotExistsForGUID:(id)arg1;
+ (id)snapshotForGUID:(id)arg1;
+ (id)snapshotKeyWithGuid:(id)arg1;

@end
