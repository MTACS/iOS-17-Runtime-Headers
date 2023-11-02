
@protocol UIContextMenuInteractionDelegate <NSObject>

@required

- (UIContextMenuConfiguration *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;

@optional

- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 configuration:(UIContextMenuConfiguration *)arg2 dismissalPreviewForItemWithIdentifier:(id <NSCopying>)arg3;
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 configuration:(UIContextMenuConfiguration *)arg2 highlightPreviewForItemWithIdentifier:(id <NSCopying>)arg3;
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 previewForDismissingMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 previewForHighlightingMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willDisplayMenuForConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willEndForConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willPerformPreviewActionForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionCommitAnimating>)arg3;

@end
