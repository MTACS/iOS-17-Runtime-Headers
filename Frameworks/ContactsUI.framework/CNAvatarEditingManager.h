
@interface CNAvatarEditingManager : NSObject <AVTPoseSelectionViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    <AVTAvatarRecord> * _avatarRecord;
    <CNAvatarEditingManagerDelegate> * _delegate;
    UIImage * _imageWithAlpha;
    CNPhotoPickerAnimojiProviderItem * _originalItem;
    AVTStickerConfiguration * _poseConfiguration;
    CNPhotoPickerVariantsManager * _variantsManager;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) <AVTAvatarRecord> *avatarRecord;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNAvatarEditingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *imageWithAlpha;
@property (nonatomic, retain) CNPhotoPickerAnimojiProviderItem *originalItem;
@property (nonatomic, retain) AVTStickerConfiguration *poseConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CNPhotoPickerVariantsManager *variantsManager;
@property (nonatomic, retain) UIViewController *viewController;

+ (id)log;

- (void).cxx_destruct;
- (id)avatarRecord;
- (id)captureFlashViewWithSize:(struct CGSize { double x1; double x2; })arg1 alpha:(double)arg2;
- (id)compositeImageDataForImage:(id)arg1 backgroundColor:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeFullscreenImageRectForScreenWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 customBackgroundColor:(id)arg3;
- (id)croppedAndCenteredImageForGeneratedImage:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
- (id)delegate;
- (id)fullScreenImageFromImage:(id)arg1 inSize:(struct CGSize { double x1; double x2; })arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)imagePickerForItem:(id)arg1;
- (id)imageWithAlpha;
- (id)initForEditingWithAvatarRecord:(id)arg1 variantsManager:(id)arg2 fromViewController:(id)arg3;
- (id)initWithAvatarRecord:(id)arg1 variantsManager:(id)arg2;
- (id)originalItem;
- (id)poseConfiguration;
- (void)poseSelectionController:(id)arg1 didSelectPoseWithConfiguration:(id)arg2;
- (void)poseSelectionControllerDidCancel:(id)arg1;
- (void)prepareAvatarImageForPicker:(id)arg1 synchronousCompletion:(id /* block */)arg2;
- (void)presentImagePickerForImage:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fadeIn:(bool)arg3 completion:(id /* block */)arg4;
- (id)renderImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setDelegate:(id)arg1;
- (void)setImageWithAlpha:(id)arg1;
- (void)setOriginalItem:(id)arg1;
- (void)setPoseConfiguration:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)variantsManager;
- (id)viewController;

@end
