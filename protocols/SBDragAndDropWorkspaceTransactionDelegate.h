
@protocol SBDragAndDropWorkspaceTransactionDelegate <NSObject>

@required

- (void)dragAndDropTransaction:(SBDragAndDropWorkspaceTransaction *)arg1 didBeginGesture:(SBFluidSwitcherGesture *)arg2;
- (void)dragAndDropTransaction:(SBDragAndDropWorkspaceTransaction *)arg1 didEndGesture:(SBFluidSwitcherGesture *)arg2;
- (void)dragAndDropTransaction:(SBDragAndDropWorkspaceTransaction *)arg1 didPlatterizeWindowDragWithSceneIdentifier:(NSString *)arg2;
- (void)dragAndDropTransaction:(SBDragAndDropWorkspaceTransaction *)arg1 didUpdateGesture:(SBFluidSwitcherGesture *)arg2;

@end
