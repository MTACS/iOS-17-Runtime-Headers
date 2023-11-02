
@interface MFComposeMailMessage : MFMailMessage {
    EMMessage * _emailMessageRepresentation;
}

@property (nonatomic, retain) EMMessage *emailMessageRepresentation;
@property (nonatomic, readonly) EMMessageRepository *messageRepository;

+ (id)legacyMessageWithMessage:(id)arg1 mailboxUid:(id)arg2;
+ (id)legacyMessageWithMessage:(id)arg1 mailboxUid:(id)arg2 skipAttachmentDownload:(bool)arg3;

- (void).cxx_destruct;
- (id)account;
- (id)documentID;
- (id)emailMessageRepresentation;
- (void)markAsForwarded;
- (void)markAsReplied;
- (void)markAsViewed;
- (id)messageRepository;
- (void)setEmailMessageRepresentation:(id)arg1;

@end
