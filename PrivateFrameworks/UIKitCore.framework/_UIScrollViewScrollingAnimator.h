
@interface _UIScrollViewScrollingAnimator : NSObject {
    _UIScrollViewScrollingAnimatorState * _currentScroll;
    CADisplayLink * _displayLink;
    struct CGPoint { 
        double x; 
        double y; 
    }  _idealPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _idealPositionForMinimumTravel;
    bool  _isAdjustingScrollViewOffset;
    bool  _isScrollingInteractively;
    struct CGPoint { 
        double x; 
        double y; 
    }  _modelPosition;
    UIScrollView * _scrollView;
    NSHashTable * _trackedPressEvents;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (nonatomic, readonly) UIScrollView *scrollView;
@property (getter=isScrollingInteractively, nonatomic, readonly) bool scrollingInteractively;

- (void).cxx_destruct;
- (void)_beginInteractiveAnimationForScrollState:(id)arg1;
- (void)_displayLinkFired:(id)arg1;
- (double)_distanceForIncrement:(unsigned long long)arg1 inDirection:(unsigned long long)arg2;
- (bool)_handlePressIfInterested:(id)arg1;
- (struct CGPoint { double x1; double x2; })_interactiveScrollVelocity;
- (bool)_keyboardHandlesPressEventForKeyInput:(id)arg1;
- (unsigned long long)_rubberbandableDirections;
- (id)_scrollStateForDirection:(unsigned long long)arg1 granularity:(unsigned long long)arg2;
- (id)_scrollStateForPress:(id)arg1;
- (void)_scrollToContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)_scrollWithScrollToExtentAnimationTo:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)_scrollableDirectionsFromOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_startDisplayLinkIfNeeded;
- (void)_stopAnimatedScroll;
- (void)_stopDisplayLink;
- (void)animateScrollInDirection:(unsigned long long)arg1 withGranularity:(unsigned long long)arg2;
- (void)cancelInteractiveScroll;
- (void)dealloc;
- (bool)finishHandlingPressEvent:(id)arg1;
- (bool)handlePressEventIfInterested:(id)arg1;
- (id)initWithScrollView:(id)arg1;
- (void)invalidate;
- (bool)isInterestedInPress:(id)arg1;
- (bool)isScrollingInteractively;
- (id)scrollView;

@end
