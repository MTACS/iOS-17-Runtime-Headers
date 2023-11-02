
@interface _UIDragInteractionLongPressDriver : _UIDragInteractionDriver <UIGestureRecognizerDelegate> {
    unsigned long long  _behavior;
    UIDelayedAction * _cancellationTimer;
    UIDelayedAction * _gateTimer;
    _UIDragLiftGestureRecognizer * _gestureRecognizerForDragInitiation;
    _UIRelationshipGestureRecognizer * _gestureRecognizerForExclusionRelationship;
    _UIRelationshipGestureRecognizer * _gestureRecognizerForFailureRelationship;
}

@property (nonatomic, readonly) unsigned long long behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _UIDragLiftGestureRecognizer *gestureRecognizerForDragInitiation;
@property (nonatomic, readonly) _UIRelationshipGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (nonatomic, readonly) _UIRelationshipGestureRecognizer *gestureRecognizerForFailureRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dragInitiationGestureStateChanged:(id)arg1;
- (void)_gateCompetingGestureRecognizers;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_updateLiftMoveHysteresisInDragInitiationGesture;
- (bool)_wantsTimeDelayedFailureRequirementGate;
- (void)attachToView:(id)arg1;
- (unsigned long long)behavior;
- (bool)canExcludeCompetingGestureRecognizer:(id)arg1;
- (void)detachFromView:(id)arg1;
- (void)didTransitionToBeginState;
- (void)didTransitionToCancelState;
- (void)didTransitionToDeferred;
- (void)didTransitionToInactiveState;
- (void)didTransitionToInflightState;
- (void)didTransitionToPreparing;
- (void)dragInitiationGestureStateChanged:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)gestureRecognizerForDragInitiation;
- (id)gestureRecognizerForExclusionRelationship;
- (id)gestureRecognizerForFailureRelationship;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasExceededAllowableMovement;
- (bool)hasMoveHysteresisBeenReached;
- (id)init;
- (id)initWithBehavior:(unsigned long long)arg1;
- (void)invalidateCancellationTimer;
- (void)invalidateCompetingGestureRecognizerGateTimer;
- (bool)isGestureRecognizerForDragInitiation:(id)arg1;
- (void)openCompetingGestureRecognizerGateCancelingGestures:(id)arg1;
- (void)openGateCancelingAddItemsGestures;
- (void)reset;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setAutomaticallyAddsFailureRelationships:(bool)arg1;
- (void)setLiftDelay:(double)arg1;
- (void)setLiftMoveHysteresis:(double)arg1;
- (bool)shouldDelayCompetingGestureRecognizer:(id)arg1;
- (double)translationInWindow;

@end
