
@interface IMReplyContextTranscriptPluginChatItem : IMTranscriptPluginChatItem <IMReplyContext> {
    IMMessageItem * _messageItem;
    IMItem * _parentItem;
    bool  _replyIsFromMe;
    NSString * _replyMessageGUID;
}

@property (nonatomic, retain) IMItem *_parentItem;
@property (nonatomic, readonly) IMMessageItem *messageItem;
@property (nonatomic) bool replyIsFromMe;
@property (nonatomic, copy) NSString *replyMessageGUID;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 parentItem:(id)arg2 replyMessageGUID:(id)arg3 replyIsFromMe:(bool)arg4 initialPayload:(id)arg5 index:(long long)arg6 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 parentChatHasKnownParticipants:(bool)arg8 chatContext:(id)arg9;
- (id)_parentItem;
- (bool)canDelete;
- (bool)isReplyContextPreview;
- (id)messageItem;
- (bool)replyIsFromMe;
- (id)replyMessageGUID;
- (void)setReplyIsFromMe:(bool)arg1;
- (void)setReplyMessageGUID:(id)arg1;
- (void)set_parentItem:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
