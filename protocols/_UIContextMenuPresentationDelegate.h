
@protocol _UIContextMenuPresentationDelegate <NSObject>

@required

- (void)contextMenuPresentation:(_UIContextMenuPresentation *)arg1 didBeginDragWithTouch:(UITouch *)arg2;
- (void)contextMenuPresentation:(void *)arg1 didRequestDismissalWithReason:(void *)arg2 alongsideActions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 12: _UIContextMenuPresentation *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)contextMenuPresentation:(_UIContextMenuPresentation *)arg1 didSelectMenuLeaf:(id <UIMenuLeaf>)arg2;
- (UITargetedPreview *)contextMenuPresentation:(_UIContextMenuPresentation *)arg1 dismissalPreviewForItem:(id)arg2 clientReturnedPreview:(bool*)arg3;
- (UIMenu *)contextMenuPresentation:(_UIContextMenuPresentation *)arg1 willDisplayMenu:(UIMenu *)arg2;
- (void)contextMenuPresentationDidEndPanInteraction:(_UIContextMenuPresentation *)arg1;
- (bool)contextMenuPresentationShouldAllowSwipeToDismissForBeginningPanInteraction:(_UIContextMenuPresentation *)arg1;

@end
