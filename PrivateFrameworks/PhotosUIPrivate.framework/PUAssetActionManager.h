
@interface PUAssetActionManager : NSObject {
    <PUAssetActionManagerDelegate> * _delegate;
}

@property (nonatomic) <PUAssetActionManagerDelegate> *delegate;
@property (nonatomic, readonly) PXSectionedSelectionManager *px_selectionManager;

+ (id /* block */)_unlockDeviceHandler;
+ (id)actionManagerLog;
+ (void)setUnlockDeviceHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_assetsByAssetCollectionForAssetReferences:(id)arg1;
- (id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)actionPerformerForEditingWithQuickCropContext:(id)arg1 onAsset:(id)arg2;
- (id)actionPerformerForPastingAdjustmentsByAssetCollection:(id)arg1;
- (id)actionPerformerForRemoveAssetsFromFeaturedPhotosByAssetCollection:(id)arg1 assetToSuggestionMap:(id)arg2;
- (id)actionPerformerForRevertingAdjustmentsByAssetCollection:(id)arg1;
- (id)actionPerformerForSettingFavoriteTo:(bool)arg1 onAssetReferences:(id)arg2;
- (id)actionPerformerForSettingFavoriteTo:(bool)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetReferences:(id)arg2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)barButtonItemForActionType:(unsigned long long)arg1;
- (bool)canPerformAction:(unsigned long long)arg1 onAllAssetReferences:(id)arg2;
- (bool)canPerformAction:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;
- (bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (id)delegate;
- (id)localizedTitleForActionType:(unsigned long long)arg1;
- (id)px_selectionManager;
- (void)setDelegate:(id)arg1;
- (bool)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;
- (bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;

@end
