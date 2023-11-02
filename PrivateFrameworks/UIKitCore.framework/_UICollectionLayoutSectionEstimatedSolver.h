
@interface _UICollectionLayoutSectionEstimatedSolver : NSObject <_UICollectionLayoutAuxillaryHosting, _UICollectionLayoutSectionSolver> {
    <NSCollectionLayoutContainer> * _container;
    unsigned long long  _containerLayoutAxis;
    unsigned long long  _containerSizeDependentAxes;
    NSString * _errorDescription;
    long long  _frameCount;
    unsigned long long  _layoutAxis;
    bool  _layoutRTL;
    NSCollectionLayoutSection * _layoutSection;
    <NSCollectionLayoutContainer> * _memoizedSupplementaryHostContainer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _orthogonalOffset;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _orthogonalScrollingPrefetchingUnitVector;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _overrideContentRectForPinning;
    _UICollectionPreferredSizes * _preferredSizes;
    _UICollectionLayoutSupplementaryEnroller * _sectionSupplementaryEnroller;
    _UICollectionLayoutAuxillaryItemSolver * _sectionSupplementarySolution;
    bool  _shouldAdjustContentSizeForPartialLastGroupSolution;
    _UICollectionLayoutSolutionState * _solutionState;
    <NSCollectionLayoutContainer> * _supplementaryContainer;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) <NSCollectionLayoutContainer> *container;
@property (nonatomic, readonly) unsigned long long containerSizeDependentAxes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrameIncludingAuxiliaries;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *errorDescription;
@property (nonatomic, readonly) long long frameCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long layoutAxis;
@property (nonatomic, readonly) bool layoutRTL;
@property (nonatomic, readonly) NSCollectionLayoutSection *layoutSection;
@property (nonatomic) struct CGPoint { double x1; double x2; } orthogonalOffset;
@property (nonatomic) struct CGVector { double x1; double x2; } orthogonalScrollingPrefetchingUnitVector;
@property (nonatomic, readonly) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } primaryContentFrame;
@property (nonatomic) bool shouldAdjustContentSizeForPartialLastGroupSolution;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NSCollectionLayoutContainer> *supplementaryContainer;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustContentFrameForLastPartialSolutionIfNeededForContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 bookmarks:(id)arg2;
- (void)_configureInitialOrthogonalPrefetchingUnitVector;
- (double)_dimensionForRootGroupAlongAxis:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfBookmarksAffectedByResolveItems:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectWithContentInsetTrailingLayoutDimensionAddedToToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 layoutAxis:(unsigned long long)arg3;
- (id)_sectionContainer;
- (id)_solveWithParameters:(id)arg1;
- (void)_updateSolutionAuxillaryRangeIndexerKindDict:(id)arg1 fromBookmark:(id)arg2;
- (id)auxillaryHostAuxillaryItems;
- (long long)auxillaryHostAuxillaryKind;
- (id)auxillaryHostContainer;
- (struct CGSize { double x1; double x2; })auxillaryHostContentSize;
- (unsigned long long)auxillaryHostLayoutAxis;
- (double)auxillaryHostPaddingBeforeBoundarySupplementaries;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })auxillaryHostPinningRect;
- (id)auxillaryHostPreferredSizes;
- (bool)auxillaryHostShouldLayoutRTL;
- (id)auxillaryHostSupplementaryEnroller;
- (id)auxillaryHostTraitCollection;
- (bool)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
- (id)container;
- (unsigned long long)containerSizeDependentAxes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrameIncludingAuxiliaries;
- (id)errorDescription;
- (long long)frameCount;
- (id)frameForIndex:(long long)arg1;
- (unsigned long long)layoutAxis;
- (bool)layoutRTL;
- (id)layoutSection;
- (struct CGPoint { double x1; double x2; })orthogonalOffset;
- (struct CGVector { double x1; double x2; })orthogonalScrollingPrefetchingUnitVector;
- (id)pinnedSupplementaryIndexes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })preferredSizeGroupingRangeForItemAtIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })primaryContentFrame;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 frameOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)resolveWithParameters:(id)arg1 preferredSizes:(id)arg2;
- (id)sectionSupplementaryFrameForIndex:(long long)arg1;
- (id)sectionSupplementaryFrameWithKind:(id)arg1 index:(long long)arg2;
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg1;
- (void)setOrthogonalOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOrthogonalScrollingPrefetchingUnitVector:(struct CGVector { double x1; double x2; })arg1;
- (void)setShouldAdjustContentSizeForPartialLastGroupSolution:(bool)arg1;
- (void)setSupplementaryContainer:(id)arg1;
- (bool)shouldAdjustContentSizeForPartialLastGroupSolution;
- (void)solveForContainer:(id)arg1 supplementaryContainer:(id)arg2 traitCollection:(id)arg3 layoutAxis:(unsigned long long)arg4 frameCount:(long long)arg5 preferredSizes:(id)arg6 layoutRTL:(bool)arg7;
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4;
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5;
- (id)supplementaryContainer;
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2;
- (id)traitCollection;
- (id)unpinnedSectionSupplementaryFrameForIndex:(long long)arg1;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 overrideContentRectForPinning:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)visualDescription;

@end
