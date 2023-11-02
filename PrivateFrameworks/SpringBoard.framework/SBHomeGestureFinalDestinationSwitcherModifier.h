
@interface SBHomeGestureFinalDestinationSwitcherModifier : SBSwitcherModifier {
    double  _adaptiveMinimumYVelocityForHome;
    double  _adaptivePauseVelocityThresholdForAppSwitcher;
    double  _adaptiveVelocitySlopeThresholdForArc;
    bool  _continuingGesture;
    struct CGPoint { 
        double x; 
        double y; 
    }  _directionSwitchLocation;
    SBHomeGestureDockSwitcherModifier * _dockModifier;
    long long  _edgeRegionSampleCounter;
    <SBHomeGestureFinalDestinationSwitcherModifierDelegate> * _finalDestinationDelegate;
    NSString * _finalDestinationReason;
    bool  _gestureHasBegun;
    bool  _gestureHasEnded;
    bool  _hasSeenAccelerationDipForAppSwitcher;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTranslationAdjustment;
    bool  _isMouseEvent;
    double  _lastAverageVelocityYForAcceleration;
    double  _lastFinalDestination;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchLocation;
    double  _lastTouchTimestamp;
    double  _minYDistanceForHomeOrSwitcher;
    bool  _movingTowardsNextLayoutState;
    unsigned long long  _numberOfTouchSamples;
    bool  _scrunchInitiated;
    long long  _startingEnvironmentMode;
    long long  _touchType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
    bool  _updateEdgeRegionSampleCounter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (nonatomic, readonly) long long currentFinalDestination;
@property (nonatomic, readonly) NSString *finalDestinationReason;
@property (nonatomic, readonly) bool hasSeenAccelerationDipForAppSwitcher;

- (void).cxx_destruct;
- (long long)_adjustedFinalDestinationAccountingForEdgeDataDistortion:(long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (void)_applyPrototypeSettings;
- (bool)_hasTraveledSufficientDistanceForHomeOrAppSwitcherForMouseEvent:(bool)arg1;
- (bool)_isTranslationPastDistanceThresholdToUnconditionallyGoHome:(double)arg1;
- (double)_unconditionalDistanceThresholdForHome;
- (void)_updateAdaptiveThresholdsForCurrentFinalDestination:(long long)arg1 velocityAverage:(struct CGPoint { double x1; double x2; })arg2;
- (void)_updateForGestureDidBeginWithEvent:(id)arg1;
- (void)_updateForGestureDidChangeWithEvent:(id)arg1;
- (void)_updateForGestureDidEndWithEvent:(id)arg1;
- (void)_updateGestureTranslationVelocityAndProgressWithEvent:(id)arg1;
- (long long)currentFinalDestination;
- (id)debugDescription;
- (void)didMoveToParentModifier:(id)arg1;
- (id)finalDestinationReason;
- (id)handleGestureEvent:(id)arg1;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (bool)hasSeenAccelerationDipForAppSwitcher;
- (id)initWithDelegate:(id)arg1 initialTranslationAdjustment:(struct CGPoint { double x1; double x2; })arg2 minYDistanceForHomeOrSwitcher:(double)arg3 startingEnvironmentMode:(long long)arg4 continuingGesture:(bool)arg5 dockModifier:(id)arg6;
- (id)studyLogData;

@end
