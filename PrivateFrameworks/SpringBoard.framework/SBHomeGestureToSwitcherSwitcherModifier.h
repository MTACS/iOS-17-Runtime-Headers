
@interface SBHomeGestureToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    bool  _adjustAppLayoutsBeforeTransition;
    bool  _keepSelectedAppLayoutAsTopMostElement;
    struct CGPoint { 
        double x; 
        double y; 
    }  _liftOffTranslation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _liftOffVelocity;
    SBSwitcherModifier * _multitaskingModifier;
    SBAppLayout * _selectedAppLayout;
    long long  _startingEnvironmentMode;
}

- (void).cxx_destruct;
- (long long)_appLayoutAlignmentToScrollToDuringTransition;
- (id)_appLayoutToScrollToDuringTransition;
- (id)_dismissForEmptySwitcherResponseName;
- (id)_layoutSettings;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (id)appLayoutsToCacheSnapshots;
- (double)containerStatusBarAnimationDuration;
- (struct CGPoint { double x1; double x2; })contentOffsetForIndex:(unsigned long long)arg1 alignment:(long long)arg2;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (id)handleTimerEvent:(id)arg1;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)arg1 multitaskingModifier:(id)arg2 selectedAppLayout:(id)arg3 startingEnvironmentMode:(long long)arg4 liftOffVelocity:(struct CGPoint { double x1; double x2; })arg5 liftOffTranslation:(struct CGPoint { double x1; double x2; })arg6 adjustAppLayoutsBeforeTransition:(bool)arg7 keepSelectedAppLayoutAsTopMostElement:(bool)arg8;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end
