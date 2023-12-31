
@interface SASmsRecipientSearch : SADomainCommand

@property (nonatomic) bool clientShouldResolvePhonesAndEmails;
@property (nonatomic, copy) NSArray *recipients;

+ (id)recipientSearch;
+ (id)recipientSearchWithDictionary:(id)arg1 context:(id)arg2;

- (bool)clientShouldResolvePhonesAndEmails;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (id)recipients;
- (bool)requiresResponse;
- (void)setClientShouldResolvePhonesAndEmails:(bool)arg1;
- (void)setRecipients:(id)arg1;

@end
