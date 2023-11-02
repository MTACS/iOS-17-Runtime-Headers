
@interface PXWallpaperAssetVideoContentProvider : PXVideoContentProvider {
    PHAsset * _asset;
    NSString * _contentIdentifier;
}

@property (nonatomic, readonly) PHAsset *asset;

+ (id)_loadingQueue;

- (void).cxx_destruct;
- (void)_handleLoadedPlayerItem:(id)arg1 priority:(long long)arg2 error:(id)arg3;
- (void)_loadWallpaperAssetWithPriority:(long long)arg1;
- (id)asset;
- (void)beginLoadingWithPriority:(long long)arg1;
- (void)cancelLoading;
- (id)contentIdentifier;
- (id)init;
- (id)initWithWallpaperAsset:(id)arg1;
- (void)makeUniqueContentIdentifier;

@end
