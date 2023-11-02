
@interface _COClusterRoleMonitorConnectionProvider : NSObject <COClusterRoleMonitorConnectionProvider> {
    NSXPCConnection * _clusterRoleMonitorServiceConnection;
}

@property (nonatomic, readonly) NSXPCConnection *clusterRoleMonitorServiceConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clusterRoleMonitorServiceConnection;

@end
