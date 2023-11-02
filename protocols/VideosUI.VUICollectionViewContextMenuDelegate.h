
@protocol VideosUI.VUICollectionViewContextMenuDelegate

@required

- (UIContextMenuConfiguration *)vuiCollectionView:(UICollectionView *)arg1 contextMenuConfigurationForItemAt:(NSIndexPath *)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (UITargetedPreview *)vuiCollectionView:(UICollectionView *)arg1 previewForDismissingContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UITargetedPreview *)vuiCollectionView:(UICollectionView *)arg1 previewForHighlightingContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (void)vuiCollectionView:(UICollectionView *)arg1 willEndContextMenuInteraction:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)vuiCollectionView:(UICollectionView *)arg1 willPerformPreviewActionForMenuWith:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionCommitAnimating>)arg3;

@end
