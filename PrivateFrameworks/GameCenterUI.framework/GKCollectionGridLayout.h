
@interface GKCollectionGridLayout : GKCollectionFocusingLayout {
    long long  _autoWidthColumns;
    bool  _centersItemsInExcessSpace;
    bool  _didPerformInitialContentInsetScroll;
    double  _extraSectionHeaderToCellSpace;
    NSDictionary * _footerAttributes;
    NSDictionary * _headerAttributes;
    NSDictionary * _itemAttributes;
    bool  _sectionInsetRelativeWithContentInset;
    NSIndexSet * _sectionsThatShowFootersWhenEmpty;
    NSIndexSet * _sectionsThatShowHeaderWhenEmpty;
    bool  _shouldPerformInitialScrollToContentInsetTop;
}

@property (nonatomic) long long autoWidthColumns;
@property (nonatomic) bool centersItemsInExcessSpace;
@property (nonatomic) bool didPerformInitialContentInsetScroll;
@property (nonatomic) double extraSectionHeaderToCellSpace;
@property (nonatomic, retain) NSDictionary *footerAttributes;
@property (nonatomic, retain) NSDictionary *headerAttributes;
@property (nonatomic, retain) NSDictionary *itemAttributes;
@property (nonatomic) bool sectionInsetRelativeWithContentInset;
@property (nonatomic, retain) NSIndexSet *sectionsThatShowFootersWhenEmpty;
@property (nonatomic, retain) NSIndexSet *sectionsThatShowHeaderWhenEmpty;
@property (nonatomic) bool shouldPerformInitialScrollToContentInsetTop;

- (void).cxx_destruct;
- (void)applyDefaults;
- (long long)autoWidthColumns;
- (bool)centersItemsInExcessSpace;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (bool)didPerformInitialContentInsetScroll;
- (double)extraSectionHeaderToCellSpace;
- (id)footerAttributes;
- (id)headerAttributes;
- (id)itemAttributes;
- (long long)lastValidSection;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (bool)sectionInsetRelativeWithContentInset;
- (id)sectionsThatShowFootersWhenEmpty;
- (id)sectionsThatShowHeaderWhenEmpty;
- (void)setAutoWidthColumns:(long long)arg1;
- (void)setCentersItemsInExcessSpace:(bool)arg1;
- (void)setDidPerformInitialContentInsetScroll:(bool)arg1;
- (void)setExtraSectionHeaderToCellSpace:(double)arg1;
- (void)setFooterAttributes:(id)arg1;
- (void)setHeaderAttributes:(id)arg1;
- (void)setItemAttributes:(id)arg1;
- (void)setSectionInsetRelativeWithContentInset:(bool)arg1;
- (void)setSectionsThatShowFootersWhenEmpty:(id)arg1;
- (void)setSectionsThatShowHeaderWhenEmpty:(id)arg1;
- (void)setShouldPerformInitialScrollToContentInsetTop:(bool)arg1;
- (bool)shouldPerformInitialScrollToContentInsetTop;

@end
