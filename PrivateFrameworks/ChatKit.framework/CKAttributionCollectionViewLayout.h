
@interface CKAttributionCollectionViewLayout : UICollectionViewLayout {
    NSArray * _attributeCollections;
    CKAttributionViewControllerDataModel * _dataModel;
    long long  _expandedSection;
    NSArray * _fromAttributeCollections;
    struct CGPoint { 
        double x; 
        double y; 
    }  _fromContentOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _fromContentSize;
    bool  _isAnimatedLayoutChange;
    long long  _layoutMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousContentOffset;
    UICollectionViewLayoutAttributes * _stickerDetailsLayoutAttributes;
}

@property (nonatomic, copy) NSArray *attributeCollections;
@property (nonatomic, readonly) CKAttributionViewControllerDataModel *dataModel;
@property (nonatomic) long long expandedSection;
@property (nonatomic, retain) NSArray *fromAttributeCollections;
@property (nonatomic) struct CGPoint { double x1; double x2; } fromContentOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } fromContentSize;
@property (nonatomic) bool isAnimatedLayoutChange;
@property (nonatomic) long long layoutMode;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousContentOffset;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *stickerDetailsLayoutAttributes;

- (void).cxx_destruct;
- (void)_initializeAttributeCollections;
- (void)_setupCollapsedLayout;
- (void)_setupExpandedLayout;
- (bool)_shouldFillInFromCenter;
- (double)_totalBallotContainersWidth;
- (id)attributeCollections;
- (void)cleanupAnimationCache;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)dataModel;
- (long long)expandedSection;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (id)fromAttributeCollections;
- (struct CGPoint { double x1; double x2; })fromContentOffset;
- (struct CGSize { double x1; double x2; })fromContentSize;
- (id)initWithDataModel:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (bool)isAnimatedLayoutChange;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 fromAttributesCollection:(id)arg3;
- (long long)layoutMode;
- (void)prepareForSectionLayoutAnimation:(long long)arg1;
- (void)prepareLayout;
- (struct CGPoint { double x1; double x2; })previousContentOffset;
- (void)setAttributeCollections:(id)arg1;
- (void)setExpandedSection:(long long)arg1;
- (void)setFromAttributeCollections:(id)arg1;
- (void)setFromContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFromContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsAnimatedLayoutChange:(bool)arg1;
- (void)setLayoutMode:(long long)arg1;
- (void)setPreviousContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStickerDetailsLayoutAttributes:(id)arg1;
- (void)setupAnimatedCollapsedLayout;
- (id)stickerDetailsLayoutAttributes;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
