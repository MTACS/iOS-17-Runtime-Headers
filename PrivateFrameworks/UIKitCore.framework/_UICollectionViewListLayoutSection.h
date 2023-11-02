
@interface _UICollectionViewListLayoutSection : NSCollectionLayoutSection <_UICollectionLayoutSectionCallback> {
    _UICollectionViewListLayoutSectionConfiguration * _configuration;
    <NSCollectionLayoutEnvironment_Private> * _layoutEnvironment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_layoutEnvironment, nonatomic, readonly) <NSCollectionLayoutEnvironment_Private> *layoutEnvironment;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)__isLastItemInSection:(id)arg1;
- (bool)__isLastSection:(long long)arg1;
- (bool)_adjustsLayoutToDrawTopSeparatorInSection:(long long)arg1 interactionState:(id)arg2;
- (double)_alignedContentMarginGivenMargin:(double)arg1;
- (id)_callback;
- (void)_configureLayoutAttributes:(id)arg1 forSeparatorAtBottom:(bool)arg2 preferredConfiguration:(id)arg3 interactionState:(id)arg4;
- (void)_configureLayoutAttributesForBackgroundDecoration:(id)arg1;
- (void)_configureLayoutAttributesForPlainCell:(id)arg1;
- (void)_configureLayoutAttributesForPlainSupplementaryView:(id)arg1;
- (void)_configureLayoutAttributesForSidebarPlainCell:(id)arg1;
- (void)_configureLayoutAttributesForSwipeActionMasking:(id)arg1;
- (void)_configureLayoutAttributesWithDefaultMasking:(id)arg1;
- (void)_configureLayoutAttributesWithInsetGroupedMasking:(id)arg1 stylesFirstItemAsHeader:(bool)arg2;
- (id)_constants;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_defaultDirectionalLayoutMarginsInsideSection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_defaultLayoutMarginsForSupplementaryViewWithLayoutAttributes:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_defaultLayoutMarginsInsideSection;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_defaultSectionContentInsetsForAppearanceStyle:(long long)arg1;
- (id)_descriptionProperties;
- (void)_didEndSwiping;
- (id)_effectiveBackgroundColor;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveBoundarySeparatorInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveCollectionViewLayoutMarginsForAppearanceStyle:(long long)arg1 forUseAsContentInsets:(bool)arg2;
- (double)_effectiveCornerRadius;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveSectionHorizontalInsets;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveSectionSupplementaryHorizontalInsets;
- (void)_enrichLayoutAttributes:(id)arg1 interactionState:(id)arg2;
- (id)_generateListSectionDataForLayoutAttributes:(id)arg1 interactionState:(id)arg2;
- (bool)_hasHeaderFooterBelowLastItemInSection:(long long)arg1 interactionState:(id)arg2;
- (bool)_hasHorizontalInsets;
- (long long)_headerFooterPinningBehavior;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_horizontalInsetsForInsetsReference:(long long)arg1;
- (id)_invalidationContextForCellBackgroundOrBottomSeparatorChangeAtIndexPath:(id)arg1 interactionState:(id)arg2 separatorOnly:(bool)arg3;
- (bool)_isRTL;
- (id)_layoutEnvironment;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (unsigned long long)_maskedCornersForBackgroundOfItemWithSelectionGrouping:(unsigned long long)arg1;
- (double)_paddingToBoundarySupplementaries;
- (bool)_pinnedSupplementariesShouldOverlap;
- (id)_preferredContainerBackgroundColor;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_sectionPreferredBottomSeparatorInsetsForIndexPath:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_sectionPreferredTopSeparatorInsetsWithBottomInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1 hasCustomInsets:(out bool*)arg2;
- (id)_separatorConfigurationForItemAtIndexPath:(id)arg1 withSelectionGrouping:(unsigned long long)arg2 considerNextCellGrouping:(bool)arg3 interactionState:(id)arg4;
- (long long)_separatorInsetBehaviorAtBottom:(bool)arg1 ofSection:(long long)arg2 interactionState:(id)arg3;
- (bool)_shouldDrawSeparatorAtBottom:(bool)arg1 ofSection:(long long)arg2 interactionState:(id)arg3;
- (bool)_shouldHideBottomSeparatorAtIndexPath:(id)arg1 forGrouping:(unsigned long long)arg2 considerNextCellGrouping:(bool)arg3 interactionState:(id)arg4;
- (bool)_shouldHideTopSeparatorAtIndexPath:(id)arg1 interactionState:(id)arg2;
- (bool)_shouldInvalidateForScrollViewLayoutAdjustmentsChange;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (void)_transformFittingLayoutAttributes:(id)arg1 interactionState:(id)arg2;
- (void)_transformPreferredLayoutAttributes:(id)arg1 interactionState:(id)arg2;
- (void)_updateStyleForSwipeActionsConfiguration:(id)arg1;
- (bool)_useRoundedSwipeActions;
- (bool)_wantsBandSelectionVisuals;
- (bool)_wantsSwipeActions;
- (void)_willBeginSwiping;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 layoutEnvironment:(id)arg2;
- (bool)prefersListSolver;
- (bool)shouldRestrictOrthogonalAxisDuringInteractiveMovement;

@end
