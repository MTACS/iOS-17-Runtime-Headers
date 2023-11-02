
@protocol _UICollectionLayoutSectionSolver <NSObject, _UICollectionLayoutAuxillaryHosting>

@required

- (double)_dimensionForRootGroupAlongAxis:(unsigned long long)arg1;
- (<NSCollectionLayoutContainer> *)container;
- (unsigned long long)containerSizeDependentAxes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrameIncludingAuxiliaries;
- (NSString *)errorDescription;
- (long long)frameCount;
- (_UICollectionLayoutFramesQueryResult *)frameForIndex:(long long)arg1;
- (unsigned long long)layoutAxis;
- (bool)layoutRTL;
- (NSCollectionLayoutSection *)layoutSection;
- (struct CGPoint { double x1; double x2; })orthogonalOffset;
- (struct CGVector { double x1; double x2; })orthogonalScrollingPrefetchingUnitVector;
- (NSIndexSet *)pinnedSupplementaryIndexes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })preferredSizeGroupingRangeForItemAtIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })primaryContentFrame;
- (NSArray *)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (NSArray *)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 frameOffset:(struct CGPoint { double x1; double x2; })arg2;
- (_UICollectionLayoutSolveResult *)resolveWithParameters:(_UICollectionLayoutSolveParameters *)arg1 preferredSizes:(_UICollectionPreferredSizes *)arg2;
- (_UICollectionLayoutFramesQueryResult *)sectionSupplementaryFrameForIndex:(long long)arg1;
- (_UICollectionLayoutFramesQueryResult *)sectionSupplementaryFrameWithKind:(NSString *)arg1 index:(long long)arg2;
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(NSUUID *)arg1;
- (void)setOrthogonalOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldAdjustContentSizeForPartialLastGroupSolution:(bool)arg1;
- (bool)shouldAdjustContentSizeForPartialLastGroupSolution;
- (void)solveForContainer:(id <NSCollectionLayoutContainer>)arg1 supplementaryContainer:(id <NSCollectionLayoutContainer>)arg2 traitCollection:(UITraitCollection *)arg3 layoutAxis:(unsigned long long)arg4 frameCount:(long long)arg5 preferredSizes:(_UICollectionPreferredSizes *)arg6 layoutRTL:(bool)arg7;
- (void)solveForContainer:(id <NSCollectionLayoutContainer>)arg1 traitCollection:(UITraitCollection *)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4;
- (void)solveForContainer:(id <NSCollectionLayoutContainer>)arg1 traitCollection:(UITraitCollection *)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(_UICollectionPreferredSizes *)arg5;
- (<NSCollectionLayoutContainer> *)supplementaryContainer;
- (_UICollectionLayoutFramesQueryResult *)supplementaryFrameWithKind:(NSString *)arg1 index:(long long)arg2;
- (UITraitCollection *)traitCollection;
- (_UICollectionLayoutFramesQueryResult *)unpinnedSectionSupplementaryFrameForIndex:(long long)arg1;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 overrideContentRectForPinning:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (NSString *)visualDescription;

@end
