
@protocol MessageItemViewModelBuilder <MessageItemFlagsViewModelBuilder>

@required

- (NSDate *)date;
- (NSDate *)displayDate;
- (EMFollowUp *)followUp;
- (bool)hasAttachments;
- (bool)isBlockedSender;
- (NSDate *)readLaterDate;
- (NSDate *)sendLaterDate;
- (void)setBlockedSender:(bool)arg1;
- (void)setDate:(NSDate *)arg1;
- (void)setDisplayDate:(NSDate *)arg1;
- (void)setFollowUp:(EMFollowUp *)arg1;
- (void)setHasAttachments:(bool)arg1;
- (void)setReadLaterDate:(NSDate *)arg1;
- (void)setSendLaterDate:(NSDate *)arg1;
- (void)setUnsubscribeType:(long long)arg1;
- (long long)unsubscribeType;

@end
