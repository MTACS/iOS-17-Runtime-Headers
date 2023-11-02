
@interface SFUnifiedTabBarLayout : NSObject {
    double  _activeItemWidth;
    double  _activeItemWidthWhenNotExpanded;
    SFUnifiedTabBarMetrics * _barMetrics;
    bool  _contentIsCentered;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    bool  _expandedItemIsCentered;
    bool  _flipped;
    SFUnifiedBarItem * _hoveringItem;
    SFUnifiedTabBarItemArrangement * _itemArrangement;
    double  _itemSpacing;
    double  _itemWidth;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastLayoutContentOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastLayoutMidpoint;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastLayoutSize;
    double  _leadingItemOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _midpointForCenteredContent;
    NSMutableIndexSet * _occludedItemIndexes;
    double  _offsetForCenteringExpandedItem;
    double  _pinnedItemsWidth;
    double  _scrollSlowingInset;
    UIScrollView * _scrollView;
    bool  _shouldSlideInNewTrailingTab;
    double  _squishedActiveItemWidth;
    bool  _standalone;
    double  _transitioningItemScale;
    NSMutableIndexSet * _visibleItemIndexes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRectOverride;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _safeArea;
@property (nonatomic, readonly) bool activeItemIsSquished;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } autoScrollTouchInsets;
@property (nonatomic, retain) SFUnifiedTabBarMetrics *barMetrics;
@property (nonatomic, readonly) bool centersActiveItemWhenExpanded;
@property (nonatomic, readonly) bool contentIsCentered;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) bool horizontalSpaceIsExtremelyConstrained;
@property (nonatomic, retain) SFUnifiedBarItem *hoveringItem;
@property (nonatomic, readonly) unsigned long long indexOfCenterItem;
@property (nonatomic, readonly) bool isCurrentlyScrollable;
@property (nonatomic, readonly) SFUnifiedTabBarItemArrangement *itemArrangement;
@property (nonatomic, readonly) unsigned long long maximumNumberOfVisibleItems;
@property (nonatomic) struct CGPoint { double x1; double x2; } midpointForCenteredContent;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pinnedItemDropArea;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pinnedItemsSeparatorFrame;
@property (nonatomic, readonly) double pinnedItemsSeparatorOpacity;
@property (nonatomic, readonly) NSIndexSet *visibleItemIndexes;
@property (nonatomic, readonly) NSArray *visibleItems;

+ (unsigned long long)pinnedItemLimitForItemArrangement:(id)arg1 tabBarWidth:(double)arg2 barMetrics:(id)arg3;

- (void).cxx_destruct;
- (bool)_activeItemIsPinned;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_activeItemPinnableArea;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedActiveItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pinActiveItem:(bool)arg2 squishActiveItem:(bool)arg3 centerExpandedItem:(bool)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentArea;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollingToRegionWithMinX:(double)arg1 maxX:(double)arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)_determineOffsetForCenteringExpandedItem;
- (double)_distanceToEdgeForItemAtIndex:(unsigned long long)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 activeItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 occludedEdge:(unsigned long long*)arg4;
- (double)_effectiveMinimumActiveItemWidth;
- (void)_enumerateFramesForItemsAtIndexes:(id)arg1 pinActiveItem:(bool)arg2 usingBlock:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForItem:(id)arg1 withOffset:(double)arg2 pinActiveItem:(bool)arg3 squishActiveItem:(bool)arg4 centerExpandedItem:(bool)arg5;
- (unsigned long long)_indexOfItemClosestToPoint:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id /* block */)arg2;
- (double)_insetToRevealNextItem;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsForActiveItemPinnableArea;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsForScrollingToItemAtIndex:(unsigned long long)arg1;
- (bool)_itemAtIndexIsPinned:(unsigned long long)arg1;
- (double)_maximumActiveItemWidthForCenteringExpandedItem;
- (double)_maximumItemSpacing;
- (struct CGPoint { double x1; double x2; })_midpointForCenteredContentInScrollView;
- (double)_minimumHorizontalOffsetForOccludedItems;
- (double)_minimumItemSpacing;
- (double)_offsetForItemAtIndex:(unsigned long long)arg1;
- (double)_offsetForItemAtIndex:(unsigned long long)arg1 inItems:(id)arg2;
- (double)_offsetForPinnedItemAtIndex:(unsigned long long)arg1;
- (double)_pinnedActiveItemOffsetSquishingActiveItem:(bool)arg1 activeItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_safeArea;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; bool x5; bool x6; double x7; })_scrollSlowingLayoutInfoForItemAtIndex:(unsigned long long)arg1 withLayoutInfo:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; bool x5; bool x6; double x7; })arg2 activeItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_slideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forItemAtIndex:(unsigned long long)arg2 pinnedActiveItemOffset:(double)arg3;
- (double)_spacingAfterItem:(id)arg1;
- (double)_spacingBeforeItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unpinnedFrameForItemAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unpinnedItemSafeArea;
- (void)_updateContentSize;
- (void)_updateItemWidths;
- (void)_updateSquishedActiveItemWidth;
- (double)_widthForItem:(id)arg1;
- (double)_zPositionForItem:(id)arg1;
- (bool)activeItemIsSquished;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })autoScrollTouchInsets;
- (id)barMetrics;
- (bool)centersActiveItemWhenExpanded;
- (bool)contentIsCentered;
- (struct CGPoint { double x1; double x2; })contentOffsetForScrollingToDroppingItems;
- (struct CGPoint { double x1; double x2; })contentOffsetForScrollingToItemAtIndex:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)enumerateFinalLayoutForDisappearingItemsAtIndexes:(id)arg1 withDistanceScrolled:(double)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateInitialLayoutForAppearingItemsAtIndexes:(id)arg1 withDistanceToScroll:(double)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateLayoutForItemsAtIndexes:(id)arg1 usingBlock:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPreviewingItem:(id)arg1 pinned:(bool)arg2;
- (bool)horizontalSpaceIsExtremelyConstrained;
- (id)hoveringItem;
- (unsigned long long)indexOfCenterItem;
- (id)indexesOfItemsVisibleInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithItemArrangement:(id)arg1 configuration:(id)arg2;
- (bool)isCurrentlyScrollable;
- (id)itemArrangement;
- (id)itemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)itemClosestToPoint:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id /* block */)arg2;
- (id)itemsVisibleInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)maximumNumberOfVisibleItems;
- (struct CGPoint { double x1; double x2; })midpointForCenteredContent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pinnedItemDropArea;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pinnedItemsSeparatorFrame;
- (double)pinnedItemsSeparatorOpacity;
- (void)setBarMetrics:(id)arg1;
- (void)setHoveringItem:(id)arg1;
- (void)setItemAtIndex:(unsigned long long)arg1 isOccluded:(bool)arg2;
- (void)setItemAtIndex:(unsigned long long)arg1 isVisible:(bool)arg2;
- (void)setMidpointForCenteredContent:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateItemSizes;
- (void)updateItemSizesIfNeeded;
- (id)visibleItemIndexes;
- (id)visibleItems;

@end
