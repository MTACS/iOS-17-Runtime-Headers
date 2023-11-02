
@interface HMDCoordinationLocalElectionMeshController : COMeshController <HMDCoordinationAddOnImplDelegate, HMDLocalElectionMeshController, HMFLogging> {
    <HMDLocalElectionMeshControllerDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDLocalElectionMeshControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isLeader;
@property (readonly) bool isProcessing;
@property (readonly) <HMDLocalElectionMeshNode> *leaderNode;
@property (readonly) NSArray *meshNodes;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_setupMessageRegistrations;
- (id)debugDescriptionForControllerType;
- (id)debugDescriptionForMeshState;
- (id)delegate;
- (id)initWithQueue:(id)arg1;
- (bool)isLeader;
- (bool)isProcessing;
- (id)leaderNode;
- (id)logIdentifier;
- (void)meshControllerDidElectLeader;
- (void)meshControllerDidStartElection;
- (void)meshControllerDidUpdatesNodes;
- (id)meshNodeFor:(id)arg1;
- (id)meshNodes;
- (void)sendPingCommandToLeaderWithCompletion:(id /* block */)arg1;
- (void)sendPingNotificationToFollowersWithPrimaryResident:(id)arg1;
- (void)sendPingRequestToNode:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)startMeshWithName:(id)arg1;
- (void)stop;

@end
