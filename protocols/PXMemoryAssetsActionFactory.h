
@protocol PXMemoryAssetsActionFactory

@required

- (<PXMemoryAssetsPickerPresenter> *)assetsPickerPresenter;
- (PXPhotosAction *)rearrangeMemoryAssetsActionWithAssetCollection:(PHAssetCollection *)arg1 movedAssets:(id <PXFastEnumeration>)arg2 beforeAsset:(PHAsset *)arg3;

@end
