
@protocol HMDLocalElectionMeshController <NSObject>

@required

- (NSString *)debugDescriptionForControllerType;
- (NSString *)debugDescriptionForMeshState;
- (<HMDLocalElectionMeshControllerDelegate> *)delegate;
- (bool)isLeader;
- (bool)isProcessing;
- (<HMDLocalElectionMeshNode> *)leaderNode;
- (NSArray *)meshNodes;
- (void)sendPingCommandToLeaderWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendPingNotificationToFollowersWithPrimaryResident:(NSUUID *)arg1;
- (void)sendPingRequestToNode:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: <HMDLocalElectionMeshNode> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDelegate:(id <HMDLocalElectionMeshControllerDelegate>)arg1;
- (void)startMeshWithName:(NSString *)arg1;
- (void)stop;

@end
