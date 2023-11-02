
@protocol IDSSessionDelegatePrivate <IDSSessionDelegate>

@optional

- (void)session:(IDSSession *)arg1 invitationSentToTokens:(NSSet *)arg2;
- (void)session:(IDSSession *)arg1 invitationSentToTokens:(NSSet *)arg2 shouldBreakBeforeMake:(bool)arg3;
- (void)session:(IDSSession *)arg1 receivedInvitationAcceptFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)session:(IDSSession *)arg1 receivedInvitationCancelFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)session:(IDSSession *)arg1 receivedInvitationDeclineFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)session:(IDSSession *)arg1 receivedSessionEndFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)session:(IDSSession *)arg1 receivedSessionMessageFromID:(NSString *)arg2 withData:(NSData *)arg3;

@end
