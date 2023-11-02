
@interface _UIRotaryGestureRecognizer : UIGestureRecognizer {
    double  _accumulatedDistance;
    long long  _beganMode;
    double  _currentWheelPosition;
    NSNumber * _delegateMustBeginFromRestValue;
    double  _delta;
    struct CGPoint { 
        double x; 
        double y; 
    }  _digitizerLocation;
    bool  _hasNotifiedDelegateBeganClassifyingMovement;
    bool  _isActivelyTouching;
    long long  _movementClassification;
    NSMutableArray * _recentRotaryEvents;
    NSTimer * _restingTouchBeginTimer;
    NSTimer * _restingTouchRecoveryTimer;
    double  _rotaryDeadBand;
    struct { 
        unsigned int delegateRotaryGestureRecognizerCanBeginFromRest : 1; 
        unsigned int delegateRotaryGestureRecognizerMustBeginFromRest : 1; 
        unsigned int delegateRotaryGestureRecognizerStartedRestTimer : 1; 
        unsigned int delegateRotaryGestureRecognizerCancelledRestTimer : 1; 
        unsigned int delegateRotaryGestureRecognizerBeganClassifyingMovement : 1; 
        unsigned int delegateRotaryGestureRecognizerUpdatedClassifyingMovement : 1; 
        unsigned int delegateRotaryGestureRecognizerFailedClassifyingMovement : 1; 
        unsigned int delegateWasNonNil : 1; 
    }  _rotaryGestureRecognizerFlags;
    long long  _startRegion;
    double  _startWheelPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchBeganPoint;
    double  _velocity;
}

@property (nonatomic) double accumulatedDistance;
@property (nonatomic) long long beganMode;
@property (nonatomic) <_UIRotaryGestureRecognizerDelegate> *delegate;
@property (nonatomic) double delta;
@property (nonatomic) bool isActivelyTouching;
@property (nonatomic, readonly) double position;
@property (nonatomic) long long startRegion;
@property (nonatomic) double velocity;

- (void).cxx_destruct;
- (void)_activateRestingTouchRecoveryTimer;
- (double)_applyDeadbandToValue:(double)arg1;
- (double)_applyDistanceWeightToValue:(double)arg1;
- (double)_applyScaleFactor:(double)arg1 toValue:(double)arg2 fromAngle:(double)arg3 toAngle:(double)arg4;
- (void)_attemptToClassifyWithPreviousLocation:(struct CGPoint { double x1; double x2; })arg1 newLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_attemptToStartFromRestingTouch:(id)arg1;
- (double)_calculateAngleForTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (double)_calculateCurrentWheelPosition;
- (double)_calculateRadialDistance:(struct CGPoint { double x1; double x2; })arg1;
- (double)_calculateWheelPositionForTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (double)_deadzoneRangeForCurrentTouchLocation;
- (double)_deltaForEventInfos:(id)arg1;
- (double)_directionalMovementClassificationDistanceThreshold;
- (bool)_effectiveCanBeginFromRest;
- (bool)_effectiveMustBeginFromRest;
- (void)_endGestureFromRestingTouchRecovery:(id)arg1;
- (void)_enterRecoveryWindowOrEndGestureWithState:(long long)arg1;
- (bool)_invalidateRestingTouchBeginTimerIfNecessary;
- (void)_invalidateRestingTouchRecoveryTimerIfNecessary;
- (bool)_isPoint:(struct CGPoint { double x1; double x2; })arg1 inRangeOfCenter:(double)arg2;
- (bool)_isTouchFarEnoughFromCenterToActivateRestingTouch:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_isTouchInRangeOfInitialTouchForRestingTouchActivation:(struct CGPoint { double x1; double x2; })arg1;
- (double)_movementClassificationAngleThresholdNumerator;
- (void)_notifyDelegateBeganClassifyingMovementIfNecessary;
- (void)_notifyDelegateFailedClassifyingMovement;
- (void)_notifyDelegateRestTimerCancelledIfNecessary:(bool)arg1;
- (void)_notifyDelegateUpdatedClassifyingMovement;
- (void)_processEvent:(id)arg1;
- (long long)_regionForTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (long long)_regionForWheelPosition:(double)arg1;
- (void)_resetDeadband;
- (double)_restingTouchRangeForCurrentTouchLocation;
- (double)_velocityForEventInfos:(id)arg1;
- (double)accumulatedDistance;
- (long long)beganMode;
- (double)delta;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isActivelyTouching;
- (double)position;
- (void)reset;
- (void)setAccumulatedDistance:(double)arg1;
- (void)setBeganMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelta:(double)arg1;
- (void)setIsActivelyTouching:(bool)arg1;
- (void)setStartRegion:(long long)arg1;
- (void)setVelocity:(double)arg1;
- (long long)startRegion;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (double)velocity;

@end
