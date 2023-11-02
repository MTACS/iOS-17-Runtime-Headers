
@protocol ICDocCamViewControllerDelegate <NSObject>

@required

- (bool)documentCameraController:(ICDocCamViewController *)arg1 canAddImages:(unsigned long long)arg2;
- (<DCDataCryptorDelegate> *)documentCameraControllerCreateDataCryptorIfNecessary;
- (void)documentCameraControllerDidCancel:(ICDocCamViewController *)arg1;
- (<DCScanDataDelegate> *)scanDataDelegateWithIdentifier:(id)arg1;

@optional

- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithDocInfoCollection:(ICDocCamDocumentInfoCollection *)arg2 imageCache:(ICDocCamImageCache *)arg3 warnUser:(bool)arg4;
- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithDocInfoCollection:(ICDocCamDocumentInfoCollection *)arg2 imageCache:(ICDocCamImageCache *)arg3 warnUser:(bool)arg4 closeViewController:(bool)arg5;
- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithImage:(NSData *)arg2;
- (void)documentCameraControllerDidRetake:(ICDocCamViewController *)arg1 pageCount:(unsigned long long)arg2;

@end
