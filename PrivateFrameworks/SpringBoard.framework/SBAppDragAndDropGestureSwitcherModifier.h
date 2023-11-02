
@interface SBAppDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier {
    NSString * _draggedSceneIdentifier;
    long long  _draggedSceneOriginalLayoutRole;
    long long  _dropAction;
    SBAppLayout * _dropTransitionFromAppLayout;
    bool  _floatingSwitcherVisible;
    SBAppLayout * _fullScreenAppLayout;
    bool  _gestureEnded;
    bool  _hasPlatterized;
    bool  _hasPreviewLifted;
    bool  _hasResizedEnoughToUnblur;
    SBAppLayout * _initialFullScreenAppLayout;
    bool  _isBlurred;
    bool  _isBlurring;
    bool  _isResizing;
    bool  _isWindowDrag;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    bool  _needsBlurBecauseFramesWillMismatch;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _platterFrame;
    bool  _shouldPushInFullScreenContent;
    SBDragAndDropToAppTransitionSwitcherModifier * _transitionModifier;
}

- (void).cxx_destruct;
- (bool)_isDraggingLiveWindow;
- (void)_recomputeBlurStateWithCompletion:(id /* block */)arg1;
- (bool)_shouldPushInFullScreenContentForEvent:(id)arg1;
- (bool)_showResizeUI;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (double)backgroundOpacityForIndex:(unsigned long long)arg1;
- (bool)completesWhenChildrenComplete;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleBlurProgressEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleResizeProgressEvent:(id)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (double)homeScreenDimmingAlpha;
- (id)initWithGestureID:(id)arg1 floatingSwitcherVisible:(bool)arg2 fullScreenAppLayout:(id)arg3;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isResizeGrabberVisibleForAppLayout:(id)arg1;
- (id)resizeProgressNotificationsForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)scaleForIndex:(unsigned long long)arg1;
- (bool)switcherHitTestsAsOpaque;

@end
