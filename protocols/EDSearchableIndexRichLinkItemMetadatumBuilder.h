
@protocol EDSearchableIndexRichLinkItemMetadatumBuilder <NSObject>

@required

- (NSString *)accountIdentifier;
- (NSDate *)dateReceived;
- (NSDate *)dateSent;
- (NSString *)domainIdentifier;
- (NSArray *)mailboxIdentifiers;
- (NSArray *)recipientAddresses;
- (NSString *)richLinkID;
- (NSString *)senderAddress;
- (void)setAccountIdentifier:(NSString *)arg1;
- (void)setDateReceived:(NSDate *)arg1;
- (void)setDateSent:(NSDate *)arg1;
- (void)setDomainIdentifier:(NSString *)arg1;
- (void)setMailboxIdentifiers:(NSArray *)arg1;
- (void)setRecipientAddresses:(NSArray *)arg1;
- (void)setRichLinkID:(NSString *)arg1;
- (void)setSenderAddress:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setUrl:(NSString *)arg1;
- (NSString *)title;
- (NSString *)url;

@end
