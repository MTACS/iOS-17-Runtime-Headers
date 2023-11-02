
@interface NTKGreenfieldCompanionShareController : NSObject <NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate> {
    NTKGreenfieldCompanionActivityViewController * _activityViewController;
    NTKFace * _face;
    UIViewController * _originatedViewController;
    NTKFace * _updatedFace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_handleError:(id)arg1;
- (void)_prepareForShareSheet;
- (void)_presentInternalWarningIfNeededWithContinueBlock:(id /* block */)arg1;
- (void)_presentShareSheetWithDraftRecipe:(id)arg1 previewImage:(id)arg2;
- (void)_showPhotosPickerView;
- (void)_startFaceSharing;
- (void)companionSharePhotosPickerViewController:(id)arg1 didFinishWithFace:(id)arg2;
- (void)shareWatchFace:(id)arg1 fromViewController:(id)arg2;

@end
