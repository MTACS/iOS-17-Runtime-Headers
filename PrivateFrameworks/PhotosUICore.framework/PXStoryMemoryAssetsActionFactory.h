
@interface PXStoryMemoryAssetsActionFactory : NSObject <PXMemoryAssetsActionFactory> {
    PXStoryViewModel * _viewModel;
}

@property (nonatomic, readonly) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (id)assetsPickerPresenter;
- (id)initWithViewModel:(id)arg1;
- (id)rearrangeMemoryAssetsActionWithAssetCollection:(id)arg1 movedAssets:(id)arg2 beforeAsset:(id)arg3;
- (id)viewModel;

@end
