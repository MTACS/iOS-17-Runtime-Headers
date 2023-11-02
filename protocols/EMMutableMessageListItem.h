
@protocol EMMutableMessageListItem <EMMessageListItem>

@required

- (long long)_internalID;
- (NSURL *)brandIndicatorLocation;
- (NSArray *)ccList;
- (long long)conversationID;
- (long long)conversationNotificationLevel;
- (unsigned long long)count;
- (NSDate *)date;
- (NSDate *)displayDate;
- (<EMCollectionItemID> *)displayMessageItemID;
- (NSIndexSet *)flagColors;
- (ECMessageFlags *)flags;
- (EMFollowUp *)followUp;
- (bool)hasAttachments;
- (bool)hasUnflagged;
- (bool)isBlocked;
- (bool)isCCMe;
- (bool)isToMe;
- (bool)isVIP;
- (NSArray *)mailboxObjectIDs;
- (NSArray *)mailboxes;
- (EMReadLater *)readLater;
- (NSDate *)sendLaterDate;
- (long long)senderBucket;
- (NSArray *)senderList;
- (void)setBrandIndicatorLocation:(NSURL *)arg1;
- (void)setCcList:(NSArray *)arg1;
- (void)setConversationID:(long long)arg1;
- (void)setConversationNotificationLevel:(long long)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setDate:(NSDate *)arg1;
- (void)setDisplayDate:(NSDate *)arg1;
- (void)setDisplayMessageItemID:(id <EMCollectionItemID>)arg1;
- (void)setFlagColors:(NSIndexSet *)arg1;
- (void)setFlags:(ECMessageFlags *)arg1;
- (void)setFollowUp:(EMFollowUp *)arg1;
- (void)setHasAttachments:(bool)arg1;
- (void)setHasUnflagged:(bool)arg1;
- (void)setIsBlocked:(bool)arg1;
- (void)setIsCCMe:(bool)arg1;
- (void)setIsToMe:(bool)arg1;
- (void)setIsVIP:(bool)arg1;
- (void)setMailboxObjectIDs:(NSArray *)arg1;
- (void)setMailboxes:(NSArray *)arg1;
- (void)setReadLater:(EMReadLater *)arg1;
- (void)setSendLaterDate:(NSDate *)arg1;
- (void)setSenderBucket:(long long)arg1;
- (void)setSenderList:(NSArray *)arg1;
- (void)setSubject:(ECSubject *)arg1;
- (void)setSummary:(NSString *)arg1;
- (void)setToList:(NSArray *)arg1;
- (void)setUnsubscribeType:(long long)arg1;
- (void)set_internalID:(long long)arg1;
- (ECSubject *)subject;
- (NSString *)summary;
- (NSArray *)toList;
- (long long)unsubscribeType;

@end
