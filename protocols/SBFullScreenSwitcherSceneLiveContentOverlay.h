
@protocol SBFullScreenSwitcherSceneLiveContentOverlay <SBSwitcherLiveContentOverlay>

@required

- (void)configureWithWorkspaceEntity:(SBWorkspaceEntity *)arg1 referenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentOrientation:(long long)arg3 containerOrientation:(long long)arg4 layoutRole:(long long)arg5 sbsDisplayLayoutRole:(long long)arg6 spaceConfiguration:(long long)arg7 floatingConfiguration:(long long)arg8 hasClassicAppOrientationMismatch:(bool)arg9 sizingPolicy:(long long)arg10;
- (UIViewController<SBLayoutStateTransitionObserver> *)contentViewController;
- (void)invalidate;
- (long long)overlayType;

@end
