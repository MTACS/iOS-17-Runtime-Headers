
@protocol EDBaseMessage <ECMessage>

@required

- (<EDIndexableAccount> *)account;
- (NSData *)brandIndicator;
- (NSURL *)brandIndicatorLocation;
- (NSDictionary *)dataDetectionAttributes;
- (NSDate *)date;
- (NSDate *)displayDate;
- (unsigned long long)fileSize;
- (EMFollowUp *)followUp;
- (long long)globalMessageID;
- (<EDIndexableMailbox> *)mailbox;
- (EMReadLater *)readLater;
- (NSDate *)sendLaterDate;
- (ECSubject *)subjectIfAvailable;

@optional

- (NSArray *)bccIfAvailable;

@end
