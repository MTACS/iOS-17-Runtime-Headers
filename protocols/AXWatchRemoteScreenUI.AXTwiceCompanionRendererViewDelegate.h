
@protocol AXWatchRemoteScreenUI.AXTwiceCompanionRendererViewDelegate

@required

- (void)axActionPerformWithAction:(int)arg1 value:(id)arg2 bridgeElement:(UIAccessibilityBridgeElement *)arg3;
- (void)axElementActivate:(struct CGPoint { double x1; double x2; })arg1;
- (void)crownButtonLongPressed;
- (void)crownButtonPressed;
- (void)crownButtonScrollDown;
- (void)crownButtonScrollUp;
- (void)doubleCrownButtonPressed;
- (void)pullToDismissViewController;
- (void)sideButtonLongPressed;
- (void)sideButtonPressed;
- (void)stingButtonKeycord;
- (void)stingButtonLongPressed;
- (void)stingButtonPressed;
- (void)tripleCrownButtonPressed;

@end
