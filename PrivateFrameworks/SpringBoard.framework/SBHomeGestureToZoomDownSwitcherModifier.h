
@interface SBHomeGestureToZoomDownSwitcherModifier : SBTransitionSwitcherModifier {
    SBGestureInitiatedIconZoomAnimationAttributesSwitcherModifier * _animationAttributesModifier;
    SBAppLayout * _appLayout;
    SBSwitcherModifier * _nonGestureInitiatedZoomModifier;
    long long  _startingEnvironmentMode;
}

- (void).cxx_destruct;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (id)appLayoutsToCacheSnapshots;
- (bool)completesWhenChildrenComplete;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 nonGestureInitiatedZoomModifier:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4 liftOffVelocity:(struct CGPoint { double x1; double x2; })arg5 adjustAnimationAttributes:(bool)arg6;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3;
- (long long)wallpaperStyle;

@end
