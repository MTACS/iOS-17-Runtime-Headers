
@interface WFTakePhotoActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFTakePhotoActionUserInterface, WFTakePhotoImmediateModeDelegate> {
    id /* block */  _completionHandler;
    long long  _device;
    unsigned long long  _duration;
    WFTakePhotoImmediateModeManager * _immediateModeManager;
    WFContentCollection * _outputCollection;
    NSMutableArray * _outputImages;
    WFImagePickerController * _pickerController;
    unsigned long long  _remainingPhotos;
    bool  _showPreview;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long device;
@property (nonatomic) unsigned long long duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFTakePhotoImmediateModeManager *immediateModeManager;
@property (nonatomic, retain) WFContentCollection *outputCollection;
@property (nonatomic, retain) NSMutableArray *outputImages;
@property (nonatomic) WFImagePickerController *pickerController;
@property (nonatomic) unsigned long long remainingPhotos;
@property (nonatomic) bool showPreview;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

+ (long long)cameraDeviceFromString:(id)arg1;

- (void).cxx_destruct;
- (void)addImageDataToOutput:(id)arg1;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (long long)device;
- (unsigned long long)duration;
- (void)finishWithError:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)immediateModeManager;
- (id)initWithUserInterfaceType:(id)arg1 attribution:(id)arg2;
- (void)manager:(id)arg1 didFinishWithPhoto:(id)arg2 error:(id)arg3;
- (void)managerDidBecomeReady:(id)arg1;
- (id)outputCollection;
- (id)outputImages;
- (id)pickerController;
- (bool)prefersModalPresentation;
- (unsigned long long)remainingPhotos;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDevice:(long long)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setImmediateModeManager:(id)arg1;
- (void)setOutputCollection:(id)arg1;
- (void)setOutputImages:(id)arg1;
- (void)setPickerController:(id)arg1;
- (void)setRemainingPhotos:(unsigned long long)arg1;
- (void)setShowPreview:(bool)arg1;
- (void)setUpImmediateInterfaceWithAttribution:(id)arg1;
- (void)setUpTapInterface;
- (id)setupControllerWithOverlay:(id)arg1;
- (bool)showPreview;
- (void)showWithCameraPreview:(bool)arg1 photoCount:(unsigned long long)arg2 device:(id)arg3 shortcutAttribution:(id)arg4 completionHandler:(id /* block */)arg5;

@end
