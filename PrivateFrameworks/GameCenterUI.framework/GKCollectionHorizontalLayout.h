
@interface GKCollectionHorizontalLayout : GKCollectionFocusingLayout {
    bool  _alignItemsToTop;
    bool  _centersItemsInExcessSpace;
    double  _extraSectionHeaderToCellSpace;
    NSDictionary * _headerAttributes;
    NSDictionary * _itemAttributes;
    double  _scrollStepIntegral;
}

@property (nonatomic) bool alignItemsToTop;
@property (nonatomic) bool centersItemsInExcessSpace;
@property (nonatomic) double extraSectionHeaderToCellSpace;
@property (nonatomic, retain) NSDictionary *headerAttributes;
@property (nonatomic, retain) NSDictionary *itemAttributes;
@property (nonatomic) double scrollStepIntegral;

- (void).cxx_destruct;
- (bool)alignItemsToTop;
- (void)applyDefaults;
- (bool)centersItemsInExcessSpace;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (double)extraSectionHeaderToCellSpace;
- (long long)firstValidSection;
- (id)headerAttributes;
- (id)itemAttributes;
- (long long)lastValidSection;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (double)maxHeaderHeight;
- (void)prepareLayout;
- (double)scrollStepIntegral;
- (void)setAlignItemsToTop:(bool)arg1;
- (void)setCentersItemsInExcessSpace:(bool)arg1;
- (void)setExtraSectionHeaderToCellSpace:(double)arg1;
- (void)setHeaderAttributes:(id)arg1;
- (void)setItemAttributes:(id)arg1;
- (void)setScrollStepIntegral:(double)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end
