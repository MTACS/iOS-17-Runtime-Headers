
@protocol _UIContextMenuUIControllerDelegate <NSObject>

@required

- (void)contextMenuUIController:(_UIContextMenuUIController *)arg1 didBeginDragWithTouch:(UITouch *)arg2;
- (void)contextMenuUIController:(void *)arg1 didRequestDismissalWithReason:(void *)arg2 alongsideActions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 12: _UIContextMenuUIController *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)contextMenuUIController:(_UIContextMenuUIController *)arg1 didSelectMenuLeaf:(id <UIMenuLeaf>)arg2;
- (UITargetedPreview *)contextMenuUIController:(_UIContextMenuUIController *)arg1 dismissalPreviewForItem:(id)arg2 clientReturnedPreview:(bool*)arg3;
- (UIMenu *)contextMenuUIController:(_UIContextMenuUIController *)arg1 willDisplayMenu:(UIMenu *)arg2;
- (void)contextMenuUIControllerDidEndPanInteraction:(_UIContextMenuUIController *)arg1;
- (bool)contextMenuUIControllerShouldAllowSwipeToDismissForBeginningPanInteraction:(_UIContextMenuUIController *)arg1;
- (void)contextMenuUIControllerWillPerformLayout:(_UIContextMenuUIController *)arg1 withPreviewSize:(struct CGSize { double x1; double x2; })arg2;

@end
