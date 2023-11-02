
@protocol CFXPreviewViewControllerDelegate <NSObject>

@required

- (NSData *)animojiMetadata;
- (long long)calculateMediaInterfaceOrientationForDisplay;
- (long long)cameraModeUsedForCapture;
- (bool)mediaCapturedInFunCam;
- (void)previewViewController:(CFXPreviewViewController *)arg1 didFinishExportingMediaItem:(CFXMediaItem *)arg2 withError:(NSError *)arg3;
- (void)previewViewController:(CFXPreviewViewController *)arg1 didProgress:(double)arg2 exportingMediaItem:(CFXMediaItem *)arg3;
- (void)previewViewController:(CFXPreviewViewController *)arg1 didStartExportingMediaItem:(CFXMediaItem *)arg2;
- (void)previewViewControllerDidHideUserInterface:(CFXPreviewViewController *)arg1;
- (void)previewViewControllerDidShowUserInterface:(CFXPreviewViewController *)arg1;
- (void)previewViewControllerDidStartEditingText:(CFXPreviewViewController *)arg1;
- (void)previewViewControllerDidStopEditingText:(CFXPreviewViewController *)arg1;
- (NSString *)selectedAppIdentifierForPreviewViewController:(CFXPreviewViewController *)arg1;

@end
