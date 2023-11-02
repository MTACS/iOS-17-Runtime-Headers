
@interface _COMTActionDirectorServiceProvider : NSObject <COMTActionDirectorServiceProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)clusterRoleMonitorWithCluster:(id)arg1;
- (id)messageChannelWithTopic:(id)arg1 cluster:(id)arg2;

@end
