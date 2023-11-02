
@interface SBDisplayItemLayoutAttributesCalculator : NSObject {
    SBContinuousExposeAutoLayoutController * _cached_autoLayoutController;
    SBFluidSwitcherSheetMetricsCache * _centerWindowSheetMetricsCache;
    SBDisplayItemLayoutGrid * _chamoisLayoutGridCache;
    SBSwitcherChamoisSettings * _chamoisSettingsCache;
}

- (void).cxx_destruct;
- (id)_appLayoutByPerformingAutoLayoutIfNeededInAppLayout:(id)arg1 previousAppLayout:(id)arg2 options:(unsigned long long)arg3 containerOrientation:(long long)arg4 chamoisLayoutAttributes:(id)arg5 floatingDockHeight:(double)arg6 screenScale:(double)arg7 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 prefersStripHidden:(bool)arg9 prefersDockHidden:(bool)arg10 source:(long long)arg11;
- (bool)_appLayoutContainsOnlyResizableApps:(id)arg1;
- (id)_applicationForDisplayItem:(id)arg1;
- (id)_autoLayoutController;
- (id)_centerWindowSheetMetricsCache;
- (id)_chamoisLayoutGridCache;
- (id)_chamoisSettingsCache;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_containerBoundsForWindowScene:(id)arg1 containerOrientation:(long long)arg2;
- (id)_deviceApplicationSceneHandleForDisplayItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 containerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 containerOrientation:(long long)arg4 chamoisLayoutAttributes:(id)arg5 floatingDockHeight:(double)arg6 screenScale:(double)arg7 isChamoisWindowingUIEnabled:(bool)arg8 prefersStripHidden:(bool)arg9 prefersDockHidden:(bool)arg10 skipAutoLayout:(bool)arg11;
- (id)appLayoutByPerformingAutoLayoutForAppLayout:(id)arg1 previousAppLayout:(id)arg2 options:(unsigned long long)arg3 containerOrientation:(long long)arg4 chamoisLayoutAttributes:(id)arg5 floatingDockHeight:(double)arg6 screenScale:(double)arg7 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 prefersStripHidden:(bool)arg9 prefersDockHidden:(bool)arg10 source:(long long)arg11;
- (id)appLayoutByPerformingAutoLayoutForAppLayout:(id)arg1 previousAppLayout:(id)arg2 options:(unsigned long long)arg3 containerOrientation:(long long)arg4 windowScene:(id)arg5 source:(long long)arg6;
- (id)autoLayoutSpaceForAppLayout:(id)arg1 containerOrientation:(long long)arg2 chamoisLayoutAttributes:(id)arg3 floatingDockHeight:(double)arg4 screenScale:(double)arg5 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 prefersStripHidden:(bool)arg7 prefersDockHidden:(bool)arg8;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForCenterItemWithConfiguration:(long long)arg1 interfaceOrientation:(long long)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForCenterItemWithConfiguration:(long long)arg1 interfaceOrientation:(long long)arg2 windowScene:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2 windowScene:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 containerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 containerOrientation:(long long)arg4 chamoisLayoutAttributes:(id)arg5 floatingDockHeight:(double)arg6 screenScale:(double)arg7 isChamoisWindowingUIEnabled:(bool)arg8 prefersStripHidden:(bool)arg9 prefersDockHidden:(bool)arg10;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 containerOrientation:(long long)arg3 windowScene:(id)arg4;
- (id)layoutRestrictionInfoForItem:(id)arg1;
- (long long)sizingPolicyForDisplayItem:(id)arg1 contentOrientation:(long long)arg2 containerOrientation:(long long)arg3 proposedSizingPolicy:(long long)arg4 windowScene:(id)arg5;

@end
