
@protocol _UIDragInteractionPresentationDelegate <NSObject>

@required

- (void)_dragInteractionPresentation:(UIDragInteraction *)arg1 item:(UIDragItem *)arg2 willAnimateCancelWithAnimator:(id <UIDragAnimating>)arg3;
- (UITargetedDragPreview *)_dragInteractionPresentation:(UIDragInteraction *)arg1 previewForCancellingItem:(UIDragItem *)arg2 defaultPreview:(UITargetedDragPreview *)arg3 proposedPreview:(UITargetedDragPreview *)arg4;
- (void)_dragInteractionPresentation:(UIDragInteraction *)arg1 sessionDidEnd:(id <UIDragSession>)arg2 withoutBeginning:(bool)arg3;

@end
