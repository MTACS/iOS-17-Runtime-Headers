
@interface CKMutableMessageContext : CKMessageContext

@property (getter=isAudioMessage, nonatomic) bool audioMessage;
@property (nonatomic, copy) IMChatContext *chatContext;
@property (getter=isFromMe, nonatomic) bool fromMe;
@property (getter=isSenderUnauthenticated, nonatomic) bool senderUnauthenticated;
@property (getter=isSenderUnknown, nonatomic) bool senderUnknown;
@property (nonatomic, copy) NSString *serviceName;
@property (getter=isSpam, nonatomic) bool spam;

- (void)setAudioMessage:(bool)arg1;
- (void)setChatContext:(id)arg1;
- (void)setFromMe:(bool)arg1;
- (void)setSenderUnauthenticated:(bool)arg1;
- (void)setSenderUnknown:(bool)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSpam:(bool)arg1;

@end
