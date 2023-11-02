
@interface SBForcePressGestureStateTrackingSwitcherModifier : SBSwitcherModifier {
    struct CGPoint { 
        double x; 
        double y; 
    }  _averageVelocity;
    bool  _didBeginPanning;
    bool  _didPop;
    double  _forceProgress;
    double  _panProgress;
    double  _panTranslationThreshold;
    SBAppLayout * _selectedAppLayout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } averageVelocity;
@property (nonatomic, readonly) bool didBeginPanning;
@property (nonatomic, readonly) bool didPop;
@property (nonatomic, readonly) double forceProgress;
@property (nonatomic, readonly) double panProgress;
@property (nonatomic, readonly) double panTranslationThreshold;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } velocity;

- (void).cxx_destruct;
- (bool)_canCommitToSwitcherWithPanPercent:(double)arg1 forceComplete:(bool)arg2;
- (long long)_currentFinalDestination;
- (double)_currentProgressForGestureEvent:(id)arg1;
- (double)_projectedTranslationWithVelocity:(struct CGPoint { double x1; double x2; })arg1 initialTranslation:(double)arg2;
- (id)_responseForActivatingFinalDestination:(long long)arg1;
- (id)_updateForGestureDidBeginWithGestureEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithGestureEvent:(id)arg1;
- (id)_updateForGestureDidEndWithGestureEvent:(id)arg1;
- (void)_updateForcePressTrackingWithGestureEvent:(id)arg1;
- (struct CGPoint { double x1; double x2; })averageVelocity;
- (bool)didBeginPanning;
- (bool)didPop;
- (double)forceProgress;
- (id)handleGestureEvent:(id)arg1;
- (id)initWithSelectedAppLayout:(id)arg1;
- (double)panProgress;
- (double)panTranslationThreshold;
- (struct CGPoint { double x1; double x2; })velocity;

@end
