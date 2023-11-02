
@interface SBSceneResizeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBAppLayout * _appLayout;
    long long  _startingSpaceConfiguration;
}

- (void).cxx_destruct;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)initWithAppLayout:(id)arg1 spaceConfiguration:(long long)arg2;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (long long)wallpaperStyle;

@end
