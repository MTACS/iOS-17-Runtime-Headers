
@interface CNVisualIdentityImagePickerController : NSObject <PHPickerViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    CNContactStyle * _contactStyle;
    <CNVisualIdentityImagePickerControllerDelegate> * _delegate;
    bool  _isMeContact;
    NSString * _photoLibraryAssetID;
    <CNVisualIdentityPickerPresenterDelegate> * _presenterDelegate;
}

@property (nonatomic, retain) CNContactStyle *contactStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNVisualIdentityImagePickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isMeContact;
@property (nonatomic, retain) NSString *photoLibraryAssetID;
@property (nonatomic) <CNVisualIdentityPickerPresenterDelegate> *presenterDelegate;
@property (readonly) Class superclass;

+ (id)cameraImagePicker;
+ (id)imagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)imagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 backgroundColor:(id)arg3;
+ (id)log;
+ (id)photoLibraryImagePickerWithIsMeContact:(bool)arg1;
+ (id)photoPickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 backgroundColor:(id)arg3 isMeContact:(bool)arg4;
+ (id)photoPickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isMeContact:(bool)arg3;

- (void).cxx_destruct;
- (id)contactStyle;
- (id)delegate;
- (void)imageDataFromPickerResult:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithContactStyle:(id)arg1;
- (bool)isMeContact;
- (id)photoLibraryAssetID;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (void)presentCameraImagePickerFromViewController:(id)arg1;
- (void)presentImagePicker:(id)arg1 withStyle:(long long)arg2 fromViewController:(id)arg3;
- (void)presentImagePicker:(id)arg1 withStyle:(long long)arg2 fromViewController:(id)arg3 forVisualIdentityPicker:(id)arg4;
- (void)presentMoveAndScaleForImageData:(id)arg1 withCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromViewController:(id)arg3;
- (void)presentMoveAndScaleForImageData:(id)arg1 withCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromViewController:(id)arg3 backgroundColor:(id)arg4;
- (void)presentPhotoLibraryPickerFromViewController:(id)arg1 sourceView:(id)arg2;
- (id)presenterDelegate;
- (id)providerItemFromImagePickerInfo:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsMeContact:(bool)arg1;
- (void)setPhotoLibraryAssetID:(id)arg1;
- (void)setPresenterDelegate:(id)arg1;

@end
