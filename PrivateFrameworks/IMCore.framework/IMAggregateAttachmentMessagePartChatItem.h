
@interface IMAggregateAttachmentMessagePartChatItem : IMAttachmentMessagePartChatItem {
    NSArray * _aggregateAttachmentParts;
    NSArray * _transferGUIDs;
}

@property (nonatomic, copy) NSArray *aggregateAttachmentParts;
@property (nonatomic, readonly, copy) NSArray *transferGUIDs;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 transferGUIDs:(id)arg5 chatContext:(id)arg6;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 transferGUIDs:(id)arg5 chatContext:(id)arg6 visibleAssociatedMessageChatItems:(id)arg7;
- (id)aggregateAttachmentParts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isAttachmentContiguousWithChatItem:(id)arg1;
- (id)replyContextPreviewChatItemForReply:(id)arg1 chatContext:(id)arg2;
- (void)setAggregateAttachmentParts:(id)arg1;
- (id)transferGUIDs;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
