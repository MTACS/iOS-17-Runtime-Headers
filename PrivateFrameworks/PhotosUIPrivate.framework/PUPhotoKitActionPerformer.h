
@interface PUPhotoKitActionPerformer : PUAssetActionPerformer {
    PXPhotosDataSource * _photosDataSource;
}

@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, retain) PXPhotosDataSource *photosDataSource;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (id)_indexPathsInPhotosDataSource:(id)arg1;
- (void)forceIncludeAssetsInDataSource;
- (void)instantlyExcludeAssetsFromDataSource;
- (id)photosDataSource;
- (void)setPhotosDataSource:(id)arg1;
- (void)stopExcludingAssetsFromDataSource;

@end
