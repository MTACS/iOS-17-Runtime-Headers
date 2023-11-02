
@interface ICCloudContentTasteRequestListener : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSXPCConnection * _xpcConnection;
}

+ (id)sharedCloudContentTasteRequestListener;

- (void).cxx_destruct;
- (id)_init;
- (void)_setupContentTasteServiceConnection;
- (id)init;
- (void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 configuration:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setContentTaste:(long long)arg1 forArtistStoreID:(long long)arg2 configuration:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setContentTaste:(long long)arg1 forArtistStoreID:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 configuration:(id)arg4 timeStamp:(id)arg5 withCompletionHandler:(id /* block */)arg6;
- (void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 timeStamp:(id)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 configuration:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(bool)arg1 configuration:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(bool)arg1 withCompletionHandler:(id /* block */)arg2;

@end
