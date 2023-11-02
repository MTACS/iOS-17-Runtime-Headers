
@interface IMTextMessagePartChatItem : IMMessagePartChatItem {
    bool  _isShowingEditHistory;
    NSAttributedString * _subject;
}

@property (nonatomic, readonly) bool isShowingEditHistory;
@property (nonatomic, readonly) NSDate *lastEditDateForMessagePart;
@property (nonatomic, readonly, copy) NSAttributedString *subject;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 subject:(id)arg5 isShowingEditHistory:(bool)arg6;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 subject:(id)arg5 shouldDisplayLink:(bool)arg6 isShowingEditHistory:(bool)arg7;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 subject:(id)arg5 visibleAssociatedMessageChatItems:(id)arg6 isShowingEditHistory:(bool)arg7;
- (bool)canEditMessageText;
- (unsigned char)contentType;
- (id)copyWithIsShowingEditHistory:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasSubject;
- (bool)isShowingEditHistory;
- (id)lastEditDateForMessagePart;
- (id)messageSummaryInfo;
- (id)replyContextPreviewChatItemForReply:(id)arg1 chatContext:(id)arg2;
- (void)setShouldDisplayRichLink:(bool)arg1;
- (bool)shouldDisplayRichLink;
- (id)subject;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
