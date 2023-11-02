
@interface SBHomeGestureSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate> {
    double  _absoluteScale;
    bool  _cancelledGestureForEmptySwitcher;
    struct CGPoint { 
        double x; 
        double y; 
    }  _centroid;
    struct CGPoint { 
        double x; 
        double y; 
    }  _centroidAdjustment;
    bool  _continuingGesture;
    SBCoplanarSwitcherModifier * _coplanarLayoutModifier;
    bool  _didPlayFlyInHaptic;
    bool  _didWarmupFlyInHaptic;
    SBDismissSiriSwitcherModifier * _dismissSiriModifier;
    CADisplayLink * _displayLink;
    SBHomeGestureDockSwitcherModifier * _dockModifier;
    bool  _everTranslatedUpwards;
    SBHomeGestureFinalDestinationSwitcherModifier * _finalDestinationModifier;
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
    }  _initialCentroid;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocation;
    double  _lastFrameOffsetX;
    bool  _lastGestureWasAnArcSwipe;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchLocation;
    double  _lastTouchTimestamp;
    double  _lastTranslationXForRubberbanding;
    bool  _laysOutNeighboringCards;
    SBSwitcherModifier * _multitaskingModifier;
    double  _progressToInSwitcherCardScale;
    double  _progressToMaxTranslation;
    bool  _providesHomeScreenDimmingAlpha;
    bool  _scrunchInitiated;
    SBAppLayout * _selectedAppLayout;
    bool  _shouldResignActive;
    double  _stackedProgress;
    long long  _startingEnvironmentMode;
    double  _toHomeScreenAlpha;
    double  _toHomeScreenBlurProgress;
    double  _toHomeScreenDimmingAlpha;
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
    struct CGPoint { 
        double x; 
        double y; 
    }  _translationWithoutScale;
    double  _translationXLostToRubberbanding;
    double  _translationYWhenTriggeredCardFlyIn;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool laysOutNeighboringCards;
@property (nonatomic) bool providesHomeScreenDimmingAlpha;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyPrototypeSettings;
- (void)_beginAnimatingMultitaskingPropertyWithMode:(long long)arg1 settings:(id)arg2;
- (double)_centerYOffsetDuringGesture;
- (double)_coplanarSpacing;
- (id)_cornerRadiusSettings;
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
- (id)_newDockModifierRequiringVerticalSwipeToTrackDock:(bool)arg1 startingEnvironmentMode:(long long)arg2;
- (bool)_preventPositioningCardsOffscreenForFlatBottomEdgeSwipe;
- (id)_responseForActivatingFinalDestination:(long long)arg1;
- (id)_responseForActivatingReachabilityIfNeededWithFinalDestination:(long long)arg1;
- (id)_responseForSBEventGestureBeganWithTimeDelta:(double)arg1;
- (id)_responseForSBEventGestureEndWithEvent:(id)arg1 finalDestination:(long long)arg2;
- (id)_responseForStudyLogDidBeginGesture;
- (id)_responseForStudyLogDidEndGestureWithEvent:(id)arg1 finalDestination:(long long)arg2 destinationReason:(id)arg3;
- (id)_responseForUpdatingIconViewVisibility:(bool)arg1;
- (id)_responseForUpdatingLayoutForGestureBegan;
- (struct CGPoint { double x1; double x2; })_rubberbandedTranslationForAdjacentCards;
- (double)_scaleForAdjacentCards;
- (double)_scaleForOffscreenAdjacentCardsForFlyIn;
- (double)_scaleForTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)_selectedAppLayoutIndex;
- (bool)_shouldPositionAdjacentCardsOffscreenForFlyIn;
- (bool)_shouldResignActiveBasedOnCardScale;
- (double)_switcherCardScale;
- (struct CGPoint { double x1; double x2; })_unadjustedGestureTranslation;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (void)_updateFrameOffsetForXRubberbandingForTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateGestureTranslationVelocityAndProgressWithEvent:(id)arg1;
- (id)_updateInMultitaskingIfNeededWithLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateShouldResignActiveWithEvent:(id)arg1;
- (void)_updateStackedProgress;
- (void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (id)appLayoutsToCacheSnapshots;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (long long)currentFinalDestination;
- (void)dealloc;
- (id)debugDescription;
- (void)didMoveToParentModifier:(id)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (long long)headerStyleForIndex:(unsigned long long)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 startingEnvironmentMode:(long long)arg3 multitaskingModifier:(id)arg4 scrunchInitiated:(bool)arg5 continuingGesture:(bool)arg6 lastGestureWasAnArcSwipe:(bool)arg7;
- (bool)isContainerStatusBarVisible;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isHomeScreenContentRequired;
- (bool)isShowingOrAnimatingCardsForFlyIn;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (id)keyboardSuppressionMode;
- (bool)laysOutNeighboringCards;
- (struct CGPoint { double x1; double x2; })liftOffTranslationForGestureEnd;
- (struct CGPoint { double x1; double x2; })liftOffVelocityForGestureEnd;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)providesHomeScreenDimmingAlpha;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)selectedAppLayout;
- (void)setLaysOutNeighboringCards:(bool)arg1;
- (void)setProvidesHomeScreenDimmingAlpha:(bool)arg1;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (bool)shouldPinLayoutRolesToSpace:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (double)unconditionalDistanceThresholdForHome;
- (id)visibleAppLayouts;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;
- (double)wallpaperScale;
- (long long)wallpaperStyle;

@end
