
@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer <_UIScrollEventAsyncDeliverable> {
    bool  _activeEventIsDiscrete;
    unsigned int  _caughtDeceleratingScrollView;
    unsigned int  _directionalLockEnabled;
    UIScrollViewDirectionalPressGestureRecognizer * _directionalPressGestureRecognizer;
    double  _discreteFastScrollMultiplier;
    unsigned int  _hasParentScrollView;
    long long  _indirectScrollingState;
    unsigned int  _lastLockingAxis;
    unsigned int  _lockingAxis;
    long long  _modifierFlags;
    unsigned int  _movedAfterCaughtDeceleratingScrollViewButBeganNotYetDelivered;
    struct CGPoint { 
        double x; 
        double y; 
    }  _reconsideredLockingLocation;
    UIScrollView * _scrollView;
    SEL  _scrollViewAction;
    bool  _scrollViewCanScrubWithTouch;
    unsigned int  _transfersTrackingFromParentScrollView;
    double  _translationScaleFactor;
}

@property (getter=_beganCaughtDeceleratingScrollViewAndMoved, nonatomic, readonly) bool beganCaughtDeceleratingScrollViewAndMoved;
@property (getter=_caughtDeceleratingScrollView, nonatomic, readonly) bool caughtDeceleratingScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDirectionalLockEnabled, nonatomic) bool directionalLockEnabled;
@property (nonatomic) UIScrollViewDirectionalPressGestureRecognizer *directionalPressGestureRecognizer;
@property (getter=_discreteFastScrollMultiplier, setter=_setDiscreteFastScrollMultiplier:, nonatomic) double discreteFastScrollMultiplier;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic) double translationScaleFactor;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_adjustSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_allowsBounce;
- (id)_asyncDeliveryTargetForScrollEvent:(id)arg1;
- (bool)_beganCaughtDeceleratingScrollViewAndMoved;
- (void)_beginScroll;
- (bool)_canTransferTrackingFromParentPagingScrollView;
- (bool)_caughtDeceleratingScrollView;
- (void)_centroidMovedTo:(struct CGPoint { double x1; double x2; })arg1 atTime:(double)arg2 affectingTranslation:(bool)arg3;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (double)_discreteFastScrollMultiplier;
- (void)_handleCaughtDeceleratingScrollViewWithEvent:(id)arg1;
- (double)_hysteresis;
- (bool)_isGestureType:(long long)arg1;
- (bool)_isParentScrollView:(id)arg1 consideringEvent:(id)arg2;
- (long long)_modifierFlags;
- (void)_resetGestureRecognizer;
- (void)_scrollViewDidEndZooming;
- (void)_scrollingChangedWithEvent:(id)arg1;
- (void)_setDiscreteFastScrollMultiplier:(double)arg1;
- (bool)_shouldContinueToWaitToTransferTrackingFromParentScrollView;
- (bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (bool)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
- (bool)_shouldTryToBeginWithEvent:(id)arg1;
- (struct CGPoint { double x1; double x2; })_velocityIncludingDiscreteScrollInView:(id)arg1;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)delaysTouchesBegan;
- (id)directionalPressGestureRecognizer;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isDirectionalLockEnabled;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (id)scrollView;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirectionalLockEnabled:(bool)arg1;
- (void)setDirectionalPressGestureRecognizer:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTranslationScaleFactor:(double)arg1;
- (void)setView:(id)arg1;
- (bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (bool)shouldReceiveEvent:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })translationInView:(id)arg1;
- (double)translationScaleFactor;
- (struct CGPoint { double x1; double x2; })velocityInView:(id)arg1;

@end
