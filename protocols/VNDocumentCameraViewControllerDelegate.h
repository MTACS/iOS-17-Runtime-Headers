
@protocol VNDocumentCameraViewControllerDelegate <NSObject>

@optional

- (void)documentCameraViewController:(VNDocumentCameraViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)documentCameraViewController:(VNDocumentCameraViewController *)arg1 didFinishWithScan:(VNDocumentCameraScan *)arg2;
- (void)documentCameraViewControllerDidCancel:(VNDocumentCameraViewController *)arg1;

@end
