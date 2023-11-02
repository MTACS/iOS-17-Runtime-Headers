
@interface SBHomeGestureFloatingSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate> {
    bool  _continuingGesture;
    SBDismissSiriSwitcherModifier * _dismissSiriModifier;
    CADisplayLink * _displayLink;
    SBHomeGestureFinalDestinationSwitcherModifier * _finalDestinationModifier;
    long long  _floatingConfiguration;
    bool  _gestureHasBegun;
    bool  _gestureHasEnded;
    long long  _gestureHoldTimer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _gestureLiftOffTranslation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _gestureLiftOffVelocity;
    bool  _hasBecomeCoplanarSinceGestureFromSwitcherBegan;
    bool  _hasTriggeredCardFlyIn;
    bool  _inMultitasking;
    UIViewFloatAnimatableProperty * _inMultitaskingChangedProperty;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocation;
    bool  _lastGestureWasAnArcSwipe;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchLocation;
    double  _lastTouchTimestamp;
    double  _multitaskingHintProgress;
    double  _progressToInSwitcherCardScale;
    double  _progressToMaxTranslation;
    UIViewFloatAnimatableProperty * _rampingProperty;
    double  _rubberbandedYTranslation;
    double  _scaleProgress;
    SBAppLayout * _selectedAppLayout;
    SBStackedFloatingSwitcherModifier * _stackedLayoutModifier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchOffset;
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
    }  _translationAdjustmentForStartingFromSwitcher;
    double  _translationYWhenTriggeredCardFlyIn;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyPrototypeSettings;
- (void)_beginAnimatingMultitaskingPropertyWithMode:(long long)arg1 settings:(id)arg2;
- (void)_beginAnimatingRampingPropertyWithSettings:(id)arg1;
- (double)_centerYOffsetDuringGesture;
- (void)_displayLinkFired:(id)arg1;
- (double)_distanceYToInSwitcherCardScale;
- (double)_distanceYToMaxTranslation;
- (struct CGPoint { double x1; double x2; })_frameOffsetForTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (double)_gestureProgressToMaxTranslationForTranslation:(double)arg1;
- (bool)_hasPausedEnoughForFlyIn;
- (bool)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
- (bool)_inMultitaskingForLocation:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2;
- (double)_inSwitcherCenterYOffsetWhenPresented;
- (bool)_isSelectedAppLayoutAtIndex:(unsigned long long)arg1;
- (bool)_isTranslationPastDistanceThresholdToUnconditionallyGoHome:(double)arg1;
- (id)_layoutSettingsForAppLayout:(id)arg1 layoutSettings:(id)arg2;
- (id)_responseForActivatingFinalDestination:(long long)arg1;
- (double)_scaleForTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)_selectedAppLayoutIndex;
- (double)_switcherCardScale;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (void)_updateGestureTranslationVelocityAndProgressWithEvent:(id)arg1;
- (id)_updateInMultitaskingIfNeededWithLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutToAttachSlideOverTongue;
- (id)appLayoutsToCacheSnapshots;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (long long)currentFinalDestination;
- (void)didMoveToParentModifier:(id)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 continuingGesture:(bool)arg3 lastGestureWasAnArcSwipe:(bool)arg4 floatingConfiguration:(long long)arg5;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (id)keyboardSuppressionMode;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)slideOverTongueDirection;
- (unsigned long long)slideOverTongueState;
- (id)topMostLayoutElements;
- (double)unconditionalDistanceThresholdForHome;
- (id)visibleAppLayouts;

@end
