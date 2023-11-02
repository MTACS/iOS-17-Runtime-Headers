
@interface PXGPPTVideoPlaybackViewController : PXGPPTViewController <PXGDisplayAssetSource, PXGSolidColorSource, PXGSublayoutProvider> {
    PXAssetsDataSource * _dataSource;
    long long  _numberOfColumns;
    NSMapTable * _pixelBufferSourcesByDisplayAsset;
    NSObject<OS_dispatch_queue> * _pixelBufferSources_queue;
    UIColor * _spriteColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(id)arg2;
- (id)initWithAssetsDataSource:(id)arg1;
- (id)initWithLayout:(id)arg1;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize { double x1; double x2; })arg3;
- (id)layout:(id)arg1 navigationObjectReferenceForSublayoutAtIndex:(long long)arg2;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1;
- (void)viewDidLoad;

@end
