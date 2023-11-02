
@protocol COClusterRoleMonitorServiceInterface <NSObject>

@required

- (void)registerForMemberChangesWithRole:(COClusterRole *)arg1 inCluster:(COCluster *)arg2;
- (void)registerForRoleChangesOfMember:(COClusterMember *)arg1 inCluster:(COCluster *)arg2;
- (void)registerForSnapshotChangesInCluster:(COCluster *)arg1;
- (void)unregisterForMemberChangesWithRole:(COClusterRole *)arg1 inCluster:(COCluster *)arg2;
- (void)unregisterForRoleChangesOfMember:(COClusterMember *)arg1 inCluster:(COCluster *)arg2;
- (void)unregisterForSnapshotChangesInCluster:(COCluster *)arg1;

@end
