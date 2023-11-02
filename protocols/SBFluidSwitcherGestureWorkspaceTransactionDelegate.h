
@protocol SBFluidSwitcherGestureWorkspaceTransactionDelegate <NSObject>

@required

- (void)fluidSwitcherGestureTransaction:(SBFluidSwitcherGestureWorkspaceTransaction *)arg1 didBeginGesture:(SBFluidSwitcherGesture *)arg2;
- (void)fluidSwitcherGestureTransaction:(SBFluidSwitcherGestureWorkspaceTransaction *)arg1 didEndGesture:(SBFluidSwitcherGesture *)arg2;
- (void)fluidSwitcherGestureTransaction:(SBFluidSwitcherGestureWorkspaceTransaction *)arg1 didUpdateGesture:(SBFluidSwitcherGesture *)arg2;

@end
