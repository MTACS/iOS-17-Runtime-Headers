
@protocol COMTActionDirectorServiceProvider <NSObject>

@required

- (COClusterRoleMonitor *)clusterRoleMonitorWithCluster:(COCluster *)arg1;
- (COMessageChannel *)messageChannelWithTopic:(NSString *)arg1 cluster:(COCluster *)arg2;

@end
