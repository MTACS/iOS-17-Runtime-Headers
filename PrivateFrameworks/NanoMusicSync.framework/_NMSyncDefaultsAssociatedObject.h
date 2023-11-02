
@interface _NMSyncDefaultsAssociatedObject : NSObject {
    MPMediaPlaylist * _assetSyncPlaylist;
}

@property (nonatomic, retain) MPMediaPlaylist *assetSyncPlaylist;

- (void).cxx_destruct;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (id)assetSyncPlaylist;
- (void)dealloc;
- (id)init;
- (void)setAssetSyncPlaylist:(id)arg1;

@end
