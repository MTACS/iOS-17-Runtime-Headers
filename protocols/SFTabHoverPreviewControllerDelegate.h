
@protocol SFTabHoverPreviewControllerDelegate <NSObject>

@required

- (void)tabHoverPreviewController:(SFTabHoverPreviewController *)arg1 showPreviewForItem:(id <SFTabHoverPreviewItem>)arg2;
- (void)tabHoverPreviewControllerDismissPreview:(SFTabHoverPreviewController *)arg1;
- (void)tabHoverPreviewControllerNeedsSnapshotUpdate:(SFTabHoverPreviewController *)arg1;

@end
