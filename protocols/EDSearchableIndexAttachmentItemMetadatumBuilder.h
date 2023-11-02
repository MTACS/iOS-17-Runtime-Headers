
@protocol EDSearchableIndexAttachmentItemMetadatumBuilder <NSObject>

@required

- (NSString *)accountIdentifier;
- (NSDate *)dateReceived;
- (NSDate *)dateSent;
- (NSString *)domainIdentifier;
- (NSArray *)mailboxIdentifiers;
- (NSString *)name;
- (NSArray *)recipientAddresses;
- (NSString *)senderAddress;
- (void)setAccountIdentifier:(NSString *)arg1;
- (void)setDateReceived:(NSDate *)arg1;
- (void)setDateSent:(NSDate *)arg1;
- (void)setDomainIdentifier:(NSString *)arg1;
- (void)setMailboxIdentifiers:(NSArray *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setRecipientAddresses:(NSArray *)arg1;
- (void)setSenderAddress:(NSString *)arg1;

@end
