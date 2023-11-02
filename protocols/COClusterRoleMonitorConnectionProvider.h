
@protocol COClusterRoleMonitorConnectionProvider <NSObject>

@required

- (NSXPCConnection *)clusterRoleMonitorServiceConnection;

@end
