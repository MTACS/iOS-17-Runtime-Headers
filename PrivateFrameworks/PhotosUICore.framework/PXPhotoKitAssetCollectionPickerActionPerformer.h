
@interface PXPhotoKitAssetCollectionPickerActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate> {
    UIViewController * _pickerController;
    bool  _pickerDidFinishPicking;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;

- (void).cxx_destruct;
- (void)_dismissPickerControllerAndCompleteTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_handleAddAssets:(id)arg1 toRegularAlbum:(id)arg2;
- (void)_handlePickedAssets:(id)arg1;
- (void)performUserInteractionTask;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;

@end
