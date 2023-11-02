
@interface VNDocumentCameraViewController_InProcess : VNDocumentCameraViewController <ICDocCamViewControllerDelegate, ICRemoteDocCamViewControllerDelegate> {
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_autoDismiss;
- (long long)_preferredModalPresentationStyle;
- (void)didReceiveMemoryWarning;
- (bool)documentCameraController:(id)arg1 canAddImages:(unsigned long long)arg2;
- (void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(bool)arg4;
- (void)documentCameraController:(id)arg1 didFinishWithImage:(id)arg2;
- (id)documentCameraControllerCreateDataCryptorIfNecessary;
- (void)documentCameraControllerDidCancel:(id)arg1;
- (id)init;
- (void)remoteDocumentCameraController:(id)arg1 didFailWithError:(id)arg2;
- (void)remoteDocumentCameraController:(id)arg1 didFinishWithInfoCollection:(id)arg2;
- (void)remoteDocumentCameraControllerDidCancel:(id)arg1;
- (void)removeSaveActionBlockerForFiles;
- (id)scanDataDelegateWithIdentifier:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
