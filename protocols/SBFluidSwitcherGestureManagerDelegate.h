
@protocol SBFluidSwitcherGestureManagerDelegate <NSObject>

@required

- (void)fluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 clickReceivedForHomeGrabberView:(SBHomeGrabberView *)arg2;
- (void)fluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 didBeginDraggingWindowWithSceneIdentifier:(NSString *)arg2;
- (void)fluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 didBeginGesture:(SBFluidSwitcherGesture *)arg2;
- (void)fluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 didEndGesture:(SBFluidSwitcherGesture *)arg2;
- (void)fluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 didPlatterizeWindowDragWithSceneIdentifier:(NSString *)arg2;
- (void)fluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 didUpdateGesture:(SBFluidSwitcherGesture *)arg2;
- (void)fluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 tapReceivedForGrabberTongueAtEdge:(unsigned long long)arg2;
- (void)fluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 willEndDraggingWindowWithSceneIdentifier:(NSString *)arg2;
- (bool)fluidSwitcherGestureManagerSupportsFloatingApplication:(SBFluidSwitcherGestureManager *)arg1;

@end
