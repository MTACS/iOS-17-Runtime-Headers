
@interface VideosExtrasCarouselCollectionViewLayout : UICollectionViewLayout <VideosExtrasCarouselCollectionViewLayout> {
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedCollectionViewContentSize;
    NSDictionary * _cachedLayoutAttributes;
    long long  _indexOfVisibleItemForBoundsChange;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cachedCollectionViewContentSize;
@property (nonatomic, retain) NSDictionary *cachedLayoutAttributes;
@property (nonatomic) long long indexOfVisibleItemForBoundsChange;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_contentOffsetForItemAtIndex:(long long)arg1 collectionViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)_indexOfVisibleItemForContentOffset:(struct CGPoint { double x1; double x2; })arg1 collectionViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)_neighboringItemVisibleWidth;
- (double)_spaceBetweenItems;
- (double)_spaceBetweenItemsForCollectionViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })cachedCollectionViewContentSize;
- (id)cachedLayoutAttributes;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (unsigned long long)indexOfVisibleItem;
- (long long)indexOfVisibleItemForBoundsChange;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (double)itemWidth;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareLayout;
- (void)setCachedCollectionViewContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCachedLayoutAttributes:(id)arg1;
- (void)setIndexOfVisibleItem:(unsigned long long)arg1;
- (void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setIndexOfVisibleItemForBoundsChange:(long long)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end