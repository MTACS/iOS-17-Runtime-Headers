
@protocol MRGroupSessionDelegate <NSObject>

@required

- (void)groupSession:(id <MRGroupSession>)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)groupSessionDidConnect:(id <MRGroupSession>)arg1;

@optional

- (void)groupSession:(id <MRGroupSession>)arg1 didChangeState:(long long)arg2;
- (void)groupSession:(id <MRGroupSession>)arg1 didUpdateMembers:(NSSet *)arg2;
- (void)groupSession:(id <MRGroupSession>)arg1 didUpdateParticipants:(NSSet *)arg2;
- (void)groupSession:(id <MRGroupSession>)arg1 didUpdatePendingParticipants:(NSSet *)arg2;
- (void)groupSession:(id <MRGroupSession>)arg1 didUpdateSynchronizedMetadata:(NSData *)arg2;

@end
