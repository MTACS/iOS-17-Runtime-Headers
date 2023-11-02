
@interface UICollectionViewLayout : NSObject <AVTCollectionViewLayout, NSCoding, _UICollectionViewLayoutOrthogonalScrolling, _UICollectionViewLayoutSwipeActions> {
    UIDynamicAnimator * _animator;
    UICollectionView * _collectionView;
    _UICollectionViewAnimationContext * _collectionViewAnimationContext;
    struct CGSize { 
        double width; 
        double height; 
    }  _collectionViewBoundsSize;
    _UICollectionViewCompositionLayout * _compositionLayout;
    NSMutableDictionary * _decorationViewClassDict;
    NSMutableDictionary * _decorationViewExternalObjectsTables;
    NSMutableDictionary * _decorationViewNibDict;
    NSMutableDictionary * _deletedDecorationIndexPathsDict;
    NSMutableDictionary * _deletedSupplementaryIndexPathsDict;
    NSArray * _elementKinds;
    NSMutableDictionary * _finalAnimationLayoutAttributesDict;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    NSMutableDictionary * _initialAnimationLayoutAttributesDict;
    NSMutableDictionary * _insertedDecorationIndexPathsDict;
    NSMutableDictionary * _insertedSupplementaryIndexPathsDict;
    UICollectionViewLayoutInvalidationContext * _invalidationContext;
    NSIndexSet * _items;
    struct { 
        unsigned int inTransitionFromTransitionLayout : 1; 
        unsigned int inTransitionToTransitionLayout : 1; 
        unsigned int prepared : 1; 
        unsigned int wantsRightToLeftHorizontalMirroringIfNeeded : 1; 
        unsigned int isEditing : 1; 
    }  _layoutFlags;
    struct CGPoint { 
        double x; 
        double y; 
    }  _layoutOffset;
    unsigned long long  _layoutOffsetEdges;
    UIColor * _preferredBackgroundColor;
    NSIndexSet * _sections;
    UICollectionViewLayout * _siblingLayout;
    long long  _sublayoutType;
    _UICollectionViewLayoutSwipeActionsModule * _swipeActionsModule;
    UICollectionViewLayout * _transitioningFromLayout;
    UICollectionViewLayout * _transitioningToLayout;
}

@property (getter=_isInLayoutTransition, nonatomic, readonly) bool _isInLayoutTransition;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (getter=_collectionViewAnimationContext, setter=_setCollectionViewAnimationContext:, nonatomic, retain) _UICollectionViewAnimationContext *collectionViewAnimationContext;
@property (getter=_compositionLayout, setter=_setCompositionLayout:, nonatomic) _UICollectionViewCompositionLayout *compositionLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_elementKinds, setter=_setElementKinds:, nonatomic, copy) NSArray *elementKinds;
@property (getter=_focusFastScrollingIndexBarInsets, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } focusFastScrollingIndexBarInsets;
@property (getter=_frame, setter=_setFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (getter=_items, setter=_setItems:, nonatomic, copy) NSIndexSet *items;
@property (getter=_layoutOffset, setter=_setLayoutOffset:, nonatomic) struct CGPoint { double x1; double x2; } layoutOffset;
@property (getter=_layoutOffsetEdges, setter=_setLayoutOffsetEdges:, nonatomic) unsigned long long layoutOffsetEdges;
@property (getter=_preferredBackgroundColor, setter=_setPreferredBackgroundColor:, nonatomic, retain) UIColor *preferredBackgroundColor;
@property (getter=_isPrepared, setter=_setPrepared:, nonatomic) bool prepared;
@property (getter=_sections, setter=_setSections:, nonatomic, copy) NSIndexSet *sections;
@property (getter=_siblingLayout, setter=_setSiblingLayout:, nonatomic) UICollectionViewLayout *siblingLayout;
@property (getter=_sublayoutType, setter=_setSublayoutType:, nonatomic) long long sublayoutType;
@property (readonly) Class superclass;
@property (nonatomic) bool ts_sortItemsLogicallyForAccessibility;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (double)_alignedContentMarginGivenMargin:(double)arg1;
- (bool)_allowsItemInteractionsToBegin;
- (bool)_allowsPanningAcrossConstrainedAxisToBeginMultiSelectInteractionInSection:(long long)arg1;
- (long long)_anchorForAuxiliaryElementOfKind:(id)arg1;
- (id /* block */)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2;
- (id /* block */)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (void)_cellBackgroundOrBottomSeparatorChangedAtIndexPath:(id)arg1 separatorOnly:(bool)arg2;
- (bool)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_centerInsertionIndicatorFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 targetAttributes:(id)arg2 axis:(unsigned long long)arg3 edges:(unsigned long long)arg4;
- (id)_collectionViewAnimationContext;
- (void)_collectionViewWillPerformPendingLayoutBeforeUpdate;
- (id)_compositionLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentFrameForSection:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollingToSection:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_contentOffsetFromProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 forScrollingToItemAtIndexPath:(id)arg2 atScrollPosition:(unsigned long long)arg3;
- (id)_customContainerSectionIndexes;
- (id)_decorationViewForLayoutAttributes:(id)arg1;
- (void)_didEndSwiping;
- (void)_didFinishLayoutTransitionAnimations:(bool)arg1;
- (void)_didPerformUpdateVisibleCellsPassWithLayoutOffset:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_disablesDoubleSidedAnimations;
- (bool)_disallowsFadeCellsForBoundsChange;
- (id)_dynamicAnimator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dynamicReferenceBounds;
- (unsigned long long)_edgesForSafeAreaPropagationToDescendants;
- (id)_elementKinds;
- (bool)_estimatesSizes;
- (bool)_estimatesSupplementaryItems;
- (id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })_fallbackItemSize;
- (id)_finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)_finalizeCollectionViewItemAnimations;
- (void)_finalizeCollectionViewUpdate:(id)arg1;
- (void)_finalizeLayoutTransition;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_focusFastScrollingIndexBarInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForInsertionIndicatorForTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 axis:(unsigned long long)arg2 edges:(unsigned long long)arg3;
- (bool)_hasOrthogonalScrollingSections;
- (id)_indexPathForInsertionIndicatorForTargetAttributes:(id)arg1 axis:(unsigned long long)arg2 edges:(unsigned long long)arg3 previousAttributes:(id)arg4 nextAttributes:(id)arg5;
- (id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (bool)_initialAppearingLayoutAttributesCanBeOverriddenForEstimatedSizing;
- (id)_initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)_invalidateLayoutUsingContext:(id)arg1;
- (id)_invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromOldBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_invalidationContextForEndingReorderingItemToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 reorderingCancelled:(bool)arg3;
- (id)_invalidationContextForRefreshingVisibleElementAttributes;
- (id)_invalidationContextForReorderingTargetPosition:(struct CGPoint { double x1; double x2; })arg1 targetIndexPaths:(id)arg2 withPreviousPosition:(struct CGPoint { double x1; double x2; })arg3 previousIndexPaths:(id)arg4;
- (id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)_isInLayoutTransition;
- (bool)_isPrepared;
- (id)_items;
- (id)_layoutAttributesForElementsInProjectedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withProjectionVector:(struct CGVector { double x1; double x2; })arg2 projectionDistance:(double)arg3;
- (id)_layoutAttributesForIndelibleElements;
- (id)_layoutAttributesForInsertionIndicatorAtItemWithTargetAttributes:(id)arg1 targetPositionEdges:(unsigned long long)arg2;
- (id)_layoutAttributesForInsertionIndicatorAtTargetIndexPath:(id)arg1;
- (id)_layoutAttributesForInsertionIndicatorAtTargetPosition:(struct CGPoint { double x1; double x2; })arg1 sourceIndexPath:(id)arg2;
- (id)_layoutAttributesForItemNearestPosition:(struct CGPoint { double x1; double x2; })arg1 maximumDistance:(double)arg2;
- (id)_layoutAttributesForNextItemInDirection:(struct CGPoint { double x1; double x2; })arg1 fromIndexPath:(id)arg2 constrainedToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)_layoutAttributesForReorderedItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (unsigned long long)_layoutAxis;
- (unsigned long long)_layoutAxisForAttributes:(id)arg1 previousAttributes:(id)arg2 nextAttributes:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_layoutFrameForSection:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_layoutOffset;
- (unsigned long long)_layoutOffsetEdges;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (bool)_needsRecomputeOfPreferredAttributesForVisibleEstimatedItemsDuringUpdate;
- (id)_nextLayoutAttributesForGlobalIndex:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_offsetForOrthogonalScrollingSection:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_offsetInTopParentLayout:(id*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (unsigned long long)_orthogonalScrollingAxis;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_orthogonalScrollingContentRectForSection:(long long)arg1;
- (double)_orthogonalScrollingDecelerationRateForSection:(long long)arg1;
- (bool)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)arg1;
- (bool)_orthogonalScrollingElementShouldAppearBelowForAttributes:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_orthogonalScrollingLayoutRectForSection:(long long)arg1;
- (id)_orthogonalScrollingSections;
- (bool)_overridesSafeAreaPropagationToDescendants;
- (void)_postProcessPreferredAttributes:(id)arg1 forView:(id)arg2;
- (id)_preferredBackgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_preferredLayoutMargins;
- (void)_prepareForCollectionViewUpdates:(id)arg1 animated:(bool)arg2;
- (void)_prepareForCollectionViewUpdates:(id)arg1 withDataSourceTranslator:(id)arg2;
- (void)_prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (void)_prepareLayout;
- (void)_prepareToAnimateFromCollectionViewItems:(id)arg1 atContentOffset:(struct CGPoint { double x1; double x2; })arg2 toItems:(id)arg3 atContentOffset:(struct CGPoint { double x1; double x2; })arg4;
- (bool)_preparedForBoundsChanges;
- (id)_previousLayoutAttributesForGlobalIndex:(long long)arg1;
- (id)_propertyAnimatorForCollectionViewUpdates:(id)arg1 withCustomAnimator:(id)arg2;
- (id)_reorderingTargetItemIndexPathForPosition:(struct CGPoint { double x1; double x2; })arg1 withPreviousIndexPath:(id)arg2;
- (void)_scrollViewLayoutAdjustmentsChanged;
- (id)_sectionDescriptorForSectionIndex:(long long)arg1;
- (id)_sections;
- (void)_setCollectionView:(id)arg1;
- (void)_setCollectionViewAnimationContext:(id)arg1;
- (void)_setCollectionViewBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setCompositionLayout:(id)arg1;
- (void)_setDynamicAnimator:(id)arg1;
- (void)_setElementKinds:(id)arg1;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfDecorationViewOfKind:(id)arg2;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setItems:(id)arg1;
- (void)_setLayoutOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setLayoutOffsetEdges:(unsigned long long)arg1;
- (void)_setOffset:(struct CGPoint { double x1; double x2; })arg1 forOrthogonalScrollingSection:(long long)arg2;
- (void)_setPreferredBackgroundColor:(id)arg1;
- (void)_setPrepared:(bool)arg1;
- (void)_setSections:(id)arg1;
- (void)_setSiblingLayout:(id)arg1;
- (void)_setSublayoutType:(long long)arg1;
- (void)_setWantsRightToLeftHorizontalMirroringIfNeeded:(bool)arg1;
- (bool)_shouldAddElementToSectionContainer:(id)arg1;
- (bool)_shouldAdjustTargetContentOffsetToValidateContentExtents;
- (bool)_shouldInvalidateLayoutForDataSourceChange;
- (bool)_shouldInvalidateLayoutForUpdatedLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 fromOldMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)_shouldInvalidateLayoutForUpdatedSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 fromOldInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (bool)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (bool)_shouldScrollToContentBeginningInRightToLeft;
- (id)_siblingLayout;
- (long long)_sublayoutType;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_supplementaryViewInsetsForScrollingToItemAtIndexPath:(id)arg1;
- (bool)_supportsAdvancedTransitionAnimations;
- (bool)_supportsPrefetchingWithEstimatedSizes;
- (bool)_supportsSwipeActionsForIndexPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })_targetPositionForInteractiveMovementOfItemAtIndexPath:(id)arg1 withProposedTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (void)_updateStyleForSwipeActionsConfiguration:(id)arg1 indexPath:(id)arg2;
- (bool)_wantsAnimationsForOffscreenAuxillaries;
- (bool)_wantsBandSelectionVisualsInSection:(long long)arg1;
- (bool)_wantsCustomSectionContainers;
- (bool)_wantsInvalidateLayoutForPreferredLayoutAttributes;
- (bool)_wantsRightToLeftHorizontalMirroringIfNeeded;
- (bool)_wantsUntrackedAnimationCleanupForAuxillaryItems;
- (bool)_wantsUpdateVisibleCellsPassNotifications;
- (void)_willBeginSwiping;
- (void)_willPerformUpdateVisibleCellsPass;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)canBeEdited;
- (id)collectionView;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayout:(id)arg2;
- (long long)developmentLayoutDirection;
- (void)encodeWithCoder:(id)arg1;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (void)finalizeLayoutTransition;
- (bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 movementCancelled:(bool)arg3;
- (id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2 previousIndexPaths:(id)arg3 previousPosition:(struct CGPoint { double x1; double x2; })arg4;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (bool)isEditing;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareLayout;
- (void)registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2;
- (void)registerNib:(id)arg1 forDecorationViewOfKind:(id)arg2;
- (void)setEditing:(bool)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)snapshottedLayoutAttributeForItemAtIndexPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })transitionContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 keyItemIndexPath:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI

- (struct CGPoint { double x1; double x2; })centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(struct CGSize { double x1; double x2; })arg2 proposedOrigin:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })contentSizeForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 numberOfItems:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForDisappearingElementAtOriginForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)indexesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 numberOfItems:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForAppearingElementAtOriginForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (id)pu_layoutAttributesForElementClosestToPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 passingTest:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (bool)_accessibilitySortCollectionViewLogically;
- (void)setTs_sortItemsLogicallyForAccessibility:(bool)arg1;
- (bool)ts_sortItemsLogicallyForAccessibility;
- (id)ts_visibleBoundsInvalidationContext;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

+ (void)tmlLoadCategory;

- (void)tmlPrepareLayout;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vui_layoutFrameForSection:(long long)arg1;
- (void)vui_registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2;

@end
