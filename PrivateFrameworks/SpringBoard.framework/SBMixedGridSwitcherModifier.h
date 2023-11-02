
@interface SBMixedGridSwitcherModifier : SBSwitcherModifier <SBMixedGridSwitcherProviding> {
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedContentSize;
    NSMutableDictionary * _cachedFrameForIndex;
    double  _cachedFullScreenCardScale;
    unsigned long long  _cachedIndexOfFirstMainAppLayout;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _cachedVisibleAppsRange;
    bool  _cachedVisibleAppsRangeIsValid;
    struct { 
        unsigned int cachedIndexOfFirstMainAppLayoutIsValid : 1; 
        unsigned int cachedFullScreenCardScaleIsValid : 1; 
        unsigned int cachedContentSizeIsValid : 1; 
        unsigned int cachedFrameForIndexIsValid : 1; 
    }  _cachesValidity;
    bool  _disableFullScreenCardScaleRounding;
    struct CGSize { 
        double width; 
        double height; 
    }  _floatingCardSize;
    long long  _floatingConfiguration;
    struct CGSize { 
        double width; 
        double height; 
    }  _fullScreenCardSize;
    SBSwitcherModifier * _gridModifier;
    bool  _hasForegroundFullScreenApp;
    bool  _isScrolling;
    bool  _isScrollingForward;
    bool  _isSwitcherVisible;
    unsigned long long  _lastAppLayoutsGenerationCount;
    long long  _lastInterfaceOrientation;
    unsigned long long  _lowDensityGridLayoutAlignment;
    unsigned long long  _maximumNumberOfFullScreenCardsForSingleRow;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousContentOffset;
    bool  _reversesFloatingCardDirection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableFullScreenCardScaleRounding;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } floatingCardSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } fullScreenCardSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lowDensityGridLayoutAlignment;
@property (nonatomic) unsigned long long maximumNumberOfFullScreenCardsForSingleRow;
@property (nonatomic) bool reversesFloatingCardDirection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forFloatingAppIndex:(unsigned long long)arg2;
- (id)_appLayoutWithPrimaryLeafAppLayout:(id)arg1 sideLeafAppLayout:(id)arg2 configuration:(long long)arg3;
- (id)_cacheKeyForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)_cachedFullScreenCardScale;
- (double)_cardCornerRadiusInSwitcher;
- (double)_cardHeaderHeight;
- (struct CGSize { double x1; double x2; })_contentSize;
- (struct CGSize { double x1; double x2; })_fittedContentSize;
- (struct CGSize { double x1; double x2; })_fittedFloatingContentSize;
- (struct CGSize { double x1; double x2; })_fittedFullScreenContentSize;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_floatingAppsStackRange;
- (double)_floatingCardScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForIndex:(unsigned long long)arg1 applyScrollViewContentOffset:(bool)arg2;
- (double)_fullScreenCardScale;
- (double)_horizontalSpacing;
- (unsigned long long)_indexOfFirstFloatingLayoutFromAppLayouts:(id)arg1;
- (unsigned long long)_indexOfLeadingCard;
- (void)_invalidateCachesIfNeeded;
- (bool)_isDoubleStackingFullScreenCards;
- (bool)_isIndexFullScreen:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_minimumFullScreenContentSize;
- (unsigned long long)_numberOfFloatingColumns;
- (unsigned long long)_numberOfFullScreenAppLayouts;
- (unsigned long long)_numberOfFullScreenColumns;
- (unsigned long long)_numberOfFullScreenRows;
- (unsigned long long)_numberOfOffScreenTrailingFloatingCardsForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)_numberOfOffScreenTrailingFullScreenCardsForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_scaledCardSizeForIndex:(unsigned long long)arg1;
- (unsigned long long)_subtreeIndexForIndex:(unsigned long long)arg1 indexOfFirstMainAppLayout:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unpaddedCoplanarFrameForIndex:(unsigned long long)arg1 doubleStack:(bool)arg2 count:(unsigned long long)arg3 cardSize:(struct CGSize { double x1; double x2; })arg4 scale:(double)arg5 contentWidth:(double)arg6;
- (double)_verticalSpacing;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_visibleAppLayoutRangeForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_visibleAppLayoutRangeForContentOffset:(struct CGPoint { double x1; double x2; })arg1 lastVisibleIndex:(unsigned long long)arg2;
- (id)activeLeafAppLayoutsReachableByKeyboardShortcut;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)adjustedContinuousExposeIdentifiersInStripFromPreviousIdentifiersInStrip:(id)arg1;
- (id)adjustedContinuousExposeIdentifiersInSwitcherFromPreviousIdentifiersInSwitcher:(id)arg1 identifiersInStrip:(id)arg2;
- (struct CGPoint { double x1; double x2; })adjustedOffsetForOffset:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 locationInView:(struct CGPoint { double x1; double x2; })arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (id)appLayoutsToCacheSnapshots;
- (double)backgroundOpacityForIndex:(unsigned long long)arg1;
- (double)blurViewIconScaleForIndex:(unsigned long long)arg1;
- (bool)canFocusableAppLayoutBeEffectivelyObscured:(id)arg1;
- (bool)canLayoutRoleParticipateInSwitcherDragAndDrop:(long long)arg1 appLayout:(id)arg2;
- (bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })contentOffsetForIndex:(unsigned long long)arg1 alignment:(long long)arg2;
- (double)contentPageViewScaleForAppLayout:(id)arg1 withScale:(double)arg2;
- (double)contentViewScale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (bool)disableFullScreenCardScaleRounding;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (double)firstFloatingCardPeekingWidth;
- (struct CGSize { double x1; double x2; })floatingCardSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })fullScreenCardSize;
- (id)handleScrollEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (long long)headerStyleForIndex:(unsigned long long)arg1;
- (id)inactiveAppLayoutsReachableByKeyboardShortcut;
- (unsigned long long)indexOfFirstMainAppLayoutFromAppLayouts:(id)arg1;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (id)initWithFullScreenCardSize:(struct CGSize { double x1; double x2; })arg1 floatingCardSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)isIndexFullyVisible:(unsigned long long)arg1;
- (bool)isIndexRubberbandableForSwipeToKill:(unsigned long long)arg1;
- (bool)isIndexVisible:(unsigned long long)arg1;
- (bool)isLayoutRoleDraggable:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleKillable:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)lowDensityGridLayoutAlignment;
- (unsigned long long)maximumNumberOfFullScreenCardsForSingleRow;
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;
- (id)neighboringAppLayoutsForFocusedAppLayout:(id)arg1;
- (unsigned long long)numberOfFloatingAppLayouts;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfVisibleAppLayouts;
- (void)resetAdjustedScrollingState;
- (id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3;
- (struct CGPoint { double x1; double x2; })restingOffsetForScrollOffset:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (bool)reversesFloatingCardDirection;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)scrollViewAttributes;
- (void)setDisableFullScreenCardScaleRounding:(bool)arg1;
- (void)setLowDensityGridLayoutAlignment:(unsigned long long)arg1;
- (void)setMaximumNumberOfFullScreenCardsForSingleRow:(unsigned long long)arg1;
- (void)setReversesFloatingCardDirection:(bool)arg1;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (long long)shadowStyleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldAnimateInsertionOrRemovalOfAppLayout:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)shouldBringCardToFrontDuringInsertionOrRemoval;
- (bool)shouldSuppressHighlightEffectForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldTetherItemsAndAccessoriesInAppLayout:(id)arg1;
- (unsigned long long)slideOverTongueDirection;
- (double)snapshotScaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)splitViewInnerCornerRadius;
- (id)switcherDropRegionContextForDraggingLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (double)unadjustedScaleForIndex:(unsigned long long)arg1;
- (id)visibleAppLayouts;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;

@end