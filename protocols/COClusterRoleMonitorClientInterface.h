
@protocol COClusterRoleMonitorClientInterface <NSObject>

@required

- (void)membersWithRole:(COClusterRole *)arg1 inCluster:(COCluster *)arg2 didChangeTo:(NSSet *)arg3;
- (void)roleOfMember:(COClusterMember *)arg1 inCluster:(COCluster *)arg2 didChangeTo:(COClusterRole *)arg3;
- (void)snapshotOfCluster:(COCluster *)arg1 didChangeTo:(NSSet *)arg2;

@end
