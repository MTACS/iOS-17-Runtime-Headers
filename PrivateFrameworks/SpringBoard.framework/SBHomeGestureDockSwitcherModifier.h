
@interface SBHomeGestureDockSwitcherModifier : SBSwitcherModifier {
    bool  _currentlyTrackingDock;
    <SBHomeGestureDockSwitcherModifierDelegate> * _delegate;
    bool  _gestureHasBegun;
    bool  _gestureHasEnded;
    bool  _hadOpenDockFolderWhenGestureBegan;
    bool  _hadOpenForegroundLibraryWhenGestureBegan;
    bool  _hadOpenHomeScreenFolderWhenGestureBegan;
    bool  _highEnoughToShowDock;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchLocation;
    bool  _requireVerticalSwipeToTrackDock;
    long long  _startingEnvironmentMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translationAdjustmentForFloatingDock;
    struct CGPoint { 
        double x; 
        double y; 
    }  _unadjustedGestureTranslation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
    bool  _verticallyRubberbandedOutOfDock;
    bool  _wantsDockAssertion;
    bool  _wasTrackingDockWhenGestureBegan;
}

@property (getter=isCurrentlyTrackingDock, nonatomic, readonly) bool currentlyTrackingDock;

- (void).cxx_destruct;
- (void)_applyPrototypeSettings;
- (bool)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
- (bool)_rubberbandedOutOfDockHorizontally;
- (bool)_shouldPresentDockForFinalDestination:(long long)arg1;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1;
- (long long)adjustedFinalDestinationForDestination:(long long)arg1 withTranslation:(struct CGPoint { double x1; double x2; })arg2 velocity:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })adjustedTranslationForTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (id)debugDescription;
- (void)didMoveToParentModifier:(id)arg1;
- (double)dockProgress;
- (long long)dockUpdateMode;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (id)handleGestureEvent:(id)arg1;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (id)initWithDelegate:(id)arg1 startingEnvironmentMode:(long long)arg2 requireVerticalSwipeToTrackDock:(bool)arg3;
- (bool)isCurrentlyTrackingDock;
- (id)studyLogData;
- (struct CGPoint { double x1; double x2; })translationForAdjustedTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)wantsDockBehaviorAssertion;
- (bool)wantsDockWindowLevelAssertion;

@end
