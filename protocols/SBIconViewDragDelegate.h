
@protocol SBIconViewDragDelegate <NSObject>

@optional

- (double)additionalDragLiftScaleForIconView:(SBIconView *)arg1;
- (NSArray *)dragItemsForIconView:(SBIconView *)arg1;
- (bool)dragsSupportSystemDragsForIconView:(SBIconView *)arg1;
- (bool)iconView:(SBIconView *)arg1 canAddDragItemsToSession:(id <UIDragSession>)arg2;
- (void)iconView:(SBIconView *)arg1 didEndDragSession:(id <UIDragSession>)arg2 withOperation:(unsigned long long)arg3;
- (void)iconView:(SBIconView *)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2;
- (UITargetedDragPreview *)iconView:(SBIconView *)arg1 dragPreviewForItem:(UIDragItem *)arg2 session:(id <UIDragSession>)arg3 previewParameters:(UIDragPreviewParameters *)arg4;
- (long long)iconView:(SBIconView *)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2;
- (void)iconView:(SBIconView *)arg1 item:(UIDragItem *)arg2 willAnimateDragCancelWithAnimator:(id <UIDragAnimating>)arg3;
- (void)iconView:(SBIconView *)arg1 session:(id <UIDragSession>)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)iconView:(SBIconView *)arg1 willAddDragItems:(NSArray *)arg2 toSession:(id <UIDragSession>)arg3;
- (void)iconView:(SBIconView *)arg1 willAnimateDragLiftWithAnimator:(id <UIDragAnimating>)arg2 session:(id <UIDragSession>)arg3;
- (void)iconView:(SBIconView *)arg1 willUsePreviewForCancelling:(UITargetedDragPreview *)arg2 targetIconView:(SBIconView *)arg3;
- (bool)iconViewCanBeginDrags:(SBIconView *)arg1;
- (void)iconViewWillBeginDrag:(SBIconView *)arg1 session:(id <UIDragSession>)arg2;
- (SBIconView *)iconViewWillCancelDrag:(SBIconView *)arg1;
- (NSSet *)launchActionsForIconView:(SBIconView *)arg1;
- (NSURL *)launchURLForIconView:(SBIconView *)arg1;

@end
