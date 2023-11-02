
@interface PXDayAssetsSectionBodyLayout : PXCuratedLibraryAssetsSectionGeneratedLayout <PXCuratedLibraryRowBasedLayout, PXGItemsGeometry> {
    long long  _numberOfPrecedingAssets;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredReferenceSize;
    PXDayAssetsSectionBodyLayoutSpec * _spec;
    long long  _style;
}

@property (nonatomic, readonly) double buildingRowContentHeight;
@property (nonatomic, readonly) double buildingRowSpacing;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minPlayableSpriteSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumItemSize;
@property (nonatomic) long long numberOfPrecedingAssets;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredReferenceSize;
@property (nonatomic, retain) PXDayAssetsSectionBodyLayoutSpec *spec;
@property (nonatomic) long long style;

+ (struct CGSize { double x1; double x2; })estimatedSizeWithReferenceSize:(struct CGSize { double x1; double x2; })arg1 spec:(id)arg2 style:(long long)arg3 numberOfAssets:(long long)arg4;

- (void).cxx_destruct;
- (long long)_initialItemInDirection:(unsigned long long)arg1;
- (id)_inputItemAtIndex:(unsigned int)arg1;
- (long long)_itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })_minSizeOfDominantSprites;
- (double)buildingRowContentHeight;
- (double)buildingRowSpacing;
- (void)contentSizeDidChange;
- (void)enumerateHeroSpritesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateRowsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)arg1;
- (id)exploreGenerator;
- (id)init;
- (long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2;
- (id)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2;
- (id)itemsGeometry;
- (id)itemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inLayout:(id)arg2;
- (struct CGSize { double x1; double x2; })minPlayableSpriteSize;
- (struct CGSize { double x1; double x2; })minimumItemSize;
- (id)newGenerator;
- (long long)numberOfPrecedingAssets;
- (struct CGSize { double x1; double x2; })preferredReferenceSize;
- (void)referenceSizeDidChange;
- (void)safeAreaInsetsDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sectionRect;
- (void)setNumberOfPrecedingAssets:(long long)arg1;
- (void)setPreferredReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSpec:(id)arg1;
- (void)setStyle:(long long)arg1;
- (id)spec;
- (struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })spriteIndexRangeCoveringRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)style;

@end
