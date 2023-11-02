
@protocol PBUIPosterReplicaView <PBUIPosterReplicaSourceObserver, BSInvalidatable>

@required

- (PBUIReplicaDebugView *)debugView;
- (NSString *)reason;
- (void)setReason:(NSString *)arg1;

@end
