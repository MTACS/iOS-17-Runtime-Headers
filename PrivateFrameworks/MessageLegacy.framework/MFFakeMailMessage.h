
@interface MFFakeMailMessage : MFMailMessage {
    MailAccount * _account;
    MFMessageHeaders * _headers;
    MFMailboxUid * _mailbox;
}

@property (nonatomic, retain) MailAccount *account;
@property (nonatomic, retain) MFMessageHeaders *headers;
@property (nonatomic, retain) MFMailboxUid *mailbox;

- (void).cxx_destruct;
- (id)account;
- (id)headers;
- (id)mailbox;
- (void)setAccount:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setMailbox:(id)arg1;

@end
