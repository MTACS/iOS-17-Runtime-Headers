
@interface PXGPPTGridStackLayout : PXGStackLayout <PXGAssetBadgeDecorationSource, PXGSelectionDecorationSource, PXGSolidColorSource, PXGSublayoutProvider> {
    struct PXAssetBadgeInfo { 
        unsigned long long badges; 
        double duration; 
        long long count; 
        long long fileSize; 
    }  _assetBadgeInfos;
    bool  _decorated;
    long long  _estimatedNumberOfRowsPerSection;
    long long  _numberOfColumns;
    long long  _numberOfItemsPerSection;
    NSIndexSet * _selectedItemsPerSection;
    long long  _selectionDecorationStyle;
    UIColor * _spriteColor;
    bool  _useAssetBadgeDecoration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeBadgeInfos;
- (void)_initializeSelectedItems;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })assetBadgeInfoForAsset:(id)arg1 atSpriteIndex:(unsigned int)arg2 inLayout:(id)arg3;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)initWithSettings:(id)arg1;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize { double x1; double x2; })arg3;
- (id)layout:(id)arg1 navigationObjectReferenceForSublayoutAtIndex:(long long)arg2;
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (struct { float x1; float x2; float x3; float x4; })overlayInsetsForSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)selectedSpriteIndexesInLayout:(id)arg1;
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)arg1;
- (long long)selectionDecorationStyleInLayout:(id)arg1;
- (bool)wantsAssetBadgeDecorationsInLayout:(id)arg1;
- (bool)wantsFileSizeBadgesInLayout:(id)arg1;
- (bool)wantsInteractiveFavoriteBadgesInLayout:(id)arg1;

@end
