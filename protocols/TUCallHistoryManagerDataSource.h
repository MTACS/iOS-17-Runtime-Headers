
@protocol TUCallHistoryManagerDataSource <NSObject>

@required

- (void)invalidate;
- (void)reportRecentCallForConversation:(TUConversation *)arg1 withStartDate:(NSDate *)arg2;
- (void)updateOutgoingLocalParticipantUUID:(NSUUID *)arg1 forCallsWithOutgoingLocalParticipantUUID:(NSUUID *)arg2;

@end
