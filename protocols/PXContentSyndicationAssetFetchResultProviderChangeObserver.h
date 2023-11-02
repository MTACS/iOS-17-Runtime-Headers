
@protocol PXContentSyndicationAssetFetchResultProviderChangeObserver <NSObject>

@required

- (void)assetFetchResultProvider:(id <PXContentSyndicationAssetFetchResultProvider>)arg1 didChangeAssetFetchResult:(id <PXDisplayAssetFetchResult>)arg2 forAssetCollection:(id <PXDisplayAssetCollection>)arg3;

@end
