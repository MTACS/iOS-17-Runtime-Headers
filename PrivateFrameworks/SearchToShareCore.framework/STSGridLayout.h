
@interface STSGridLayout : UICollectionViewLayout {
    NSDictionary * _cellAttributes;
    double  _contentSizeMaxY;
    UICollectionViewLayoutAttributes * _footerAttributes;
    double  _footerHeight;
    NSNumber * _hasOnlyLargeItems;
    NSDictionary * _headerAttributes;
    double  _headerHeight;
    double  _itemSpacing;
    NSDictionary * _tileAttributes;
    NSMutableDictionary * _tileSmallFrameCache;
}

@property (nonatomic) double footerHeight;
@property (nonatomic) double headerHeight;
@property (nonatomic) double itemSpacing;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_availableContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_gridFrameForRow:(unsigned long long)arg1 andColumn:(unsigned long long)arg2 inSize:(struct CGSize { double x1; double x2; })arg3;
- (id)_gridLayoutDelegate;
- (id)_gridTilesForCurrentDataSource;
- (bool)_hasOnlyLargeItems;
- (void)_redistributeLastRowItemsInTiles:(id)arg1 withTilesPerRow:(unsigned long long)arg2;
- (id)_tileSmallFramesForSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)_tilesPerRowAndWidth:(double*)arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (double)footerHeight;
- (double)headerHeight;
- (id)init;
- (void)invalidateLayout;
- (double)itemSpacing;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (long long)maximumCellsPerRow;
- (void)prepareLayout;
- (void)setFooterHeight:(double)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setItemSpacing:(double)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
