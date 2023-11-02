
@interface PosterBoard.PosterRackStackedLayout : UICollectionViewLayout {
    void alongsideCardLesserUpscale;
    void alongsideCardUpscale;
    void alongsideCompactLayoutShouldScaleFurtherBack;
    void backBaseOffset;
    void backParallaxMultiplier;
    void backParallaxMultiplierPad;
    void cachedAttributes;
    void cachedSupplementaryDecorationAttributes;
    void cachedSupplementaryFooterAttributes;
    void cachedSupplementaryHeaderAttributes;
    void cardSizeMultiplier;
    void contentBounds;
    void coupledContentEdgeMargin;
    void hidesHomeCardsInAlongsideLayout;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  indexPathToMaintainForTransition;
    void itemSize;
    void layoutMode;
    void layoutModeTransitioningTo;
    void maximumVerticalRevealFraction;
    void minimumLineSpacing;
    void overhangMultiplier;
    void peekingCardSizeMultiplier;
    void scrollDirection;
    void sectionIndexPathsToDelete;
    void sectionInset;
    void sectionRevealProgressProvider;
    void sectionRevealProgresses;
    void selectedFrontBaseOffset;
    void selectedSectionIndex;
    void unselectedFrontBaseOffset;
    void unselectedFrontParallaxLeadingMultiplier;
    void unselectedFrontParallaxTrailingMultiplier;
    void unselectedFrontShovedMultiplier;
    void unselectedFrontShovedMultiplierPad;
    void zoomCardSizeMultiplier;
    void zoomCardSizeOverlapMultiplier;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } collectionViewContentSize;
@property (nonatomic, readonly) bool flipsHorizontallyInOppositeLayoutDirection;

- (void).cxx_destruct;
- (bool)_disablesDoubleSidedAnimations;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeCollectionViewUpdates;
- (void)finalizeLayoutTransition;
- (bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareLayout;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
