
@protocol PXContentSyndicationSocialLayerHighlightProvider <NSObject>

@required

- (void)fetchSocialLayerHighlightForAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <PXDisplayAsset> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SLHighlight *, void*
- (void)registerChangeObserver:(id <PXContentSyndicationSocialLayerHighlightProviderChangeObserver>)arg1 forAsset:(id <PXDisplayAsset>)arg2;
- (void)unregisterChangeObserver:(id <PXContentSyndicationSocialLayerHighlightProviderChangeObserver>)arg1 forAsset:(id <PXDisplayAsset>)arg2;

@end
