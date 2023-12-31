
@interface MFDAMessage : MFMailMessage {
    DAMailMessage * _DAMailMessage;
    NSString * _externalConversationID;
    MFMailboxUid * _mailbox;
    MFMessage * _rfc822CreatedMessage;
}

@property (nonatomic, readonly) DAMailMessage *DAMailMessage;

- (void).cxx_destruct;
- (id)DAMailMessage;
- (id)externalConversationID;
- (id)headers;
- (id)headersIfAvailable;
- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;
- (id)mailbox;
- (id)messageBody;
- (bool)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4;
- (bool)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4;
- (unsigned long long)messageFlags;
- (unsigned long long)messageSize;
- (id)remoteID;
- (id)remoteMailboxURL;

@end
