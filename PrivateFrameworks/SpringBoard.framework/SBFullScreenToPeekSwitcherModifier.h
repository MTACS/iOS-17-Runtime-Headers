
@interface SBFullScreenToPeekSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _animationPhase;
    SBAppLayout * _fromAppLayout;
    SBAppLayout * _fromFloatingAppLayout;
    long long  _peekConfiguration;
    bool  _resizedEnoughToUnblur;
    SBAppLayout * _toAppLayout;
    SBAppLayout * _toFloatingAppLayout;
}

- (void).cxx_destruct;
- (double)_firstPhaseScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_firstStageFrameForPeekingAppLayoutWithInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_isPeekingAppLayout:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (double)dockProgress;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleResizeProgressEvent:(id)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 fromFloatingAppLayout:(id)arg4 toFloatingAppLayout:(id)arg5 peekConfiguration:(long long)arg6;
- (bool)isContainerStatusBarVisible;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (id)keyboardSuppressionMode;
- (id)resizeProgressNotificationsForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)scaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)transitionDidEnd;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (double)wallpaperScale;
- (bool)wantsDockBehaviorAssertion;
- (bool)wantsDockWindowLevelAssertion;

@end
