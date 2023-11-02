
@interface PDCApplicationEnvironmentMonitoringHandle : NSObject <LSApplicationWorkspaceObserverProtocol, PDCApplicationEnvironmentMonitoringHandle> {
    <PDCApplicationEnvironmentMonitoring> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    LSApplicationWorkspace * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property <PDCApplicationEnvironmentMonitoring> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationsDidUninstall:(id)arg1;
- (id)delegate;
- (id)initWithWorkspace:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)invalidate;
- (void)setDelegate:(id)arg1;

@end
