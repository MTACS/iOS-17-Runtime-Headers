
@interface PXAddAssetsToAssetCollectionAction : PXAssetsAction {
    <PXFastEnumeration> * _addedAssets;
    PHAssetCollection * _assetCollection;
    PXContentSyndicationPhotoKitAssetGroup * _assetGroup;
    PHAsset * _dropTargetAsset;
    PHFetchResult * _existingAssets;
    bool  _shouldSortAssetsByCreationDate;
    PHPhotoLibrary * _targetPhotoLibrary;
}

@property (nonatomic, retain) <PXFastEnumeration> *addedAssets;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PXContentSyndicationPhotoKitAssetGroup *assetGroup;
@property (nonatomic, retain) PHAsset *dropTargetAsset;
@property (nonatomic, readonly) PHFetchResult *existingAssets;
@property (nonatomic) bool shouldSortAssetsByCreationDate;
@property (nonatomic, readonly) PHPhotoLibrary *targetPhotoLibrary;
@property (nonatomic, readonly) NSArray *unsavedSyndicatedAssets;

- (void).cxx_destruct;
- (void)_addAssets:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)actionNameLocalizationKey;
- (id)addedAssets;
- (id)assetCollection;
- (id)assetGroup;
- (id)dropTargetAsset;
- (id)existingAssets;
- (id)initWithAssets:(id)arg1 assetCollection:(id)arg2;
- (void)performAction:(id /* block */)arg1;
- (void)performRedo:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setAddedAssets:(id)arg1;
- (void)setDropTargetAsset:(id)arg1;
- (void)setShouldSortAssetsByCreationDate:(bool)arg1;
- (bool)shouldSortAssetsByCreationDate;
- (id)targetPhotoLibrary;
- (id)unsavedSyndicatedAssets;

@end
