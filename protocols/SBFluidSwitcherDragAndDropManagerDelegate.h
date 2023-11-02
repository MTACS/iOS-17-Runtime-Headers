
@protocol SBFluidSwitcherDragAndDropManagerDelegate <NSObject>

@required

- (void)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 didBeginDraggingWindowWithSceneIdentifier:(NSString *)arg2;
- (void)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 didBeginGesture:(SBFluidSwitcherGesture *)arg2;
- (void)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 didEndGesture:(SBFluidSwitcherGesture *)arg2;
- (void)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 didPlatterizeWindowDragWithSceneIdentifier:(NSString *)arg2;
- (void)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 didUpdateGesture:(SBFluidSwitcherGesture *)arg2;
- (SBDisplayItem *)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 displayItemForDraggingWindowWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (<SBAppPlatterDragSourceViewProviding> *)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 sourceViewProviderForDraggingWindowWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 willEndDraggingWindowWithSceneIdentifier:(NSString *)arg2;

@end
