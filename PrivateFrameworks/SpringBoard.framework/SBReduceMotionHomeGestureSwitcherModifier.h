
@interface SBReduceMotionHomeGestureSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate> {
    bool  _continuingGesture;
    SBCoplanarSwitcherModifier * _coplanarLayoutModifier;
    bool  _didWarmupReduceMotionHaptic;
    SBDismissSiriSwitcherModifier * _dismissSiriModifier;
    SBHomeGestureDockSwitcherModifier * _dockModifier;
    bool  _endingGestureForAppSwitcher;
    SBHomeGestureFinalDestinationSwitcherModifier * _finalDestinationModifier;
    bool  _gestureHasBegun;
    bool  _gestureHasEnded;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocation;
    bool  _lastGestureWasAnArcSwipe;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchLocation;
    bool  _laysOutNeighboringCards;
    unsigned long long  _reduceMotionAxis;
    bool  _scrunchInitiated;
    SBAppLayout * _selectedAppLayout;
    bool  _shouldProvideBlur;
    long long  _startingEnvironmentMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translationAdjustmentForStartingFromHomeScreen;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool laysOutNeighboringCards;
@property (nonatomic) bool shouldProvideBlur;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyPrototypeSettings;
- (id)_newDockModifierRequiringVerticalSwipeToTrackDock:(bool)arg1 startingEnvironmentMode:(long long)arg2;
- (id)_responseForActivatingFinalDestination:(long long)arg1;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1;
- (id)_updateReduceMotionAxisIfNecessaryWithEvent:(id)arg1;
- (void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)arg1;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (id)appLayoutsToCacheSnapshots;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (long long)currentFinalDestination;
- (void)didMoveToParentModifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (long long)homeScreenBackdropBlurType;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 startingEnvironmentMode:(long long)arg3 scrunchInitiated:(bool)arg4 continuingGesture:(bool)arg5 lastGestureWasAnArcSwipe:(bool)arg6;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (id)keyboardSuppressionMode;
- (bool)laysOutNeighboringCards;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (void)setLaysOutNeighboringCards:(bool)arg1;
- (void)setShouldProvideBlur:(bool)arg1;
- (bool)shouldProvideBlur;
- (bool)shouldRubberbandFullScreenHomeGrabberView;
- (double)unconditionalDistanceThresholdForHome;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
