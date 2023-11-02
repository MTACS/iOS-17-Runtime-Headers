
@interface SBFluidSwitcherScreenEdgePanGestureRecognizer : SBHomeGesturePanGestureRecognizer {
    SBFluidSwitcherViewController * _switcherViewController;
    long long  _touchInterfaceOrientationWhenGestureBegan;
}

@property (nonatomic) SBFluidSwitcherViewController *switcherViewController;

- (void).cxx_destruct;
- (long long)_touchInterfaceOrientation;
- (void)reset;
- (void)setState:(long long)arg1;
- (void)setSwitcherViewController:(id)arg1;
- (id)switcherViewController;
- (id)viewForTouchHistory;

@end
