
@interface MPContentTasteController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _pendingUpdateRecordByPlaylistGlobalID;
    NSMutableDictionary * _pendingUpdateRecordByStoreAdamID;
    ICUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) ICUserIdentity *userIdentity;

+ (void)_postNotificationName:(id)arg1 controller:(id)arg2;
+ (void)_postNotificationName:(id)arg1 controller:(id)arg2 userInfo:(id)arg3;
+ (id)_tasteControllerWithUserIdentity:(id)arg1 isSingleton:(bool)arg2 createIfRequired:(bool)arg3;
+ (id)controllerWithUserIdentity:(id)arg1;
+ (id)controllers;
+ (id)globalSerialQueue;
+ (id)sharedController;

- (void).cxx_destruct;
- (id)_ML3QueryWithEntityClass:(Class)arg1 predicate:(id)arg2 options:(long long)arg3;
- (id)_addPendingUpdateRecord:(id)arg1 withKey:(id)arg2 inDictionary:(id)arg3;
- (id)_addPendingUpdateRecordForPlaylistGlobalID:(id)arg1 contentTasteType:(long long)arg2;
- (id)_addPendingUpdateRecordForStoreAdamID:(long long)arg1 contentTasteType:(long long)arg2;
- (void)_deviceMediaLibraryDidChangeNotification:(id)arg1;
- (id)_initWithUserIdentity:(id)arg1;
- (id)_libraryEntityForModel:(id)arg1;
- (id)_libraryEntityWithStoreID:(long long)arg1 contentType:(long long)arg2;
- (void)_libraryPathDidChangeForTasteController:(id)arg1;
- (id)_libraryPlaylistWithGlobalID:(id)arg1;
- (id)_mediaLibrary;
- (id)_pendingUpdateRecordForKey:(id)arg1 inDictionary:(id)arg2;
- (id)_pendingUpdateRecordForPlaylistGlobalID:(id)arg1;
- (id)_pendingUpdateRecordForStoreAdamID:(long long)arg1;
- (void)_removePendingUpdateRecordForPlaylistGlobalID:(id)arg1 token:(id)arg2;
- (void)_removePendingUpdateRecordForStoreAdamID:(long long)arg1 token:(id)arg2;
- (id)init;
- (void)setTasteType:(long long)arg1 forMediaEntity:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setTasteType:(long long)arg1 forModel:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setTasteType:(long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setTasteType:(long long)arg1 forStoreAdamID:(long long)arg2 withContentType:(long long)arg3 completionHandler:(id /* block */)arg4;
- (long long)tasteTypeForMediaEntity:(id)arg1;
- (long long)tasteTypeForModel:(id)arg1;
- (long long)tasteTypeForPlaylistGlobalID:(id)arg1;
- (long long)tasteTypeForStoreAdamID:(long long)arg1;
- (id)userIdentity;

@end
