
@interface PXAssetsSelectionAction : PXPhotosAction {
    PXPhotosDataSource * _photosDataSource;
    PXSelectionSnapshot * _selectionSnapshot;
}

@property (nonatomic, readonly) PXPhotosDataSource *photosDataSource;
@property (nonatomic, readonly) <PXFastEnumeration> *selectedAssets;
@property (nonatomic, readonly) PXSelectionSnapshot *selectionSnapshot;

- (void).cxx_destruct;
- (void)enumerateSelectedAssetIndexSetsUsingBlock:(id /* block */)arg1;
- (id)initWithSelectionSnapshot:(id)arg1;
- (id)photosDataSource;
- (id)selectedAssets;
- (id)selectionSnapshot;

@end
