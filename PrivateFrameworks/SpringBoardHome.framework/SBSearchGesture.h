
@interface SBSearchGesture : NSObject <BSDescriptionProviding, SBSearchScrollViewDelegate, UIScrollViewDelegate> {
    bool  _animatingResetOrReveal;
    <SBSearchGestureDelegate> * _delegate;
    NSMutableSet * _disabledReasons;
    bool  _ignoreScrollingEnded;
    bool  _isDismissing;
    bool  _isDraggingAccordingToScrollView;
    double  _lastOffset;
    NSHashTable * _observers;
    UIPanGestureRecognizer * _panGestureRecognizer;
    SBSearchScrollView * _scrollView;
    <SBHSearchPresenting> * _searchPresenter;
    bool  _suppressObserverCallbacks;
    UIView * _targetView;
}

@property (getter=isAnimatingResetOrReveal, nonatomic, readonly) bool animatingResetOrReveal;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSearchGestureDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDragging, nonatomic, readonly) bool dragging;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SBHSearchPresenting> *searchPresenter;
@property (getter=isShowingSearch, nonatomic, readonly) bool showingSearch;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *targetView;
@property (getter=isTracking, nonatomic, readonly) bool tracking;

+ (double)searchHeaderHeight;

- (void).cxx_destruct;
- (bool)_isShowingSearch;
- (double)_maxGestureOffset;
- (void)_notifyThaWeStartedShowingOrHiding;
- (void)_notifyThatGestureEndedWithShowingIfNeeded:(bool)arg1;
- (double)_progressThreshold;
- (double)_startingGestureOffset;
- (void)_updateForFinalContentOffset;
- (void)_updateForScrollingEnded;
- (void)_updateScrollingEnabled;
- (void)addObserver:(id)arg1;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithSearchPresenter:(id)arg1;
- (bool)isAnimatingResetOrReveal;
- (bool)isDragging;
- (bool)isShowingSearch;
- (bool)isTracking;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)resetAnimated:(bool)arg1;
- (void)revealAnimated:(bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)searchPresenter;
- (bool)searchScrollViewShouldRecognize:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1 forReason:(id)arg2;
- (void)setSearchPresenter:(id)arg1;
- (void)setTargetView:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)targetView;
- (void)updateForRotation;

@end
