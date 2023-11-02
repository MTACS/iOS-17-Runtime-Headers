
@protocol AVTAvatarEditorViewControllerDelegate <NSObject>

@required

- (void)avatarEditorViewController:(AVTAvatarEditorViewController *)arg1 didFinishWithAvatarRecord:(id <AVTAvatarRecord>)arg2;
- (void)avatarEditorViewControllerDidCancel:(AVTAvatarEditorViewController *)arg1;

@end
