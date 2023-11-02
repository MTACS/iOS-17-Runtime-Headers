
@protocol IDSGroupSessionDelegate <NSObject>

@optional

- (void)groupSessionDidTerminate:(IDSGroupSession *)arg1;
- (void)groupSessionEnded:(IDSGroupSession *)arg1 withReason:(unsigned int)arg2 error:(NSError *)arg3;
- (void)participantUpdatedForSession:(IDSGroupSession *)arg1;
- (void)session:(IDSGroupSession *)arg1 didReceiveActiveLightweightParticipants:(NSArray *)arg2 success:(bool)arg3;
- (void)session:(IDSGroupSession *)arg1 didReceiveActiveParticipants:(NSArray *)arg2 success:(bool)arg3;
- (void)session:(IDSGroupSession *)arg1 didReceiveBlockedParticipantIDs:(NSArray *)arg2 withCode:(unsigned int)arg3 isTruncated:(bool)arg4;
- (void)session:(IDSGroupSession *)arg1 didReceiveBlockedParticipantIDs:(NSArray *)arg2 withCode:(unsigned int)arg3 withType:(unsigned short)arg4 isTruncated:(bool)arg5;
- (void)session:(IDSGroupSession *)arg1 didReceiveData:(NSData *)arg2 dataType:(unsigned short)arg3 forParticipant:(IDSGroupSessionActiveParticipant *)arg4;
- (void)session:(IDSGroupSession *)arg1 didReceiveDataBlob:(NSData *)arg2 forParticipant:(IDSGroupSessionActiveParticipant *)arg3;
- (void)session:(IDSGroupSession *)arg1 didReceiveParticipantIDs:(NSArray *)arg2 withCode:(unsigned int)arg3 managementType:(unsigned short)arg4;
- (void)session:(IDSGroupSession *)arg1 didReceivePluginAllocationInfo:(NSDictionary *)arg2;
- (void)session:(IDSGroupSession *)arg1 didReceiveQueryBlockedParticipantIDs:(NSArray *)arg2 withCode:(unsigned int)arg3 isTruncated:(bool)arg4;
- (void)session:(IDSGroupSession *)arg1 didReceiveReport:(NSArray *)arg2;
- (void)session:(IDSGroupSession *)arg1 didReceiveServerErrorCode:(unsigned int)arg2;
- (void)session:(IDSGroupSession *)arg1 didRegisterPluginAllocationInfo:(NSDictionary *)arg2;
- (void)session:(IDSGroupSession *)arg1 didRemoveParticipantIDs:(NSArray *)arg2 withCode:(unsigned int)arg3 isTruncated:(bool)arg4;
- (void)session:(IDSGroupSession *)arg1 didUnregisterPluginAllocationInfo:(NSDictionary *)arg2;
- (void)session:(IDSGroupSession *)arg1 participantDidJoinGroupWithInfo:(NSDictionary *)arg2;
- (void)session:(IDSGroupSession *)arg1 participantDidLeaveGroupWithInfo:(NSDictionary *)arg2;
- (void)session:(IDSGroupSession *)arg1 rejectedKeyRecoveryRequestFromURI:(IDSURI *)arg2 reason:(unsigned int)arg3;
- (void)sessionDidJoinGroup:(IDSGroupSession *)arg1 participantInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)sessionDidJoinGroup:(IDSGroupSession *)arg1 participantUpdate:(IDSGroupSessionParticipantUpdate *)arg2 error:(NSError *)arg3;
- (void)sessionDidJoinGroup:(IDSGroupSession *)arg1 participantsInfo:(NSArray *)arg2 error:(NSError *)arg3;
- (void)sessionDidLeaveGroup:(IDSGroupSession *)arg1 error:(NSError *)arg2;
- (void)sessionDidReceiveParticipantUpgrade:(IDSGroupSession *)arg1 participantType:(unsigned short)arg2 error:(NSError *)arg3;
- (void)sessiondidReceiveKeyUpdate:(IDSGroupSession *)arg1;

@end
