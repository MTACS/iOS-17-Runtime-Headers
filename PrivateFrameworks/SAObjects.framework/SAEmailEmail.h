
@interface SAEmailEmail : SADomainObject

@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSDate *dateSent;
@property (nonatomic, retain) SAPersonAttribute *fromEmail;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *messagePreview;
@property (nonatomic, copy) NSNumber *outgoing;
@property (nonatomic, copy) NSArray *receivingAddresses;
@property (nonatomic, copy) NSArray *recipientsBcc;
@property (nonatomic, copy) NSArray *recipientsCc;
@property (nonatomic, copy) NSArray *recipientsTo;
@property (nonatomic, copy) NSURL *referenceId;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSString *timeZoneId;
@property (nonatomic, copy) NSString *type;

+ (id)email;
+ (id)emailWithDictionary:(id)arg1 context:(id)arg2;

- (id)attachments;
- (id)dateSent;
- (id)encodedClassName;
- (id)fromEmail;
- (id)groupIdentifier;
- (id)message;
- (id)messagePreview;
- (id)outgoing;
- (id)receivingAddresses;
- (id)recipientsBcc;
- (id)recipientsCc;
- (id)recipientsTo;
- (id)referenceId;
- (void)setAttachments:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setFromEmail:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessagePreview:(id)arg1;
- (void)setOutgoing:(id)arg1;
- (void)setReceivingAddresses:(id)arg1;
- (void)setRecipientsBcc:(id)arg1;
- (void)setRecipientsCc:(id)arg1;
- (void)setRecipientsTo:(id)arg1;
- (void)setReferenceId:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (void)setType:(id)arg1;
- (id)subject;
- (id)timeZoneId;
- (id)type;

@end
