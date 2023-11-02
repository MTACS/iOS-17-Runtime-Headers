
@interface PXScrollViewController : NSObject <PXTilingScrollController> {
    NSHashTable * __observers;
    long long  _activeScrollAnimations;
    bool  _alwaysBounceHorizontal;
    bool  _alwaysBounceVertical;
    bool  _clipsToBounds;
    NSObject<UICoordinateSpace> * _contentCoordinateSpace;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    long long  _contentInsetAdjustmentBehavior;
    long long  _decelerationRate;
    bool  _deferContentOffsetUpdates;
    NSHashTable * _didLayoutSubviewsObservers;
    NSHashTable * _didScrollObservers;
    bool  _draggingPerformsScroll;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestContentInsets;
    double  _horizontalInterPageSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _horizontalScrollIndicatorInsets;
    bool  _isDecelerating;
    bool  _isDragging;
    bool  _isManuallyChanging;
    bool  _isScrubbing;
    bool  _isTracking;
    bool  _respectsContentZOrder;
    PXTilingScrollInfo * _scrollInfo;
    NSObject<PXAnonymousScrollView> * _scrollView;
    struct CGSize { 
        double width; 
        double height; 
    }  _scrollViewContentSize;
    bool  _showsHorizontalScrollIndicator;
    bool  _showsVerticalScrollIndicator;
    <PXTilingScrollControllerUpdateDelegate> * _updateDelegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _verticalScrollIndicatorInsets;
    NSHashTable * _willLayoutSubviewsObservers;
    struct CGSize { 
        double width; 
        double height; 
    }  presentedContentSize;
}

@property (nonatomic, readonly) NSHashTable *_observers;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } activeRect;
@property (nonatomic, readonly) long long activeScrollAnimations;
@property (nonatomic) bool alwaysBounceHorizontal;
@property (nonatomic) bool alwaysBounceVertical;
@property (nonatomic) bool clipsToBounds;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } constrainedVisibleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic, readonly) NSObject<UICoordinateSpace> *contentCoordinateSpace;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) long long contentInsetAdjustmentBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long decelerationRate;
@property (nonatomic) bool deferContentOffsetUpdates;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool draggingPerformsScroll;
@property (nonatomic, readonly) bool hasWindow;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestContentInsets;
@property (nonatomic) double horizontalInterPageSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } horizontalScrollIndicatorInsets;
@property (nonatomic, readonly) bool isAnimatingScroll;
@property (nonatomic, readonly) bool isDecelerating;
@property (nonatomic, readonly) bool isDragging;
@property (nonatomic, readonly) bool isManuallyChanging;
@property (nonatomic, readonly) bool isScrubbing;
@property (nonatomic, readonly) bool isTracking;
@property (nonatomic) struct CGSize { double x1; double x2; } presentedContentSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic) bool respectsContentZOrder;
@property (nonatomic, copy) PXTilingScrollInfo *scrollInfo;
@property (nonatomic, readonly) NSObject<PXAnonymousScrollView> *scrollView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollViewActiveRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollViewConstrainedVisibleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollViewContentBounds;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } scrollViewContentSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } scrollViewReferenceSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollViewTargetRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollViewVisibleRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollViewVisibleRectOutsideBounds;
@property (nonatomic) bool shouldScrollSimultaneouslyWithDescendantScrollView;
@property (nonatomic) bool showsHorizontalScrollIndicator;
@property (nonatomic) bool showsVerticalScrollIndicator;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetRect;
@property (nonatomic) <PXTilingScrollControllerUpdateDelegate> *updateDelegate;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } verticalScrollIndicatorInsets;
@property (nonatomic) struct CGPoint { double x1; double x2; } visibleOrigin;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRectOutsideBounds;

+ (id)platformScrollViewControllerForScrollView:(id)arg1;
+ (id)scrollViewControllerForScrollView:(id)arg1;

- (void).cxx_destruct;
- (id)_observers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeRect;
- (long long)activeScrollAnimations;
- (void)addFloatingSublayer:(id)arg1 forAxis:(long long)arg2;
- (void)addSubview:(id)arg1;
- (void)addSubviewToScrollView:(id)arg1;
- (bool)alwaysBounceHorizontal;
- (bool)alwaysBounceVertical;
- (void)applyScrollInfo:(id)arg1;
- (bool)clipsToBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainedVisibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (id)contentCoordinateSpace;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (long long)contentInsetAdjustmentBehavior;
- (void)contentInsetAdjustmentBehaviorDidChange;
- (long long)decelerationRate;
- (void)decelerationRateDidChange;
- (bool)deferContentOffsetUpdates;
- (bool)draggingPerformsScroll;
- (void)draggingPerformsScrollDidChange;
- (bool)hasWindow;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestContentInsets;
- (double)horizontalInterPageSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })horizontalScrollIndicatorInsets;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimatingScroll;
- (bool)isDecelerating;
- (bool)isDragging;
- (bool)isManuallyChanging;
- (bool)isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;
- (bool)isScrubbing;
- (bool)isTracking;
- (void)performManualChange:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })presentedContentSize;
- (struct CGSize { double x1; double x2; })referenceSize;
- (void)registerObserver:(id)arg1;
- (bool)respectsContentZOrder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollIndicatorFrameForAxis:(long long)arg1;
- (id)scrollInfo;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 avoidingContentInsetEdges:(unsigned long long)arg2 animated:(bool)arg3;
- (void)scrollToEdge:(unsigned int)arg1 animated:(bool)arg2;
- (void)scrollToEdge:(unsigned int)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)scrollView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewActiveRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewConstrainedVisibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewContentBounds;
- (void)scrollViewContentBoundsDidChange;
- (struct CGSize { double x1; double x2; })scrollViewContentSize;
- (void)scrollViewDidBeginFocusFastScrolling;
- (void)scrollViewDidEndFocusFastScrolling;
- (void)scrollViewDidEndScrolling;
- (void)scrollViewDidEndScrollingAnimation;
- (void)scrollViewDidLayout;
- (void)scrollViewDidScroll;
- (void)scrollViewLayoutIfNeeded;
- (struct CGSize { double x1; double x2; })scrollViewReferenceSize;
- (bool)scrollViewShouldScrollToTop;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewTargetRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewVisibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewVisibleRectOutsideBounds;
- (void)scrollViewWillBeginScrolling;
- (void)scrollViewWillBeginScrollingAnimationTowardsContentEdges:(unsigned long long)arg1;
- (void)scrollViewWillLayout;
- (void)setActiveScrollAnimations:(long long)arg1;
- (void)setAlwaysBounceHorizontal:(bool)arg1;
- (void)setAlwaysBounceVertical:(bool)arg1;
- (void)setClipsToBounds:(bool)arg1;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentInsetAdjustmentBehavior:(long long)arg1;
- (void)setDecelerationRate:(long long)arg1;
- (void)setDeferContentOffsetUpdates:(bool)arg1;
- (void)setDraggingPerformsScroll:(bool)arg1;
- (void)setHitTestContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHorizontalInterPageSpacing:(double)arg1;
- (void)setHorizontalScrollIndicatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNeedsUpdate;
- (void)setPresentedContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRespectsContentZOrder:(bool)arg1;
- (void)setScrollInfo:(id)arg1;
- (void)setScrollViewContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScrollViewNeedsLayout;
- (void)setShouldScrollSimultaneouslyWithDescendantScrollView:(bool)arg1;
- (void)setShowsHorizontalScrollIndicator:(bool)arg1;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;
- (void)setUpdateDelegate:(id)arg1;
- (void)setVerticalScrollIndicatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setVisibleOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldScrollSimultaneouslyWithDescendantScrollView;
- (bool)showsHorizontalScrollIndicator;
- (bool)showsVerticalScrollIndicator;
- (void)stopScrollingAndZoomingAnimations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRect;
- (void)unregisterObserver:(id)arg1;
- (id)updateDelegate;
- (void)updateIfNeeded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })verticalScrollIndicatorInsets;
- (struct CGPoint { double x1; double x2; })visibleOrigin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectOutsideBounds;
- (void)willEndScrollingWithVelocity:(struct CGPoint { double x1; double x2; })arg1 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg2;

@end