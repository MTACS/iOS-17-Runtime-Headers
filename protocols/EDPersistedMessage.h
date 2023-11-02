
@protocol EDPersistedMessage <EDBaseMessage>

@required

- (<EDAccount> *)accountForSender;
- (NSURL *)basePath;
- (unsigned long long)conversationFlags;
- (NSDate *)displayDate;
- (EMFollowUp *)followUp;
- (bool)isJournaled;
- (long long)persistedMessageID;
- (NSString *)persistentID;
- (EMReadLater *)readLater;
- (NSDate *)sendLaterDate;
- (long long)senderBucket;
- (void)setBrandIndicatorLocation:(NSURL *)arg1 andData:(NSData *)arg2;
- (void)setDisplayDate:(NSDate *)arg1;
- (void)setFollowUp:(EMFollowUp *)arg1;
- (void)setReadLater:(EMReadLater *)arg1;
- (void)setSendLaterDate:(NSDate *)arg1;
- (NSString *)summary;
- (long long)unsubscribeType;

@end
