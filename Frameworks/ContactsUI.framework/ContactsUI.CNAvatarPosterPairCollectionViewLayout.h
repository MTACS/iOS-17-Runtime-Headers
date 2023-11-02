
@interface ContactsUI.CNAvatarPosterPairCollectionViewLayout : UICollectionViewLayout {
    void cachedAttributes;
    void cachedSupplementaryFooterAttributes;
    void cardSizeMultiplier;
    void contentBounds;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  indexPathToMaintainForTransition;
    void itemIndexPathsToDelete;
    void itemRevealProgressProvider;
    void itemRevealProgresses;
    void itemSize;
    void maximumVerticalRevealFraction;
    void minimumInterimSpacing;
    void mode;
    void scrollDirection;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } collectionViewContentSize;
@property (nonatomic, readonly) bool flipsHorizontallyInOppositeLayoutDirection;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeCollectionViewUpdates;
- (bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
