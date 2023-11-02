
@interface IMEditedTextMessagePartHistoricalContentChatItem : IMTextMessagePartChatItem {
    IMMessagePartHistoricalContent * _historicalContent;
}

@property (nonatomic, readonly) IMMessagePartHistoricalContent *historicalContent;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithMessageItem:(id)arg1 messagePartIndex:(long long)arg2 historicalContent:(id)arg3 editIndex:(long long)arg4 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 subject:(id)arg6;
- (bool)canDelete;
- (bool)canEditMessageText;
- (bool)canReply;
- (bool)canRetract;
- (id)historicalContent;
- (bool)isEditedMessageHistory;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
