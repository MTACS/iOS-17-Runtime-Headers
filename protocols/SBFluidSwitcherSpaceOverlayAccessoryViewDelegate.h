
@protocol SBFluidSwitcherSpaceOverlayAccessoryViewDelegate <NSObject>

@required

- (void)overlayAccessoryView:(SBFluidSwitcherSpaceOverlayAccessoryView *)arg1 didSelectHeaderForRole:(long long)arg2;
- (void)overlayAccessoryView:(SBFluidSwitcherSpaceOverlayAccessoryView *)arg1 didUpdateShowingIconOverlay:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overlayAccessoryViewFrameForIconOverlayView:(SBFluidSwitcherSpaceOverlayAccessoryView *)arg1 fullPresented:(bool)arg2;
- (long long)overlayAccessoryViewHomeScreenInterfaceOrientation:(SBFluidSwitcherSpaceOverlayAccessoryView *)arg1;
- (long long)overlayAccessoryViewSwitcherInterfaceOrientation:(SBFluidSwitcherSpaceOverlayAccessoryView *)arg1;

@end
