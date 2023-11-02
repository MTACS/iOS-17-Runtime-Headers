
@protocol PXContentSyndicationSocialLayerHighlightProviderChangeObserver <NSObject>

@required

- (void)socialLayerHighlightProvider:(id <PXContentSyndicationSocialLayerHighlightProvider>)arg1 didChangeSocialLayerHighlight:(SLHighlight *)arg2 forAsset:(id <PXDisplayAsset>)arg3;

@end
