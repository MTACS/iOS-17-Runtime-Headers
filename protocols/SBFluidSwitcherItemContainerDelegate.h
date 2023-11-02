
@protocol SBFluidSwitcherItemContainerDelegate <NSObject>

@required

- (bool)canSelectContainer:(SBFluidSwitcherItemContainer *)arg1 numberOfTaps:(long long)arg2;
- (void)container:(SBFluidSwitcherItemContainer *)arg1 didBecomeFocused:(bool)arg2;
- (void)containerDidEndAnimatingHighlight:(SBFluidSwitcherItemContainer *)arg1 scale:(double)arg2;
- (void)containerDidEndSwipingToKill:(SBFluidSwitcherItemContainer *)arg1;
- (void)containerSelectionStateChanged:(SBFluidSwitcherItemContainer *)arg1 toState:(long long)arg2 hover:(bool)arg3 pencilHover:(bool)arg4;
- (void)containerWillBeginAnimatingHighlight:(SBFluidSwitcherItemContainer *)arg1 scale:(double)arg2 isTracking:(bool)arg3;
- (void)containerWillBeginSwipingToKill:(SBFluidSwitcherItemContainer *)arg1;
- (double)currentStatusBarHeightOfContainer:(SBFluidSwitcherItemContainer *)arg1;
- (void)didSelectContainer:(SBFluidSwitcherItemContainer *)arg1 modifierFlags:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPageViewOfContainer:(SBFluidSwitcherItemContainer *)arg1 fullyPresented:(bool)arg2;
- (bool)hitTestedToFloatingElement:(struct CGPoint { double x1; double x2; })arg1 window:(UIWindow *)arg2 ofItemContainer:(SBFluidSwitcherItemContainer *)arg3;
- (bool)hitTestedToTopAffordance:(struct CGPoint { double x1; double x2; })arg1 window:(UIWindow *)arg2 ofItemContainer:(SBFluidSwitcherItemContainer *)arg3;
- (long long)homeScreenInterfaceOrientation;
- (void)killContainer:(SBFluidSwitcherItemContainer *)arg1 forReason:(long long)arg2;
- (void)pointerBeganResizingItemContainer:(SBFluidSwitcherItemContainer *)arg1;
- (void)pointerEndedResizingItemContainer:(SBFluidSwitcherItemContainer *)arg1;
- (void)scrollViewKillingProgressUpdated:(double)arg1 translation:(struct CGPoint { double x1; double x2; })arg2 isDragging:(bool)arg3 decelerationTargetProgress:(double)arg4 forContainer:(SBFluidSwitcherItemContainer *)arg5;
- (long long)switcherInterfaceOrientation;

@end
