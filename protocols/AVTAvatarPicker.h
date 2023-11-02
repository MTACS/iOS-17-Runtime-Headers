
@protocol AVTAvatarPicker <NSObject>

@required

- (<AVTAvatarPickerDelegate> *)avatarPickerDelegate;
- (void)selectAvatarRecordWithIdentifier:(NSString *)arg1 animated:(bool)arg2;
- (void)setAvatarPickerDelegate:(id <AVTAvatarPickerDelegate>)arg1;

@end
