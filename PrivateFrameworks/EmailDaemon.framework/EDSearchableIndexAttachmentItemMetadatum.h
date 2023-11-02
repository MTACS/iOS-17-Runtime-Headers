
@interface EDSearchableIndexAttachmentItemMetadatum : NSObject <EDSearchableIndexAttachmentItemMetadatumBuilder> {
    NSString * _accountIdentifier;
    NSURL * _attachmentFileURL;
    NSDate * _dateReceived;
    NSDate * _dateSent;
    NSString * _domainIdentifier;
    NSArray * _mailboxIdentifiers;
    NSString * _name;
    NSArray * _recipientAddresses;
    NSString * _senderAddress;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, readonly) NSURL *attachmentFileURL;
@property (nonatomic, readonly) bool canReadAttachmentFile;
@property (nonatomic, readonly) UTType *contentType;
@property (nonatomic, retain) NSDate *dateReceived;
@property (nonatomic, retain) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domainIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *mailboxIdentifiers;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *recipientAddresses;
@property (nonatomic, copy) NSString *senderAddress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)attachmentFileURL;
- (bool)canReadAttachmentFile;
- (id)contentType;
- (id)dateReceived;
- (id)dateSent;
- (id)domainIdentifier;
- (id)initWithAttachmentFileURL:(id)arg1 builder:(id /* block */)arg2;
- (id)mailboxIdentifiers;
- (id)name;
- (id)recipientAddresses;
- (id)senderAddress;
- (void)setAccountIdentifier:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setMailboxIdentifiers:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRecipientAddresses:(id)arg1;
- (void)setSenderAddress:(id)arg1;

@end
