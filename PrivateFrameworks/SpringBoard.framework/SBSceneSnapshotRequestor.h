
@interface SBSceneSnapshotRequestor : NSObject <BSDescriptionProviding, BSInvalidatable> {
    <SBSceneSnapshotRequestorDelegate> * _delegate;
    NSMutableSet * _incomingSnapshots;
    NSMutableSet * _outgoingSnapshots;
    NSHashTable * _preventSupplementalSnapshotsAssertions;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SBSceneSnapshotRequestorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_debugName;
- (id)_fbsSceneSnapshotRequestsFromSBSceneSnapshotRequests:(id)arg1 forSceneHandle:(id)arg2 settings:(id)arg3 snapshotRequestContext:(id)arg4;
- (id)_sbSceneSnapshotRequestsForSceneHandle:(id)arg1 settings:(id)arg2 snapshotRequestContext:(id)arg3;
- (id)_sceneSnapshotRequestContext;
- (id)_sceneSnapshotRequestStrategy;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)handleSnapshotRequestAction:(id)arg1 forSceneHandle:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (void)invalidatePendingSnapshotsForSceneID:(id)arg1;
- (id)preventTakingSupplementalSnapshotsForBackgroundingScenesWithReason:(id)arg1;
- (void)requestSnapshotsForSceneHandle:(id)arg1 updatingToNewSettings:(id)arg2 withUpdateContext:(id)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
