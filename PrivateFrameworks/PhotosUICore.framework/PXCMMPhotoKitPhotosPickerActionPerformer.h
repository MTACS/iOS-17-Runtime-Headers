
@interface PXCMMPhotoKitPhotosPickerActionPerformer : PXCMMShowPhotosPickerActionPerformer <PHPickerViewControllerDelegate, PXCMMPhotoKitActionPerformer, UIAdaptivePresentationControllerDelegate> {
    NSArray * _currentAssetIdentifiers;
    UIViewController * _photosPickerViewController;
}

@property (nonatomic, readonly) NSArray *currentAssetIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXCMMPhotoKitSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_pickerDidCompleteWithPickedAssets:(id)arg1;
- (id)currentAssetIdentifiers;
- (void)performUserInteractionTask;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;

@end
