
@interface UITextRefinementInteraction : UITextInteraction <_UITextLoupeResponderProxyDelegate> {
    <UITextRefinementInteractionBehaviorDelegate> * _behaviorDelegate;
    UIDelayedAction * _delayedLoupeAction;
    UIDelayedAction * _delayedSelectionAction;
    UITextGestureTuning * _gestureTuning;
    bool  _hasPerformedInteraction;
    long long  _inheritedGranularity;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPointFromPreviousInteraction;
    _UITextLoupeResponderProxy * _responderProxy;
    bool  _triggeredByLongPress;
}

@property (nonatomic, retain) <UITextRefinementInteractionBehaviorDelegate> *behaviorDelegate;
@property (nonatomic, readonly) UITextGestureTuning *gestureTuning;
@property (nonatomic) long long inheritedGranularity;
@property (nonatomic, readonly) UIResponder *responder;
@property (nonatomic, retain) _UITextLoupeResponderProxy *responderProxy;
@property (nonatomic) bool shouldUseLineThreshold;
@property (nonatomic) bool strongerBiasAgainstUp;
@property (nonatomic) bool triggeredByLongPress;

- (void).cxx_destruct;
- (void)_createGestureTuningIfNecessary;
- (void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint { double x1; double x2; })arg3 locationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg4 forTouchType:(long long)arg5;
- (void)_processGestureForCustomHighlighter:(id)arg1;
- (bool)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (id)behaviorDelegate;
- (void)canBeginDragCursor:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cancelDelayedLoupeActionIfNecessary;
- (void)delayedDisplayLoupe:(id)arg1;
- (void)delayedLoupeAction:(id)arg1;
- (void)delayedSelectionAction:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)finishSetup;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)gestureTuning;
- (long long)inheritedGranularity;
- (id)initWithBehaviorDelegate:(id)arg1;
- (bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (void)loupeGesture:(id)arg1;
- (void)loupeGestureWithState:(long long)arg1 location:(id /* block */)arg2 translation:(id /* block */)arg3 velocity:(id /* block */)arg4 modifierFlags:(long long)arg5 shouldCancel:(bool*)arg6;
- (struct CGPoint { double x1; double x2; })pointIfPlacedCarefully:(struct CGPoint { double x1; double x2; })arg1;
- (id)responder;
- (id)responderProxy;
- (void)setBehaviorDelegate:(id)arg1;
- (void)setInheritedGranularity:(long long)arg1;
- (void)setResponderProxy:(id)arg1;
- (void)setShouldUseLineThreshold:(bool)arg1;
- (void)setStrongerBiasAgainstUp:(bool)arg1;
- (void)setTriggeredByLongPress:(bool)arg1;
- (void)setupDelayedLoupeActionWithInitialPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setupGestureExclusionRequirements;
- (bool)shouldUseLineThreshold;
- (bool)strongerBiasAgainstUp;
- (struct CGPoint { double x1; double x2; })touchAlignedPointForPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)translationIsWithinAllowableMovement:(struct CGPoint { double x1; double x2; })arg1;
- (bool)triggeredByLongPress;
- (void)updateInitialPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateOrCancelDelayedLoupeActionWithPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateVisibilityOffsetForGesture:(id)arg1;
- (void)willBeginExternalGesture;
- (void)willMoveToView:(id)arg1;

@end
