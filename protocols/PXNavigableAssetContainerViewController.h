
@protocol PXNavigableAssetContainerViewController <NSObject>

@required

- (void)navigateToBottomAnimated:(bool)arg1;
- (void)navigateToPhoto:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 animated:(bool)arg3;
- (void)navigateToPhoto:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 refetchIfNeeded:(bool)arg3 animated:(bool)arg4;
- (void)navigateToRevealPhoto:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 animated:(bool)arg3;

@end
