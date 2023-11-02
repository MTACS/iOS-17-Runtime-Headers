
@protocol HMDCoordinationAddOnImplDelegate

@required

- (void)meshControllerDidElectLeader;
- (void)meshControllerDidStartElection;
- (void)meshControllerDidUpdatesNodes;

@end
