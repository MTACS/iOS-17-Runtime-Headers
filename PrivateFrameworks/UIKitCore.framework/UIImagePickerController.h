
@interface UIImagePickerController : UINavigationController <NSCoding, _UIRemoteViewControllerContaining> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    id  _image;
    struct { 
        unsigned int visible : 1; 
        unsigned int isCleaningUp : 1; 
        unsigned int didRevertStatusBar : 1; 
    }  _imagePickerFlags;
    NSArray * _mediaTypes;
    bool  _photoPickerDidEndDelayingPresentation;
    bool  _photoPickerDidStartDelayingPresentation;
    id /* block */  _photoPickerDisplayCompletion;
    bool  _photoPickerIsPreheating;
    UIViewController * _photoPickerPreheatedViewController;
    id /* block */  _photoPickerPreviewDisplayCompletion;
    Class  _photoPickerRequestOptionsClass;
    NSExtension * _photosExtension;
    bool  _previousStatusBarHidden;
    int  _previousStatusBarStyle;
    NSMutableDictionary * _properties;
    unsigned long long  _savingOptions;
    long long  _sourceType;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool allowsImageEditing;
@property (nonatomic) long long cameraCaptureMode;
@property (nonatomic) long long cameraDevice;
@property (nonatomic) long long cameraFlashMode;
@property (nonatomic, retain) UIView *cameraOverlayView;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } cameraViewTransform;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UINavigationControllerDelegate><UIImagePickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long imageExportPreset;
@property (nonatomic, copy) NSArray *mediaTypes;
@property (nonatomic, readonly) Class photoPickerRequestOptionsClass;
@property (nonatomic, retain) NSExtension *photosExtension;
@property (nonatomic) bool showsCameraControls;
@property (nonatomic) long long sourceType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *videoExportPreset;
@property (nonatomic) double videoMaximumDuration;
@property (nonatomic) long long videoQuality;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_isMediaTypeAvailable:(id)arg1 forSource:(long long)arg2;
+ (bool)_reviewCapturedItems;
+ (id)availableCaptureModesForCameraDevice:(long long)arg1;
+ (id)availableMediaTypesForSourceType:(long long)arg1;
+ (bool)isCameraDeviceAvailable:(long long)arg1;
+ (bool)isFlashAvailableForCameraDevice:(long long)arg1;
+ (bool)isSourceTypeAvailable:(long long)arg1;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_adjustedContentSizeForPopover:(struct CGSize { double x1; double x2; })arg1;
- (bool)_allowsImageEditing;
- (bool)_allowsIris;
- (bool)_allowsMultipleSelection;
- (void)_autoDismiss;
- (id)_cameraViewController;
- (id)_containedRemoteViewController;
- (bool)_convertAutoloopsToGIF;
- (void)_createInitialControllerWithCompletion:(id /* block */)arg1;
- (bool)_didRevertStatusBar;
- (void)_handleEndingPhotoPickerPresentationDelay;
- (void)_handleInstantiatedRemoteViewController:(id)arg1 request:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleMatchingExtension:(id)arg1 viewControllerClassName:(id)arg2 completion:(id /* block */)arg3;
- (void)_handlePushViewController:(id)arg1;
- (void)_handleTopViewControllerReadyForDisplay:(id)arg1;
- (void)_imagePickerDidCancel;
- (void)_imagePickerDidCompleteWithInfo:(id)arg1;
- (void)_imagePickerDidCompleteWithInfoArray:(id)arg1;
- (unsigned long long)_imagePickerSavingOptions;
- (id)_initWithSourceImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_initializeProperties;
- (void)_invalidatePhotoPickerServices;
- (bool)_isCameraCaptureModeValid:(long long)arg1;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (unsigned long long)_multipleSelectionLimit;
- (bool)_onlyShowAutoloops;
- (id /* block */)_photoPickerDisplayCompletion;
- (id /* block */)_photoPickerPreviewDisplayCompletion;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (long long)_preferredModalPresentationStyle;
- (id)_properties;
- (id)_propertiesForPhotoPickerExtension;
- (void)_removeAllChildren;
- (bool)_requiresPickingConfirmation;
- (void)_setAllowsImageEditing:(bool)arg1;
- (void)_setAllowsIris:(bool)arg1;
- (void)_setAllowsMultipleSelection:(bool)arg1;
- (void)_setConvertAutoloopsToGIF:(bool)arg1;
- (void)_setImagePickerSavingOptions:(unsigned long long)arg1;
- (void)_setMultipleSelectionLimit:(unsigned long long)arg1;
- (void)_setOnlyShowAutoloops:(bool)arg1;
- (void)_setPhotoPickerDisplayCompletion:(id /* block */)arg1;
- (void)_setPhotoPickerPreviewDisplayCompletion:(id /* block */)arg1;
- (void)_setProperties:(id)arg1;
- (void)_setRequiresPickingConfirmation:(bool)arg1;
- (void)_setShowsFileSizePicker:(bool)arg1;
- (void)_setShowsPrompt:(bool)arg1;
- (void)_setStaticPrompt:(id)arg1;
- (void)_setTargetForPrompt:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)_setupControllersForCurrentMediaTypes;
- (void)_setupControllersForCurrentSourceTypeWithCompletion:(id /* block */)arg1;
- (bool)_shouldDelayPresentation;
- (bool)_showsFileSizePicker;
- (bool)_showsPrompt;
- (bool)_sourceTypeIsCamera;
- (id)_staticPrompt;
- (id)_targetForPrompt;
- (void)_testPerformPreviewOfFirstPhoto;
- (void)_updateCameraCaptureMode;
- (id)_valueForProperty:(id)arg1;
- (void)_viewControllerPresentationDidInitiate;
- (bool)allowsEditing;
- (bool)allowsImageEditing;
- (long long)cameraCaptureMode;
- (long long)cameraDevice;
- (long long)cameraFlashMode;
- (id)cameraOverlayView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })cameraViewTransform;
- (void)cancelPhotoPicker;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(id)arg1;
- (void)didSelectMediaWithInfoDictionary:(id)arg1;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)imageExportPreset;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mediaTypes;
- (Class)photoPickerRequestOptionsClass;
- (id)photosExtension;
- (void)requestViewControllerFromPhotoPickerWithRequestIdentifier:(id)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsImageEditing:(bool)arg1;
- (void)setCameraCaptureMode:(long long)arg1;
- (void)setCameraDevice:(long long)arg1;
- (void)setCameraFlashMode:(long long)arg1;
- (void)setCameraOverlayView:(id)arg1;
- (void)setCameraViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setImageExportPreset:(long long)arg1;
- (void)setMediaTypes:(id)arg1;
- (void)setPhotoPickerViewControllerTitle:(id)arg1;
- (void)setPhotosExtension:(id)arg1;
- (void)setShowsCameraControls:(bool)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setVideoExportPreset:(id)arg1;
- (void)setVideoMaximumDuration:(double)arg1;
- (void)setVideoQuality:(long long)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)showsCameraControls;
- (long long)sourceType;
- (bool)startVideoCapture;
- (void)stopVideoCapture;
- (unsigned long long)supportedInterfaceOrientations;
- (void)takePicture;
- (id)videoExportPreset;
- (double)videoMaximumDuration;
- (long long)videoQuality;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillUnload;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_systemImagePickerWithSourceType:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

+ (id)aaui_fixedCropRect:(id)arg1 forOriginalImage:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

+ (id)ic_originalImageDataFromInfo:(id)arg1;

- (void)ic_setSavingOptionsCreateOriginalImageData;
- (void)ic_writeImageDataToSavedPhotosAlbum:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (void)ttr_setImagePickerSavingOptions:(unsigned long long)arg1;

@end
