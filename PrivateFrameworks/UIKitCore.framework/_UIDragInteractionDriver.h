
@interface _UIDragInteractionDriver : NSObject <_UIDragInteractionDriving> {
    bool  _additionalTouchesCancelLift;
    NSArray * _allowedTouchTypes;
    bool  _allowsSimultaneousRecognitionDuringLift;
    bool  _automaticallyAddsFailureRelationships;
    double  _cancellationDelay;
    bool  _cancellationTimerEnabled;
    double  _competingLongPressDelay;
    bool  _competingLongPressOnLift;
    <_UIDragInteractionDriverDelegate> * _delegate;
    bool  _enabled;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocationInWindow;
    id /* block */  _itemUpdater;
    double  _liftDelay;
    double  _liftMoveHysteresis;
    bool  _shouldAnimateLift;
    struct _UIDragInteractionDriverStateMachine { 
        unsigned long long state; 
        unsigned long long *eventsQueueEnd; 
    }  _stateMachine;
    UIView * _view;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic) bool additionalTouchesCancelLift;
@property (nonatomic, copy) NSArray *allowedTouchTypes;
@property (nonatomic) bool allowsSimultaneousRecognitionDuringLift;
@property (nonatomic) bool automaticallyAddsFailureRelationships;
@property (nonatomic) double cancellationDelay;
@property (nonatomic) bool cancellationTimerEnabled;
@property (nonatomic) double competingLongPressDelay;
@property (nonatomic) bool competingLongPressOnLift;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIDragInteractionDriverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialLocationInWindow;
@property (nonatomic, readonly) <UIDragInteractionEffect> *interactionEffect;
@property (nonatomic, readonly, copy) id /* block */ itemUpdater;
@property (nonatomic) double liftDelay;
@property (nonatomic) double liftMoveHysteresis;
@property (nonatomic) bool shouldAnimateLift;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_handleEvent:(unsigned long long)arg1;
- (unsigned long long)_state;
- (bool)additionalTouchesCancelLift;
- (id)allowedTouchTypes;
- (bool)allowsSimultaneousRecognitionDuringLift;
- (void)attachToView:(id)arg1;
- (bool)automaticallyAddsFailureRelationships;
- (void)cancel;
- (double)cancellationDelay;
- (bool)cancellationTimerEnabled;
- (double)competingLongPressDelay;
- (bool)competingLongPressOnLift;
- (id)delegate;
- (void)detachFromView:(id)arg1;
- (void)didTransitionToBeginState;
- (void)didTransitionToCancelState;
- (void)didTransitionToDeferred;
- (void)didTransitionToInactiveState;
- (void)didTransitionToInflightState;
- (void)didTransitionToPreparing;
- (id)init;
- (struct CGPoint { double x1; double x2; })initialLocationInWindow;
- (bool)isActive;
- (bool)isEnabled;
- (bool)isGestureRecognizerForDragInitiation:(id)arg1;
- (id /* block */)itemUpdater;
- (double)liftDelay;
- (double)liftMoveHysteresis;
- (void)setAdditionalTouchesCancelLift:(bool)arg1;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setAllowsSimultaneousRecognitionDuringLift:(bool)arg1;
- (void)setAutomaticallyAddsFailureRelationships:(bool)arg1;
- (void)setCancellationDelay:(double)arg1;
- (void)setCancellationTimerEnabled:(bool)arg1;
- (void)setCompetingLongPressDelay:(double)arg1;
- (void)setCompetingLongPressOnLift:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setInitialLocationInWindow:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLiftDelay:(double)arg1;
- (void)setLiftMoveHysteresis:(double)arg1;
- (void)setShouldAnimateLift:(bool)arg1;
- (void)setView:(id)arg1;
- (bool)shouldAnimateLift;
- (id)view;

@end
