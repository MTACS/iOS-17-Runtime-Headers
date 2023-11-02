
@interface PXPhotosGridMessagesBodyLayout : PXGGridLayout <PXGDisplayAssetSource, PXGShadowSource> {
    PXPhotosGridAssetDecorationSource * _assetDecorationSource;
    <PXDisplayAssetFetchResult> * _cachedClampedFetchResult;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _cachedClampedItemRange;
    NSShadow * _contentShadow;
    PXAssetsDataSource * _dataSource;
    long long  _section;
    PXPhotosGridMessagesLayoutSpec * _spec;
}

@property (nonatomic, readonly) PXPhotosGridAssetDecorationSource *assetDecorationSource;
@property (nonatomic, readonly) PXAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long section;
@property (nonatomic, retain) PXPhotosGridMessagesLayoutSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateNumberOfColumns;
- (id)assetDecorationSource;
- (id)assetForItemIndex:(long long)arg1;
- (id)assetReferenceForItemIndex:(long long)arg1;
- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)dataSource;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(id)arg2;
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(id)arg2;
- (id)init;
- (long long)section;
- (void)setDataSource:(id)arg1 section:(long long)arg2;
- (void)setSpec:(id)arg1;
- (id)shadowForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)spec;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1;

@end
