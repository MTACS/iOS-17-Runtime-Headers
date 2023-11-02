
@protocol _UIContextMenuInteractionDelegateInternal <UIContextMenuInteractionDelegate>

@optional

- (<_UIClickHighlightEffect> *)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 configuration:(UIContextMenuConfiguration *)arg2 interactionEffectForTargetedPreview:(UITargetedPreview *)arg3;
- (void)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 didPerformMenuLeaf:(id <UIMenuLeaf>)arg2 target:(id)arg3;
- (bool)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 shouldAttemptToPresentConfiguration:(UIContextMenuConfiguration *)arg2;

@end
