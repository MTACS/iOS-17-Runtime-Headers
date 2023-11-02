
@interface PUPhotoKitAssetActionManager : PUAssetActionManager {
    PUPhotoKitDataSourceManager * _dataSourceManager;
    bool  _enableNavigateToPhotos;
}

@property (nonatomic, retain) PUPhotoKitDataSourceManager *dataSourceManager;
@property (nonatomic) bool enableNavigateToPhotos;

+ (Class)actionPerformerClassForActionType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_actionTypeIsSimple:(unsigned long long)arg1;
- (id)_photoKitAssetsDataSource;
- (id)_photosDataSource;
- (id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)actionPerformerForEditingWithQuickCropContext:(id)arg1 onAsset:(id)arg2;
- (id)actionPerformerForPastingAdjustmentsByAssetCollection:(id)arg1;
- (id)actionPerformerForRemoveAssetsFromFeaturedPhotosByAssetCollection:(id)arg1 assetToSuggestionMap:(id)arg2;
- (id)actionPerformerForRevertingAdjustmentsByAssetCollection:(id)arg1;
- (id)actionPerformerForSettingFavoriteTo:(bool)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (id)dataSourceManager;
- (bool)enableNavigateToPhotos;
- (void)setDataSourceManager:(id)arg1;
- (void)setEnableNavigateToPhotos:(bool)arg1;
- (bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;

@end
