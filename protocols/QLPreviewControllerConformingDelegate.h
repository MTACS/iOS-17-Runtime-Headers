
@protocol QLPreviewControllerConformingDelegate <NSObject>

@optional

- (bool)previewController:(id <QLPreviewControllerConforming>)arg1 canShareItem:(id <QLPreviewItem>)arg2;
- (void)previewController:(id <QLPreviewControllerConforming>)arg1 didSaveEditedCopyOfPreviewItem:(id <QLPreviewItem>)arg2 atURL:(NSURL *)arg3;
- (void)previewController:(id <QLPreviewControllerConforming>)arg1 didUpdateContentsOfPreviewItem:(id <QLPreviewItem>)arg2;
- (long long)previewController:(id <QLPreviewControllerConforming>)arg1 editingModeForPreviewItem:(id <QLPreviewItem>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewController:(id <QLPreviewControllerConforming>)arg1 frameForPreviewItem:(id <QLPreviewItem>)arg2 inSourceView:(id*)arg3;
- (bool)previewController:(id <QLPreviewControllerConforming>)arg1 shouldOpenURL:(NSURL *)arg2 forPreviewItem:(id <QLPreviewItem>)arg3;
- (UIImage *)previewController:(id <QLPreviewControllerConforming>)arg1 transitionImageForPreviewItem:(id <QLPreviewItem>)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (UIView *)previewController:(id <QLPreviewControllerConforming>)arg1 transitionViewForPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewControllerDidDismiss:(id <QLPreviewControllerConforming>)arg1;
- (void)previewControllerWillDismiss:(id <QLPreviewControllerConforming>)arg1;

@end
