
@interface IMReplyContextDeletedMessageChatItem : IMReplyContextTextMessagePartChatItem <IMReplyContext> {
    bool  _deletedMessageIsFromMe;
}

@property (nonatomic) bool deletedMessageIsFromMe;
@property (nonatomic, readonly) bool replyIsFromMe;
@property (nonatomic, readonly, copy) NSString *replyMessageGUID;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)_initWithReplyItem:(id)arg1 threadIdentifier:(id)arg2 replyMessageGUID:(id)arg3 replyIsFromMe:(bool)arg4 deletedMessageIsFromMe:(bool)arg5;
- (bool)deletedMessageIsFromMe;
- (bool)isFromMe;
- (void)setDeletedMessageIsFromMe:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
