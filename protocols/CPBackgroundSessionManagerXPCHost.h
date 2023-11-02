
@protocol CPBackgroundSessionManagerXPCHost

@required

- (void)sessionDidReceiveUpdatedUnknownParticipantListWithSessionID:(NSUUID *)arg1 unknownParticipants:(NSSet *)arg2;
- (void)sessionDidRejectKeyRecoveryRequestWithSessionID:(NSUUID *)arg1;
- (void)updateWithActivitySessions:(NSArray *)arg1;

@end
