
@protocol IDSSessionDelegate <NSObject>

@optional

- (void)session:(NSString *)arg1 didReceiveData:(NSData *)arg2;
- (void)session:(IDSSession *)arg1 didReceiveReport:(NSArray *)arg2;
- (void)session:(IDSSession *)arg1 receivedInvitationAcceptFromID:(NSString *)arg2;
- (void)session:(IDSSession *)arg1 receivedInvitationCancelFromID:(NSString *)arg2;
- (void)session:(IDSSession *)arg1 receivedInvitationDeclineFromID:(NSString *)arg2;
- (void)sessionEnded:(IDSSession *)arg1;
- (void)sessionEnded:(IDSSession *)arg1 withReason:(unsigned int)arg2 error:(NSError *)arg3;
- (void)sessionStarted:(IDSSession *)arg1;

@end
