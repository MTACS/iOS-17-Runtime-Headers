
@interface GKPersonalizationViewController : UIViewController <CNPhotoPickerViewControllerDelegate, GKAvatarContainerViewDelegate, GKNicknameControllerDelegate> {
    void $__lazy_storage_$_editAvatarView;
    void $__lazy_storage_$_nicknameController;
    void $__lazy_storage_$_personalizationView;
}

- (void).cxx_destruct;
- (void)avatarView:(id)arg1 didSelectImageWithEditingEnabled:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)nicknameDidBecomeFirstResponder;
- (void)nicknameDidResignFirstResponder;
- (bool)nicknameShouldBeginEditing;
- (void)nicknameTextDidChangeWithMessage:(id)arg1;
- (void)nicknameUpdateAvatarImage:(id)arg1;
- (void)nicknameUpdateRequestCompletedWithStatus:(id)arg1 error:(id)arg2;
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;
- (void)photoPickerDidCancel:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
