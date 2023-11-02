
@interface PUPXAssetActionManager : PUAssetActionManager {
    PXAssetActionManager * _underlyingActionManager;
}

@property (nonatomic, readonly) PXAssetActionManager *underlyingActionManager;

- (void).cxx_destruct;
- (id)_selectionSnapshotForAssetReferences:(id)arg1;
- (id)actionPerformerForSettingFavoriteTo:(bool)arg1 onAssetReferences:(id)arg2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetReferences:(id)arg2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)barButtonItemForActionType:(unsigned long long)arg1;
- (bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (id)init;
- (id)initWithUnderlyingActionManager:(id)arg1;
- (id)localizedTitleForActionType:(unsigned long long)arg1;
- (id)px_selectionManager;
- (bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (id)underlyingActionManager;

@end
