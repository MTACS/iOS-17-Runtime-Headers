
@interface CKTUConversationChatItem : CKMessagePartChatItem {
    bool  _senderUnknown;
}

@property (nonatomic, readonly) BOOL color;
@property (nonatomic, readonly) unsigned long long conversationAVMode;
@property (getter=isSenderUnknown, nonatomic, readonly) bool senderUnknown;
@property (nonatomic, readonly) NSUUID *tuConversationUUID;

- (Class)balloonViewClass;
- (bool)canAttachStickers;
- (bool)canCopy;
- (bool)canForward;
- (bool)canInlineReply;
- (bool)canSendAsTextMessage;
- (bool)canSendMessageAcknowledgment;
- (BOOL)color;
- (void)configureBalloonView:(id)arg1;
- (unsigned long long)conversationAVMode;
- (id)faceTimeConversation;
- (bool)isFromMe;
- (bool)isSenderUnknown;
- (bool)isSendersUnknown;
- (id)message;
- (id)sender;
- (bool)shouldCacheSize;
- (long long)stewieConversationID;
- (id)time;
- (id)tuConversationUUID;

@end
