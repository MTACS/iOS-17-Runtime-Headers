
@interface CORoleService : COService <COClusterRoleMonitorServiceInterface, CORoleAddOnDelegate> {
    NSDictionary * _memberObservers;
    NSDictionary * _roleObservers;
    NSDictionary * _snapshotObservers;
    NSDictionary * _snapshotState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *memberObservers;
@property (nonatomic, retain) NSDictionary *roleObservers;
@property (nonatomic, retain) NSDictionary *snapshotObservers;
@property (nonatomic, retain) NSDictionary *snapshotState;
@property (readonly) Class superclass;

+ (id)serviceWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)_addMemberObserverForClient:(id)arg1 ofRole:(id)arg2 inCluster:(id)arg3;
- (void)_addOnAdded:(id)arg1;
- (void)_addOnRemoved:(id)arg1;
- (void)_addRoleObserverForClient:(id)arg1 ofMember:(id)arg2 inCluster:(id)arg3;
- (void)_addSnapshotObserverForClient:(id)arg1 inCluster:(id)arg2;
- (bool)_applicableToCluster:(id)arg1;
- (void)_clientLost:(id)arg1;
- (void)_configureServiceInterfacesOnConnection:(id)arg1;
- (void)_identifyAndNotifyMemberChangesFromSnapshot:(id)arg1 inCluster:(id)arg2;
- (void)_identifyAndNotifyRoleChangesFromSnapshot:(id)arg1 inCluster:(id)arg2;
- (id)_membersWithRole:(id)arg1 inCluster:(id)arg2;
- (id)_membersWithRole:(id)arg1 inSnapshots:(id)arg2;
- (void)_notifyMemberObserver:(id)arg1 membersWithRole:(id)arg2 inCluster:(id)arg3 didChangeTo:(id)arg4;
- (void)_notifyMemberObserversMembersWithRole:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3;
- (void)_notifyRoleObserver:(id)arg1 roleOfMember:(id)arg2 inCluster:(id)arg3 didChangeTo:(id)arg4;
- (void)_notifyRoleObserversRoleOfMember:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3;
- (void)_notifySnapshotObserver:(id)arg1 snapshotOfCluster:(id)arg2 didChangeTo:(id)arg3;
- (void)_notifySnapshotObserversSnapshotOfCluster:(id)arg1 didChangeTo:(id)arg2;
- (id)_remoteInterfaceForClient:(id)arg1 withErrorHandler:(id /* block */)arg2;
- (void)_removeMemberObserverForClient:(id)arg1 ofRole:(id)arg2 inCluster:(id)arg3;
- (void)_removeRoleObserverForClient:(id)arg1 ofMember:(id)arg2 inCluster:(id)arg3;
- (void)_removeSnapshotObserverForClient:(id)arg1 inCluster:(id)arg2;
- (id)_roleOfMember:(id)arg1 inCluster:(id)arg2;
- (id)_roleOfMember:(id)arg1 inSnapshots:(id)arg2;
- (id)_snapshotsForCluster:(id)arg1;
- (void)_updateSnapshots:(id)arg1 inCluster:(id)arg2;
- (void)addOn:(id)arg1 stateChanged:(id)arg2;
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;
- (id)memberObservers;
- (void)registerForMemberChangesWithRole:(id)arg1 inCluster:(id)arg2;
- (void)registerForRoleChangesOfMember:(id)arg1 inCluster:(id)arg2;
- (void)registerForSnapshotChangesInCluster:(id)arg1;
- (id)roleObservers;
- (void)setMemberObservers:(id)arg1;
- (void)setRoleObservers:(id)arg1;
- (void)setSnapshotObservers:(id)arg1;
- (void)setSnapshotState:(id)arg1;
- (id)snapshotObservers;
- (id)snapshotState;
- (void)unregisterForMemberChangesWithRole:(id)arg1 inCluster:(id)arg2;
- (void)unregisterForRoleChangesOfMember:(id)arg1 inCluster:(id)arg2;
- (void)unregisterForSnapshotChangesInCluster:(id)arg1;

@end
