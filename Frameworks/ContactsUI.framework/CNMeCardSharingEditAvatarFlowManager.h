
@interface CNMeCardSharingEditAvatarFlowManager : NSObject <AVTAvatarEditorViewControllerDelegate, AVTAvatarPickerDelegate, CNAvatarEditingManagerDelegate, CNVisualIdentityImagePickerControllerDelegate, CNVisualIdentityItemEditorViewControllerDelegate> {
    CNAvatarEditingManager * _avatarEditingManager;
    UINavigationController * _baseNavigationController;
    <CNMeCardSharingEditAvatarFlowManagerDelegate> * _delegate;
    CNVisualIdentityImagePickerController * _imagePickerController;
    CNPhotoPickerVariantsManager * _variantsManager;
}

@property (nonatomic, retain) CNAvatarEditingManager *avatarEditingManager;
@property (nonatomic, retain) UINavigationController *baseNavigationController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNMeCardSharingEditAvatarFlowManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNVisualIdentityImagePickerController *imagePickerController;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNPhotoPickerVariantsManager *variantsManager;

- (void).cxx_destruct;
- (id)avatarEditingManager;
- (void)avatarEditingManager:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (void)avatarPicker:(id)arg1 didSelectAvatarRecord:(id)arg2;
- (void)avatarPickerDidEndCameraSession:(id)arg1;
- (void)avatarPickerWillStartCameraSession:(id)arg1;
- (id)baseNavigationController;
- (long long)defaultModalPresentationStyle;
- (id)delegate;
- (void)dismissMemojiPicker:(id)arg1;
- (id)editorViewControllerForProviderItem:(id)arg1;
- (id)imagePickerController;
- (void)imagePickerController:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)init;
- (void)presentAvatarEditorViewControllerForProviderItem:(id)arg1;
- (void)presentEditorForAvatarSourceType:(long long)arg1 visualIdentity:(id)arg2 fromGalleryViewController:(id)arg3;
- (void)presentMemojiEditorForCreationFromViewController:(id)arg1;
- (void)presentMemojiPicker;
- (void)pushAvatarEditorViewControllerForProviderItem:(id)arg1 fromViewController:(id)arg2;
- (void)pushMemojiPosePickerForItem:(id)arg1 fromViewController:(id)arg2;
- (void)setAvatarEditingManager:(id)arg1;
- (void)setBaseNavigationController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImagePickerController:(id)arg1;
- (void)setVariantsManager:(id)arg1;
- (id)variantsManager;
- (void)visualIdentityEditorController:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)visualIdentityEditorControllerDidCancel:(id)arg1;

@end
