
@interface IMEmojiStickerChatItem : IMAssociatedStickerChatItem

@property (nonatomic, readonly) NSString *emojiString;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)_initWithItem:(id)arg1 sender:(id)arg2 transferGUID:(id)arg3 emojiSticker:(id)arg4;
- (id)emojiString;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
