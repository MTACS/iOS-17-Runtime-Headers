
@protocol HMDLocalElectionMeshControllerDelegate <NSObject>

@required

- (void)meshController:(id <HMDLocalElectionMeshController>)arg1 didReceivePingFromLeaderWithPrimaryResidentUUID:(NSUUID *)arg2;
- (void)meshControllerDidElectLeader:(id <HMDLocalElectionMeshController>)arg1;
- (void)meshControllerDidStartElection:(id <HMDLocalElectionMeshController>)arg1;
- (void)meshControllerDidUpdatesNodes:(id <HMDLocalElectionMeshController>)arg1;

@end
