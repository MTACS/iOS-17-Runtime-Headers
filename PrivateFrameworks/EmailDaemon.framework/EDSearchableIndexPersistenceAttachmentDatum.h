
@interface EDSearchableIndexPersistenceAttachmentDatum : NSObject {
    NSString * _attachmentID;
    NSString * _attachmentPersistentID;
    long long  _mailboxID;
    NSString * _messagePersistentID;
    NSString * _name;
}

@property (nonatomic, copy) NSString *attachmentID;
@property (nonatomic, copy) NSString *attachmentPersistentID;
@property (nonatomic) long long mailboxID;
@property (nonatomic, copy) NSString *messagePersistentID;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)attachmentID;
- (id)attachmentPersistentID;
- (long long)mailboxID;
- (id)messagePersistentID;
- (id)name;
- (void)setAttachmentID:(id)arg1;
- (void)setAttachmentPersistentID:(id)arg1;
- (void)setMailboxID:(long long)arg1;
- (void)setMessagePersistentID:(id)arg1;
- (void)setName:(id)arg1;

@end
