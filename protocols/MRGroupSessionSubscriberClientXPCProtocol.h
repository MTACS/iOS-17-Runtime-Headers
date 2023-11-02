
@protocol MRGroupSessionSubscriberClientXPCProtocol

@required

- (void)session:(NSString *)arg1 didChangeState:(long long)arg2;
- (void)session:(NSString *)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)session:(NSString *)arg1 didUpdateMembers:(NSSet *)arg2;
- (void)session:(NSString *)arg1 didUpdateParticipants:(NSSet *)arg2;
- (void)session:(NSString *)arg1 didUpdatePendingParticipants:(NSSet *)arg2;
- (void)session:(NSString *)arg1 didUpdateSynchronizedMetadata:(NSData *)arg2;

@end
