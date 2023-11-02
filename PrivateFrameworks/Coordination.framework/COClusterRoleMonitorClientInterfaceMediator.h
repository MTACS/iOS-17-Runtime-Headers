
@interface COClusterRoleMonitorClientInterfaceMediator : NSObject <COClusterRoleMonitorClientInterface> {
    COClusterRoleMonitor * _monitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COClusterRoleMonitor *monitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithClusterRoleMonitor:(id)arg1;
- (void)membersWithRole:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3;
- (id)monitor;
- (void)roleOfMember:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3;
- (void)snapshotOfCluster:(id)arg1 didChangeTo:(id)arg2;

@end
