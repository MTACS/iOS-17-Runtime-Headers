
@interface __UISystemGestureManager : NSObject <UIGestureRecognizerDelegate, _UIExclusiveTouchGestureRecognizerDelegate> {
    bool  _achievedMaximumMovement;
    UIGestureRecognizer * _catchEdgeSwipeFailureGesture;
    bool  _didProcessPendingSwipeBegan;
    bool  _didSeeExclusiveTouchBegan;
    UIGestureRecognizer * _directTouchGesture;
    FBSDisplayIdentity * _displayIdentity;
    UIGestureRecognizer * _exclusiveTouchGesture;
    NSMutableSet * _externalEdgeSwipeGestures;
    NSMutableSet * _externalGestures;
    NSMutableSet * _internalGestures;
    UIGestureRecognizer * _pendingSwipeGesture;
    NSMutableSet * _recognizingGestures;
    <BSInvalidatable> * _stateCaptureToken;
    _UISystemGestureWindow * _systemGestureWindow;
    BKSTouchStream * _touchStream;
}

@property (nonatomic) bool achievedMaximumMovement;
@property (nonatomic, retain) UIGestureRecognizer *catchEdgeSwipeFailureGesture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didProcessPendingSwipeBegan;
@property (nonatomic) bool didSeeExclusiveTouchBegan;
@property (nonatomic, retain) UIGestureRecognizer *directTouchGesture;
@property (nonatomic, retain) UIGestureRecognizer *exclusiveTouchGesture;
@property (nonatomic, readonly, copy) NSSet *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIGestureRecognizer *pendingSwipeGesture;
@property (readonly) Class superclass;
@property (nonatomic, retain) BKSTouchStream *touchStream;

- (void).cxx_destruct;
- (void)_addInternalGesturesToView:(id)arg1;
- (void)_catchSwipeFailureGestureChanged:(id)arg1;
- (void)_directTouchDown:(id)arg1;
- (unsigned char)_dispatchModeForExternalGestureCompletion;
- (void)_exclusiveTouchGestureChanged:(id)arg1;
- (void)_exclusiveTouchGestureDidTerminate:(id)arg1;
- (void)_externalGestureRecognizerChanged:(id)arg1;
- (void)_failedPendingSwipe;
- (void)_handleTooMuchMovementWithLastTouchTimestamp:(double)arg1;
- (void)_pendingSwipeGestureChanged:(id)arg1;
- (void)_pendingSwipeGestureDidBegin:(id)arg1;
- (void)_pendingSwipeGestureDidTerminate:(id)arg1;
- (void)_removeInternalGestures;
- (bool)achievedMaximumMovement;
- (void)addGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2;
- (id)catchEdgeSwipeFailureGesture;
- (void)clearTransform;
- (void)dealloc;
- (id)description;
- (bool)didProcessPendingSwipeBegan;
- (bool)didSeeExclusiveTouchBegan;
- (id)directTouchGesture;
- (id)exclusiveTouchGesture;
- (void)exclusiveTouchGestureRecognizer:(id)arg1 achievedMaximumAbsoluteAccumulatedMovement:(bool)arg2 timestamp:(double)arg3;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)gestureRecognizers;
- (id)initWithDisplayIdentity:(id)arg1;
- (id)pendingSwipeGesture;
- (void)removeGestureRecognizer:(id)arg1;
- (void)setAchievedMaximumMovement:(bool)arg1;
- (void)setCatchEdgeSwipeFailureGesture:(id)arg1;
- (void)setDidProcessPendingSwipeBegan:(bool)arg1;
- (void)setDidSeeExclusiveTouchBegan:(bool)arg1;
- (void)setDirectTouchGesture:(id)arg1;
- (void)setExclusiveTouchGesture:(id)arg1;
- (void)setPendingSwipeGesture:(id)arg1;
- (void)setTouchStream:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)touchStream;
- (id)windowForSystemGestures;

@end
