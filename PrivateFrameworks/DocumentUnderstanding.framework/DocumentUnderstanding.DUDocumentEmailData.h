
@interface DocumentUnderstanding.DUDocumentEmailData : NSObject <NSCoding, NSCopying> {
    void bccEmails;
    void bccNames;
    void ccEmails;
    void ccNames;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dateReceived;
    void recipientEmails;
    void recipientNames;
    void senderDomain;
    void senderEmail;
    void senderName;
    void subject;
}

@property (nonatomic, copy) NSArray *bccEmails;
@property (nonatomic, copy) NSArray *bccNames;
@property (nonatomic, copy) NSArray *ccEmails;
@property (nonatomic, copy) NSArray *ccNames;
@property (nonatomic, copy) NSDate *dateReceived;
@property (nonatomic, copy) NSArray *recipientEmails;
@property (nonatomic, copy) NSArray *recipientNames;
@property (nonatomic, copy) NSString *senderDomain;
@property (nonatomic, copy) NSString *senderEmail;
@property (nonatomic, copy) NSString *senderName;
@property (nonatomic, copy) NSString *subject;

- (void).cxx_destruct;
- (id)bccEmails;
- (id)bccNames;
- (id)ccEmails;
- (id)ccNames;
- (id)copyWithZone:(void*)arg1;
- (id)dateReceived;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)recipientEmails;
- (id)recipientNames;
- (id)senderDomain;
- (id)senderEmail;
- (id)senderName;
- (void)setBccEmails:(id)arg1;
- (void)setBccNames:(id)arg1;
- (void)setCcEmails:(id)arg1;
- (void)setCcNames:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setRecipientEmails:(id)arg1;
- (void)setRecipientNames:(id)arg1;
- (void)setSenderDomain:(id)arg1;
- (void)setSenderEmail:(id)arg1;
- (void)setSenderName:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)subject;

@end
