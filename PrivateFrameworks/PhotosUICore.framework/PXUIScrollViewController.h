
@interface PXUIScrollViewController : PXScrollViewController <PXUIScrollViewDelegate, UIScrollViewDelegate, _PXUIScrollViewFocusItemProvider> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _defaultAutoScrollTouchInsets;
    <PXUIScrollViewControllerFocusItemProvider> * _focusItemProvider;
    bool  _ignoresSafeAreaInsets;
    bool  _isScrollViewDecelerating;
    bool  _isScrollingToTop;
    _PXUIScrollView * _scrollView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PXUIScrollViewControllerFocusItemProvider> *focusItemProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoresSafeAreaInsets;
@property (setter=setScrollingToTop:, nonatomic) bool isScrollingToTop;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (void)_checkScrollViewDeceleration;
- (void)_scheduleScrollViewDecelerationCheck;
- (void)addFloatingSublayer:(id)arg1 forAxis:(long long)arg2;
- (void)addGestureRecognizer:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)addSubviewToScrollView:(id)arg1;
- (bool)alwaysBounceHorizontal;
- (bool)alwaysBounceVertical;
- (void)applyScrollInfo:(id)arg1;
- (bool)clipsToBounds;
- (id)contentCoordinateSpace;
- (void)contentInsetAdjustmentBehaviorDidChange;
- (void)decelerationRateDidChange;
- (bool)deferContentOffsetUpdates;
- (id)focusItemProvider;
- (id)focusItemsForScrollView:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)hasWindow;
- (double)horizontalInterPageSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })horizontalScrollIndicatorInsets;
- (bool)ignoresSafeAreaInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDecelerating;
- (bool)isDragging;
- (bool)isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;
- (bool)isScrollingToTop;
- (bool)isScrubbing;
- (bool)isTracking;
- (void)removeGestureRecognizer:(id)arg1;
- (bool)respectsContentZOrder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollIndicatorFrameForAxis:(long long)arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 avoidingContentInsetEdges:(unsigned long long)arg2 animated:(bool)arg3;
- (void)scrollToEdge:(unsigned int)arg1 animated:(bool)arg2;
- (void)scrollToEdge:(unsigned int)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)scrollView;
- (void)scrollView:(id)arg1 willBeginScrollingAnimationTowardsContentEdges:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewActiveRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewConstrainedVisibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewContentBounds;
- (struct CGSize { double x1; double x2; })scrollViewContentSize;
- (void)scrollViewDidBeginFocusFastScrolling:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndFocusFastScrolling:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidLayoutSubviews:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewLayoutIfNeeded;
- (struct CGSize { double x1; double x2; })scrollViewReferenceSize;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewTargetRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewVisibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewVisibleRectOutsideBounds;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)scrollViewWillLayoutSubviews:(id)arg1;
- (void)setAlwaysBounceHorizontal:(bool)arg1;
- (void)setAlwaysBounceVertical:(bool)arg1;
- (void)setClipsToBounds:(bool)arg1;
- (void)setDeferContentOffsetUpdates:(bool)arg1;
- (void)setFocusItemProvider:(id)arg1;
- (void)setHitTestContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHorizontalInterPageSpacing:(double)arg1;
- (void)setHorizontalScrollIndicatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIgnoresSafeAreaInsets:(bool)arg1;
- (void)setRespectsContentZOrder:(bool)arg1;
- (void)setScrollViewContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScrollViewNeedsLayout;
- (void)setScrollingToTop:(bool)arg1;
- (void)setShouldScrollSimultaneouslyWithDescendantScrollView:(bool)arg1;
- (void)setShowsHorizontalScrollIndicator:(bool)arg1;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;
- (void)setVerticalScrollIndicatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setVisibleOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldScrollSimultaneouslyWithDescendantScrollView;
- (bool)showsHorizontalScrollIndicator;
- (bool)showsVerticalScrollIndicator;
- (void)stopScrollingAndZoomingAnimations;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })verticalScrollIndicatorInsets;

// Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer

- (void)ae_ensureSubview:(id)arg1;

@end
