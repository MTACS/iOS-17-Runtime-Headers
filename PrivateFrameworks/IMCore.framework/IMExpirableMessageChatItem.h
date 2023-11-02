
@interface IMExpirableMessageChatItem : IMAttachmentMessagePartChatItem

@property (nonatomic, readonly) bool isPlayed;
@property (nonatomic, readonly) bool isSaved;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (bool)isPlayed;
- (bool)isSaved;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end