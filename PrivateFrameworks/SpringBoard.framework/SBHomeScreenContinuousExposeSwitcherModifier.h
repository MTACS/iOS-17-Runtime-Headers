
@interface SBHomeScreenContinuousExposeSwitcherModifier : SBSwitcherModifier {
    SBHomeScreenSwitcherModifier * _homeScreenModifier;
    SBStripContinuousExposeSwitcherModifier * _stripModifier;
}

- (void).cxx_destruct;
- (double)continuousExposeStripProgress;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleEvent:(id)arg1;
- (id)init;
- (bool)isContainerStatusBarVisible;
- (bool)isLayoutRoleSelectable:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isResizeGrabberVisibleForAppLayout:(id)arg1;
- (bool)isScrollEnabled;
- (id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3;
- (long long)shadowStyleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldAllowContentViewTouchesForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (long long)touchBehaviorForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct SBSwitcherGradientWallpaperAttributes { double x1; double x2; })wallpaperGradientAttributesForIndex:(unsigned long long)arg1;

@end
