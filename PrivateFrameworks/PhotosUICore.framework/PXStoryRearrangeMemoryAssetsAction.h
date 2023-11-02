
@interface PXStoryRearrangeMemoryAssetsAction : PXPhotosAction {
    PXStoryModel * _model;
    <PXFastEnumeration> * _movedAssets;
    PHAsset * _targetAsset;
}

@property (nonatomic, readonly) PXStoryModel *model;
@property (nonatomic, readonly) <PXFastEnumeration> *movedAssets;
@property (nonatomic, readonly) PHAsset *targetAsset;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)initWithModel:(id)arg1 movedAssets:(id)arg2 beforeAsset:(id)arg3;
- (id)model;
- (id)movedAssets;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)targetAsset;

@end
