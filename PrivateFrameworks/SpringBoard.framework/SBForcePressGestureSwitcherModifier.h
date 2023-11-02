
@interface SBForcePressGestureSwitcherModifier : SBGestureSwitcherModifier {
    double  _additionalScaleForBreathing;
    SBCoplanarSwitcherModifier * _coplanarModifier;
    UIViewFloatAnimatableProperty * _inMultitaskingChangedProperty;
    SBSwitcherModifier * _multitaskingModifier;
    SBAppLayout * _selectedAppLayout;
    long long  _startingEnvironmentMode;
    SBForcePressGestureStateTrackingSwitcherModifier * _stateTrackingModifier;
}

- (void).cxx_destruct;
- (void)_beginAnimatingMultitaskingPropertyWithMode:(long long)arg1 settings:(id)arg2;
- (double)_effectivePanProgress;
- (bool)_forcePressGestureCanBreathe;
- (unsigned long long)_indexOfSelectedAppLayout;
- (id)_layoutSettings;
- (double)_scaleForCoplanarModifier;
- (id)_scaleSettings;
- (double)_switcherCardScale;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheSnapshots;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3 multitaskingModifier:(id)arg4;
- (double)initialPanThreshold;
- (bool)isContainerStatusBarVisible;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (id)keyboardSuppressionMode;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)visibleAppLayouts;
- (double)wallpaperScale;
- (long long)wallpaperStyle;

@end
