
@interface PXRearrangeAssetCollectionAction : PXPhotosAction {
    PHFetchResult * _afterFetchResult;
    PHAssetCollection * _assetCollection;
    PHFetchResult * _beforeFetchResult;
    <PXFastEnumeration> * _movedAssets;
    PHAsset * _targetAsset;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) <PXFastEnumeration> *movedAssets;
@property (nonatomic, readonly) PHAsset *targetAsset;

+ (bool)canPerformOnCollection:(id)arg1;

- (void).cxx_destruct;
- (bool)_canPerformUndo;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (long long)adjustedTargetIndexForFetchResult:(id)arg1 movedAssets:(id)arg2 targetAsset:(id)arg3;
- (id)assetCollection;
- (id)initWithAssetCollection:(id)arg1 movedAssets:(id)arg2 targetAsset:(id)arg3;
- (id)movedAssets;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)targetAsset;

@end
