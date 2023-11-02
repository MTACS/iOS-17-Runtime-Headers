
@interface SBCrossblurDosidoSwitcherModifier : SBTransitionSwitcherModifier {
    unsigned long long  _direction;
    SBAppLayout * _fromAppLayout;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)_opacitySettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheSnapshots;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleResizeProgressEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 direction:(unsigned long long)arg4;
- (bool)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (id)resizeProgressNotificationsForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)scaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldAsyncRenderUntilDelay:(inout double*)arg1;
- (id)topMostLayoutElements;
- (id)transitionDidEnd;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
