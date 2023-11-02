
@protocol UIDropInteractionDelegate_Private <UIDropInteractionDelegate>

@optional

- (<UIViewSpringAnimationBehaviorDescribing> *)_dropInteraction:(UIDropInteraction *)arg1 customSpringAnimationBehaviorForDroppingItem:(UIDragItem *)arg2;
- (long long)_dropInteraction:(UIDropInteraction *)arg1 dataOwnerForSession:(id <UIDropSession>)arg2;
- (void)_dropInteraction:(void *)arg1 delayedPreviewProviderForDroppingItem:(void *)arg2 previewProvider:(void *)arg3; // needs 3 arg types, found 8: UIDropInteraction *, UIDragItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UITargetedDragPreview *, void*

@end
