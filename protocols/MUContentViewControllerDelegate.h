
@protocol MUContentViewControllerDelegate <NSObject>

@required

- (NSArray *)annotationControllerOfContentViewController:(MUContentViewController *)arg1 willSetToolbarItems:(NSArray *)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forContentViewController:(MUContentViewController *)arg2;
- (void)positionSketchOverlay:(UIView *)arg1 forContentViewController:(MUContentViewController *)arg2;
- (NSUndoManager *)undoManagerForContentViewController:(MUContentViewController *)arg1;

@optional

- (struct CGSize { double x1; double x2; })adjustedSourceImageSize;
- (bool)allowsEditing;
- (void)annotationController:(AKController *)arg1 detectedEditOfType:(unsigned long long)arg2;
- (bool)canShowPageViewLabel;
- (void)contentControllerDidUnlockDocument:(MUPDFContentViewController *)arg1;
- (bool)contentViewController:(MUPDFContentViewController *)arg1 shouldHandleURL:(NSURL *)arg2;
- (void)controllerWillDismissSignatureCaptureView:(AKController *)arg1;
- (void)controllerWillDismissSignatureManagerView:(AKController *)arg1;
- (void)controllerWillShowSignatureCaptureView:(AKController *)arg1;
- (void)controllerWillShowSignatureManagerView:(AKController *)arg1;
- (void)editCheckpointReachedForAnnotationController:(AKController *)arg1;
- (void)editDetectedForAnnotationController:(AKController *)arg1;
- (NSArray *)getMenuElementsForPage:(PDFPage *)arg1;
- (NSString *)originalImageDescription;
- (void)penStrokeCompletedForAnnotationController:(AKController *)arg1;
- (UIViewController *)popoverPresentingViewControllerForAnnotationController:(AKController *)arg1;
- (void)updateThumbnailView;

@end
