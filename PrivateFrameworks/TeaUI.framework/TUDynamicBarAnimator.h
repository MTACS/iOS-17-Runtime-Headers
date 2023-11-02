
@interface TUDynamicBarAnimator : NSObject {
    double  _bottomBarOffset;
    double  _bottomBarOffsetForState;
    <TUDynamicBarAnimatorDelegate> * _delegate;
    bool  _didHideBarsByMoving;
    bool  _didHideOrShowBarsExplicitly;
    CADisplayLink * _displayLink;
    bool  _dragging;
    bool  _inSteadyState;
    double  _lastOffset;
    double  _lastUnroundedTopBarHeight;
    double  _maximumBottomBarOffset;
    double  _minimumTopBarHeight;
    long long  _state;
    double  _targetTopBarHeight;
    double  _topBarHeight;
    double  _topBarHeightForState;
    double  _unroundedTopBarHeight;
}

@property (nonatomic, readonly) double bottomBarOffset;
@property (nonatomic) <TUDynamicBarAnimatorDelegate> *delegate;
@property (nonatomic) double maximumBottomBarOffset;
@property (nonatomic, readonly) double maximumTopBarHeight;
@property (nonatomic, readonly) double minimumBottomBarOffset;
@property (nonatomic) double minimumTopBarHeight;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long targetState;
@property (nonatomic, readonly) double topBarHeight;

- (void).cxx_destruct;
- (double)_bottomBarOffsetForTopBarHeight:(double)arg1;
- (double)_constrainTopBarHeight:(double)arg1;
- (void)_displayLinkFired:(id)arg1;
- (void)_moveBarsWithDelta:(double)arg1;
- (void)_setInSteadyState:(bool)arg1;
- (void)_transitionToSteadyState;
- (void)_updateDisplayLink;
- (void)_updateOutputs;
- (void)attemptTransitionToState:(long long)arg1 animated:(bool)arg2;
- (void)beginScrollingWithOffset:(double)arg1;
- (double)bottomBarOffset;
- (bool)canTransitionToState:(long long)arg1;
- (id)delegate;
- (void)endScrollingWithTargetOffset:(double)arg1 velocity:(double)arg2;
- (id)init;
- (double)maximumBottomBarOffset;
- (double)maximumTopBarHeight;
- (double)minimumBottomBarOffset;
- (double)minimumTopBarHeight;
- (void)setBottomBarOffset:(double)arg1 forState:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMaximumBottomBarOffset:(double)arg1;
- (void)setMinimumTopBarHeight:(double)arg1;
- (void)setTopBarHeight:(double)arg1 forState:(long long)arg2;
- (long long)state;
- (long long)targetState;
- (double)topBarHeight;
- (void)updateScrollingWithOffset:(double)arg1;

@end
