
@protocol ICRemoteDocCamViewControllerDelegate <NSObject>

@required

- (void)remoteDocumentCameraController:(ICRemoteDocCamViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)remoteDocumentCameraController:(ICRemoteDocCamViewController *)arg1 didFinishWithInfoCollection:(ICDocCamDocumentInfoCollection *)arg2;
- (void)remoteDocumentCameraControllerDidCancel:(ICRemoteDocCamViewController *)arg1;

@end
