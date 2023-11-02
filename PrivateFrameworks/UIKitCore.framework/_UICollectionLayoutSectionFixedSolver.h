
@interface _UICollectionLayoutSectionFixedSolver : NSObject <_UICollectionLayoutAuxillaryHosting, _UICollectionLayoutSectionSolver> {
    <NSCollectionLayoutContainer> * _container;
    unsigned long long  _containerLayoutAxis;
    NSString * _errorDescription;
    long long  _frameCount;
    unsigned long long  _layoutAxis;
    bool  _layoutRTL;
    NSCollectionLayoutSection * _layoutSection;
    <NSCollectionLayoutContainer> * _memoizedAuxillaryHostContainer;
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
    _UICollectionLayoutAuxillaryItemSolver * _sectionAuxillarySolution;
    _UICollectionLayoutSectionGeometryTranslator * _sectionGeometryTranslator;
    _UICollectionLayoutSupplementaryEnroller * _sectionSupplementaryEnroller;
    bool  _shouldAdjustContentSizeForPartialLastGroupSolution;
    _UICollectionLayoutItemSolver * _solution;
    <NSCollectionLayoutContainer> * _supplementaryContainer;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, retain) <NSCollectionLayoutContainer> *container;
@property (nonatomic) unsigned long long containerLayoutAxis;
@property (nonatomic, readonly) unsigned long long containerSizeDependentAxes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrameIncludingAuxiliaries;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *errorDescription;
@property (nonatomic) long long frameCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long layoutAxis;
@property (nonatomic) bool layoutRTL;
@property (nonatomic, retain) NSCollectionLayoutSection *layoutSection;
@property (nonatomic) struct CGPoint { double x1; double x2; } orthogonalOffset;
@property (nonatomic) struct CGVector { double x1; double x2; } orthogonalScrollingPrefetchingUnitVector;
@property (nonatomic, readonly) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } primaryContentFrame;
@property (nonatomic) bool shouldAdjustContentSizeForPartialLastGroupSolution;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NSCollectionLayoutContainer> *supplementaryContainer;
@property (nonatomic, retain) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (double)_dimensionForRootGroupAlongAxis:(unsigned long long)arg1;
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
- (unsigned long long)containerLayoutAxis;
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
- (void)setContainer:(id)arg1;
- (void)setContainerLayoutAxis:(unsigned long long)arg1;
- (void)setFrameCount:(long long)arg1;
- (void)setLayoutAxis:(unsigned long long)arg1;
- (void)setLayoutRTL:(bool)arg1;
- (void)setLayoutSection:(id)arg1;
- (void)setOrthogonalOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOrthogonalScrollingPrefetchingUnitVector:(struct CGVector { double x1; double x2; })arg1;
- (void)setShouldAdjustContentSizeForPartialLastGroupSolution:(bool)arg1;
- (void)setSupplementaryContainer:(id)arg1;
- (void)setTraitCollection:(id)arg1;
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
