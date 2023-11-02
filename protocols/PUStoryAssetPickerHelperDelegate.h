
@protocol PUStoryAssetPickerHelperDelegate <NSObject>

@required

- (void)storyPickerHelper:(PUStoryAssetPickerHelper *)arg1 didFinishPicking:(id <PXDisplayAssetFetchResult>)arg2 promotedAssets:(id <PXDisplayAssetFetchResult>)arg3 demotedAssets:(id <PXDisplayAssetFetchResult>)arg4;

@end
