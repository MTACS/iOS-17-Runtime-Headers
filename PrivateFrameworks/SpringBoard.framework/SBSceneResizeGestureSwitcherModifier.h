
@interface SBSceneResizeGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout * _appLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialSpaceFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTranslationThatUpdatedScene;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    SBFFluidBehaviorSettings * _rampedLayoutSettings;
    UIViewFloatAnimatableProperty * _rampingProperty;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _startingFrameForPrimaryItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _startingFrameForSideItem;
    long long  _startingSpaceConfiguration;
    unsigned long long  _timerGenCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

- (void).cxx_destruct;
- (long long)_actionForNormalizedProgress:(double)arg1 inOrientation:(long long)arg2;
- (id)_appLayoutForAction:(long long)arg1;
- (void)_beginAnimatingRampingProperty;
- (long long)_configurationForFinalResizeAction:(long long)arg1;
- (long long)_currentActionWithProjection:(bool)arg1;
- (long long)_currentPresentationAction;
- (id)_handleGestureEventBeganWithEvent:(id)arg1;
- (id)_handleGestureEventChangedWithEvent:(id)arg1;
- (id)_handleGestureEventEndedWithEvent:(id)arg1;
- (double)_maxCardWidthForDismissalAction;
- (double)_minimumCardWidthForDismissalAction;
- (double)_normalizedDismissLeftProgress;
- (double)_normalizedDismissRightProgress;
- (double)_normalizedHalfHalfProgress;
- (double)_normalizedHorizontalLocationWithProjection:(bool)arg1;
- (double)_normalizedNarrowWideProgress;
- (double)_normalizedPeekDismissLeftProgress;
- (double)_normalizedPeekDismissRightProgress;
- (double)_normalizedProgressBetweenHalfHalfAndWideNarrow;
- (double)_normalizedProgressBetweenNarrowWideAndHalfHalf;
- (double)_normalizedWideNarrowProgress;
- (long long)_presentationActionForNormalizedProgress:(double)arg1;
- (id)_responseForGestureUpdateWithPause:(bool)arg1 gestureIsEnding:(bool)arg2;
- (double)_rubberbandingRange;
- (double)_switcherWidth;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (double)backgroundOpacityForIndex:(unsigned long long)arg1;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (unsigned long long)hiddenContentStatusBarPartsForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)initWithGestureID:(id)arg1 appLayout:(id)arg2 spaceConfiguration:(long long)arg3;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (id)keyboardSuppressionMode;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)resizeGrabberLayoutAttributesForAppLayout:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (bool)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (bool)wantsSceneResizesHostedContextForAppLayout:(id)arg1;

@end
