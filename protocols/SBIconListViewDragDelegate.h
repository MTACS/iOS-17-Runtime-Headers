
@protocol SBIconListViewDragDelegate <NSObject>

@required

- (bool)iconListView:(SBIconListView *)arg1 canHandleIconDropSession:(id <UIDropSession>)arg2;
- (<UIViewSpringAnimationBehaviorDescribing> *)iconListView:(SBIconListView *)arg1 customSpringAnimationBehaviorForDroppingItem:(UIDragItem *)arg2;
- (void)iconListView:(SBIconListView *)arg1 iconDragItem:(UIDragItem *)arg2 willAnimateDropWithAnimator:(id <UIDragAnimating>)arg3;
- (void)iconListView:(SBIconListView *)arg1 iconDropSession:(id <UIDropSession>)arg2 didPauseAtLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)iconListView:(SBIconListView *)arg1 iconDropSessionDidEnter:(id <UIDropSession>)arg2;
- (void)iconListView:(SBIconListView *)arg1 iconDropSessionDidExit:(id <UIDropSession>)arg2;
- (UIDropProposal *)iconListView:(SBIconListView *)arg1 iconDropSessionDidUpdate:(id <UIDropSession>)arg2;
- (SBIconView *)iconListView:(SBIconListView *)arg1 iconViewForDroppingIconDragItem:(UIDragItem *)arg2 proposedIconView:(SBIconView *)arg3;
- (void)iconListView:(SBIconListView *)arg1 performIconDrop:(id <UIDropSession>)arg2;
- (UITargetedDragPreview *)iconListView:(SBIconListView *)arg1 previewForDroppingIconDragItem:(UIDragItem *)arg2 proposedPreview:(UITargetedDragPreview *)arg3;
- (bool)iconListView:(SBIconListView *)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id <UIDropSession>)arg2 onIconView:(SBIconView *)arg3;
- (void)iconListView:(SBIconListView *)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(SBIconView *)arg2;
- (void)iconListView:(SBIconListView *)arg1 willUseIconView:(SBIconView *)arg2 forDroppingIconDragItem:(UIDragItem *)arg3;

@end
