
@protocol MFMailMessageStore

@required

- (MailAccount *)account;
- (MFMailboxUid *)mailbox;
- (MFMailboxUid *)mailboxUid;
- (bool)shouldDownloadBodyDataForMessage:(MFMailMessage *)arg1;
- (NSString *)storageLocationForAttachment:(MFAttachment *)arg1 withMessage:(MFMailMessage *)arg2;
- (NSData *)storeData:(NSData *)arg1 forMimePart:(MFMimePart *)arg2 isComplete:(bool)arg3;

@end
