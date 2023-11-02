
@protocol CNAvatarPickerServiceHostProtocol <NSObject>

@required

- (void)avatarPickerExtensionDidCancel;
- (void)avatarPickerExtensionDidCreateAvatarWithRecordData:(NSData *)arg1 identifier:(NSString *)arg2;
- (void)avatarPickerExtensionDidDeleteAvatarWithIdentifier:(NSString *)arg1;
- (void)avatarPickerExtensionDidFinishWithImageData:(NSData *)arg1 memojiMetadata:(CNMemojiMetadata *)arg2;
- (void)avatarPickerExtensionDidRequestMemojiEditorPresentationForRecordIdentifier:(NSString *)arg1;
- (void)avatarPickerExtensionDidSelectItemWithImageData:(NSData *)arg1 memojiMetadata:(CNMemojiMetadata *)arg2;

@end
