
@protocol EMMessageListItem <EMCollectionItem, EMObject, EFPubliclyDescribable>

@required

- (NSURL *)brandIndicatorLocation;
- (NSArray *)ccList;
- (long long)conversationID;
- (long long)conversationNotificationLevel;
- (unsigned long long)count;
- (NSDate *)date;
- (bool)deleteMovesToTrash;
- (NSDate *)displayDate;
- (EFFuture *)displayMessage;
- (<EMCollectionItemID> *)displayMessageItemID;
- (EMObjectID *)displayMessageObjectID;
- (NSIndexSet *)flagColors;
- (ECMessageFlags *)flags;
- (EMFollowUp *)followUp;
- (bool)hasAttachments;
- (bool)hasUnflagged;
- (bool)isBlocked;
- (bool)isCCMe;
- (bool)isEditable;
- (bool)isToMe;
- (bool)isVIP;
- (NSArray *)mailboxObjectIDs;
- (NSArray *)mailboxes;
- (NSArray *)mailboxesIfAvailable;
- (EMReadLater *)readLater;
- (NSDate *)sendLaterDate;
- (long long)senderBucket;
- (NSArray *)senderList;
- (bool)shouldArchiveByDefault;
- (ECSubject *)subject;
- (NSString *)summary;
- (bool)supportsArchiving;
- (NSArray *)toList;
- (long long)unsubscribeType;

@end
