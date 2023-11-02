
@protocol SBFolderViewDragDelegate <NSObject>

@optional

- (bool)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 canHandleIconDropSession:(id <UIDropSession>)arg3;
- (<UIViewSpringAnimationBehaviorDescribing> *)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 customSpringAnimationBehaviorForDroppingItem:(UIDragItem *)arg3;
- (void)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 iconDragItem:(UIDragItem *)arg3 willAnimateDropWithAnimator:(id <UIDragAnimating>)arg4;
- (void)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 iconDropSession:(id <UIDropSession>)arg3 didPauseAtLocation:(struct CGPoint { double x1; double x2; })arg4;
- (void)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 iconDropSessionDidEnter:(id <UIDropSession>)arg3;
- (void)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 iconDropSessionDidExit:(id <UIDropSession>)arg3;
- (UIDropProposal *)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 iconDropSessionDidUpdate:(id <UIDropSession>)arg3;
- (SBIconView *)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 iconViewForDroppingIconDragItem:(UIDragItem *)arg3 proposedIconView:(SBIconView *)arg4;
- (void)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 performIconDrop:(id <UIDropSession>)arg3;
- (UITargetedDragPreview *)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 previewForDroppingIconDragItem:(UIDragItem *)arg3 proposedPreview:(UITargetedDragPreview *)arg4;
- (bool)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id <UIDropSession>)arg3 onIconView:(SBIconView *)arg4;
- (void)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(SBIconView *)arg3;
- (void)folderView:(SBFolderView *)arg1 iconListView:(SBIconListView *)arg2 willUseIconView:(SBIconView *)arg3 forDroppingIconDragItem:(UIDragItem *)arg4;

@end
