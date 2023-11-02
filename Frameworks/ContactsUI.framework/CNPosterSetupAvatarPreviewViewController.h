
@interface CNPosterSetupAvatarPreviewViewController : UIViewController <CNAvatarEditingManagerDelegate, CNVisualIdentityImagePickerControllerDelegate, CNVisualIdentityItemEditorViewControllerDelegate, ContactsUI.CNPosterSetupAvatarPreviewViewDelegate> {
    _TtC10ContactsUI37CNPosterSetupAvatarPreviewViewWrapper * _avatarPreviewView;
    CNContactImage * _contactImage;
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
    <CNPosterSetupAvatarPreviewViewControllerDelegate> * _delegate;
    CNContact * _editingContact;
    bool  _hideSkipOption;
    NSData * _imageData;
    CNVisualIdentityImagePickerController * _imagePicker;
    UIColor * _imagePickerCustomBackgroundColor;
    unsigned long long  _imageType;
    CNAvatarEditingManager * _memojiEditingManager;
    UIImagePickerController * _memojiImagePickerController;
    bool  _shouldShowCancelButton;
    CNPhotoPickerVariantsManager * _variantsManager;
    NSString * _wallpaperType;
}

@property (nonatomic, retain) _TtC10ContactsUI37CNPosterSetupAvatarPreviewViewWrapper *avatarPreviewView;
@property (nonatomic, retain) CNContactImage *contactImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNPosterSetupAvatarPreviewViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNContact *editingContact;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideSkipOption;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, retain) CNVisualIdentityImagePickerController *imagePicker;
@property (nonatomic, retain) UIColor *imagePickerCustomBackgroundColor;
@property (nonatomic) unsigned long long imageType;
@property (nonatomic, retain) CNAvatarEditingManager *memojiEditingManager;
@property (nonatomic, retain) UIImagePickerController *memojiImagePickerController;
@property (nonatomic) bool shouldShowCancelButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNPhotoPickerVariantsManager *variantsManager;
@property (nonatomic, readonly) NSString *wallpaperType;

+ (unsigned long long)defaultImageTypeForWallpaperType:(id)arg1;
+ (struct CGSize { double x1; double x2; })defaultItemSize;
+ (double)twentyFourPointFivePercentOfHeight:(double)arg1;

- (void).cxx_destruct;
- (void)avatarEditingManager:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (id)avatarPreviewView;
- (void)avatarPreviewViewDidFinishWithImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)avatarPreviewViewDidSelectChangeScale;
- (void)avatarPreviewViewDidSelectCustomizePhoto;
- (id)closestColor:(id)arg1 inColors:(id)arg2;
- (id)contactImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)delegate;
- (void)didTapCancel;
- (id)editingContact;
- (id)editorViewControllerForProviderItem:(id)arg1;
- (bool)hideSkipOption;
- (id)imageData;
- (id)imagePicker;
- (void)imagePickerController:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)imagePickerCustomBackgroundColor;
- (unsigned long long)imageType;
- (id)initWithContactImage:(id)arg1 imageType:(unsigned long long)arg2 forEditingContact:(id)arg3;
- (id)initWithPosterConfiguration:(id)arg1 forEditingContact:(id)arg2;
- (id)memojiEditingManager;
- (id)memojiEditingManagerForAvatarRecord:(id)arg1;
- (id)memojiImagePickerController;
- (id)memojiProviderItemForAvatarImageData:(id)arg1 backgroundColor:(id)arg2;
- (id)monogramProviderItemForInitials:(id)arg1 backgroundColor:(id)arg2;
- (void)photoPickerProviderItemFromPosterConfiguration:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)photoProviderItemForFullImageFromPosterConfiguration:(id)arg1;
- (void)photoProviderItemForSnapshotFromPosterConfiguration:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)photoProviderItemFromPosterConfiguration:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)presentPhotoFilterEditorForProviderItem:(id)arg1;
- (id)providerItemForRandomColoredMonogram;
- (id)providerItemWithSnapshotImage:(id)arg1;
- (void)setAvatarPreviewView:(id)arg1;
- (void)setContactImage:(id)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingContact:(id)arg1;
- (void)setHideSkipOption:(bool)arg1;
- (void)setImageData:(id)arg1;
- (void)setImagePicker:(id)arg1;
- (void)setImagePickerCustomBackgroundColor:(id)arg1;
- (void)setImageType:(unsigned long long)arg1;
- (void)setMemojiEditingManager:(id)arg1;
- (void)setMemojiImagePickerController:(id)arg1;
- (void)setShouldShowCancelButton:(bool)arg1;
- (void)setVariantsManager:(id)arg1;
- (bool)shouldShowCancelButton;
- (void)skipStep;
- (void)updateMemojiEditingManagerForProviderItem:(id)arg1;
- (void)updateWithProviderItem:(id)arg1;
- (id)variantsManager;
- (void)viewDidLoad;
- (void)visualIdentityEditorController:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)visualIdentityEditorControllerDidCancel:(id)arg1;
- (id)wallpaperType;

@end
