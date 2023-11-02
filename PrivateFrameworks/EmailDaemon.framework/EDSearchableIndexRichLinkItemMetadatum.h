
@interface EDSearchableIndexRichLinkItemMetadatum : NSObject <EDSearchableIndexRichLinkItemMetadatumBuilder> {
    NSString * _accountIdentifier;
    NSDate * _dateReceived;
    NSDate * _dateSent;
    NSString * _domainIdentifier;
    NSArray * _mailboxIdentifiers;
    NSArray * _recipientAddresses;
    NSString * _richLinkID;
    NSString * _senderAddress;
    NSString * _title;
    NSString * _url;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSDate *dateReceived;
@property (nonatomic, retain) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domainIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *mailboxIdentifiers;
@property (nonatomic, copy) NSArray *recipientAddresses;
@property (nonatomic, copy) NSString *richLinkID;
@property (nonatomic, copy) NSString *senderAddress;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *url;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)dateReceived;
- (id)dateSent;
- (id)domainIdentifier;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)mailboxIdentifiers;
- (id)recipientAddresses;
- (id)richLinkID;
- (id)senderAddress;
- (void)setAccountIdentifier:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setMailboxIdentifiers:(id)arg1;
- (void)setRecipientAddresses:(id)arg1;
- (void)setRichLinkID:(id)arg1;
- (void)setSenderAddress:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)title;
- (id)url;

@end
