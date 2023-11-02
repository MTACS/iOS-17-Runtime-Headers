
@protocol PXMutableMomentShareStatus <NSObject>

@required

- (<PXDisplayAssetFetchResult> *)allAssetsFetchResult;
- (<PXDisplayAssetFetchResult> *)copiedAssetsFetchResult;
- (<PXDisplayAssetFetchResult> *)copyingAssetsFetchResult;
- (<PXDisplayMomentShare> *)momentShare;
- (void)setAllAssetsFetchResult:(id <PXDisplayAssetFetchResult>)arg1;
- (void)setCopiedAssetsFetchResult:(id <PXDisplayAssetFetchResult>)arg1;
- (void)setCopyingAssetsFetchResult:(id <PXDisplayAssetFetchResult>)arg1;
- (void)setMomentShare:(id <PXDisplayMomentShare>)arg1;

@end
