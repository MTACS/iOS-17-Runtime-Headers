
@protocol AVTAvatarPickerDelegate <NSObject>

@required

- (void)avatarPicker:(id <AVTAvatarPicker>)arg1 didSelectAvatarRecord:(id <AVTAvatarRecord>)arg2;
- (void)avatarPickerDidEndCameraSession:(id <AVTAvatarPicker>)arg1;
- (void)avatarPickerWillStartCameraSession:(id <AVTAvatarPicker>)arg1;

@optional

- (bool)avatarPicker:(id <AVTAvatarPicker>)arg1 shouldPresentMemojiEditorForAvatarRecord:(id <AVTAvatarRecord>)arg2;

@end
