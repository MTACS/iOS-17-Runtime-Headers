
@protocol RPPreviewViewControllerDelegate <NSObject>

@optional

- (void)previewController:(RPPreviewViewController *)arg1 didFinishWithActivityTypes:(NSSet *)arg2;
- (void)previewControllerDidFinish:(RPPreviewViewController *)arg1;

@end
