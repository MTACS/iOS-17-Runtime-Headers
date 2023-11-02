
@protocol DCDocumentCameraRemoteViewController

@required

- (void)didCancel;
- (void)didFailWithError:(NSError *)arg1;
- (void)didFinishWithDocumentInfoCollection:(ICDocCamDocumentInfoCollection *)arg1;
- (void)dismiss;
- (void)viewControllerWasDismissed;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x1; double x2; })arg1;

@end
