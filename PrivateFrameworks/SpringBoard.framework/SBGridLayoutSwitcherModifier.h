
@interface SBGridLayoutSwitcherModifier : SBSwitcherModifier <PTSettingsKeyObserver> {
    unsigned long long  _alignment;
    bool  _isScrollingForward;
    unsigned long long  _layoutDirection;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousContentOffset;
}

@property (nonatomic) unsigned long long alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long layoutDirection;
@property (nonatomic, readonly) double scale;
@property (readonly) Class superclass;

- (unsigned long long)_appLayoutIndexForSpaceIndex:(unsigned long long)arg1;
- (void)_applyPrototypeSettings;
- (double)_cardHeaderHeight;
- (unsigned long long)_columnForIndex:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_contentSize;
- (double)_cornerRadius;
- (unsigned long long)_firstTrailingIndexForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_fittedContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForIndex:(unsigned long long)arg1 ignoringScrollOffset:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameWithScaleAppliedForIndex:(unsigned long long)arg1 ignoringScrollOffset:(bool)arg2;
- (double)_horizontalSpacing;
- (unsigned long long)_indexOfLeadingCard;
- (bool)_isIndexVisible:(unsigned long long)arg1;
- (unsigned long long)_numberOfColumns;
- (unsigned long long)_numberOfSpaces;
- (unsigned long long)_rowForIndex:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_scaledCardSize;
- (double)_verticalSpacing;
- (id)adjustedContinuousExposeIdentifiersInStripFromPreviousIdentifiersInStrip:(id)arg1;
- (id)adjustedContinuousExposeIdentifiersInSwitcherFromPreviousIdentifiersInSwitcher:(id)arg1 identifiersInStrip:(id)arg2;
- (struct CGPoint { double x1; double x2; })adjustedOffsetForOffset:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 locationInView:(struct CGPoint { double x1; double x2; })arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6;
- (unsigned long long)alignment;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (id)appLayoutsToCacheSnapshots;
- (bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })contentOffsetForIndex:(unsigned long long)arg1 alignment:(long long)arg2;
- (double)contentPageViewScaleForAppLayout:(id)arg1 withScale:(double)arg2;
- (double)contentViewScale;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleScrollEvent:(id)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (id)initWithAlignment:(unsigned long long)arg1 layoutDirection:(unsigned long long)arg2;
- (bool)isHomeAffordanceSupportedForAppLayout:(id)arg1;
- (unsigned long long)layoutDirection;
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)resetAdjustedScrollingState;
- (struct CGPoint { double x1; double x2; })restingOffsetForScrollOffset:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (double)rotationAngleForIndex:(unsigned long long)arg1;
- (double)scale;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)scrollViewAttributes;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setLayoutDirection:(unsigned long long)arg1;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (bool)shouldAnimateInsertionOrRemovalOfAppLayout:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)shouldBringCardToFrontDuringInsertionOrRemoval;
- (double)snapshotScaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleAppLayoutRangeForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)visibleAppLayouts;
- (id)visibleHomeAffordanceLayoutElements;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;

@end
