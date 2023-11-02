
@protocol SBFolderControllerDragDelegate <NSObject>

@optional

- (void)folderController:(SBFolderController *)arg1 draggedIconShouldDropFromListView:(SBIconListView *)arg2;
- (bool)folderController:(SBFolderController *)arg1 iconListView:(SBIconListView *)arg2 canHandleIconDropSession:(id <UIDropSession>)arg3;
- (<UIViewSpringAnimationBehaviorDescribing> *)folderController:(SBFolderController *)arg1 iconListView:(SBIconListView *)arg2 customSpringAnimationBehaviorForDroppingItem:(UIDragItem *)arg3;
- (void)folderController:(SBFolderController *)arg1 iconListView:(SBIconListView *)arg2 iconDragItem:(UIDragItem *)arg3 willAnimateDropWithAnimator:(id <UIDragAnimating>)arg4;
- (void)folderController:(SBFolderController *)arg1 iconListView:(SBIconListView *)arg2 iconDropSession:(id <UIDropSession>)arg3 didPauseAtLocation:(struct CGPoint { double x1; double x2; })arg4;
- (void)folderController:(SBFolderController *)arg1 iconListView:(SBIconListView *)arg2 iconDropSessionDidEnter:(id <UIDropSession>)arg3;
- (void)folderController:(SBFolderController *)arg1 iconListView:(SBIconListView *)arg2 iconDropSessionDidExit:(id <UIDropSession>)arg3;
- (UIDropProposal *)folderController:(SBFolderController *)arg1 iconListView:(SBIconListView *)arg2 iconDropSessionDidUpdate:(id <UIDropSession>)arg3;
- (SBIconView *)folderController:(SBFolderController *)arg1 iconListView:(SBIconListView *)arg2 iconViewForDroppingIconDragItem:(UIDragItem *)arg3 proposedIconView:(SBIconView *)arg4;
- (void)folderController:(SBFolderController *)arg1 iconListView:(SBIconListView *)arg2 performIconDrop:(id <UIDropSession>)arg3;
- (UITargetedDragPreview *)folderController:(SBFolderController *)arg1 iconListView:(SBIconListView *)arg2 previewForDroppingIconDragItem:(UIDragItem *)arg3 proposedPreview:(UITargetedDragPreview *)arg4;
- (bool)folderController:(SBFolderController *)arg1 iconListView:(SBIconListView *)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id <UIDropSession>)arg3 onIconView:(SBIconView *)arg4;
- (void)folderController:(SBFolderController *)arg1 iconListView:(SBIconListView *)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(SBIconView *)arg3;
- (void)folderController:(SBFolderController *)arg1 iconListView:(SBIconListView *)arg2 willUseIconView:(SBIconView *)arg3 forDroppingIconDragItem:(UIDragItem *)arg4;

@end
