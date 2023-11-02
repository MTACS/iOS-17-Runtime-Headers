
@interface WFSiriWorkflowRunnerClient : WFWorkflowRunnerClient <NSXPCListenerDelegate, WFSiriUIPresenterInterface> {
    NSXPCListener * _dialogRequestListener;
    WFPausedShortcutData * _pausedData;
    WFSiriExecutionMetrics * _siriExecutionMetrics;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFSiriWorkflowRunnerClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListener *dialogRequestListener;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFPausedShortcutData *pausedData;
@property (nonatomic, retain) WFSiriExecutionMetrics *siriExecutionMetrics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)deviceIdiomForCurrentDevice;
- (long long)deviceIdiomFromRunSource:(long long)arg1;
- (id)dialogRequestListener;
- (void)handleWorkflowRunResult:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithAutoShortcutIdentifier:(id)arg1 phrase:(id)arg2 runSource:(long long)arg3 action:(id)arg4 metadata:(id)arg5;
- (id)initWithPausedShortcutData:(id)arg1 runSource:(long long)arg2 options:(id)arg3;
- (id)initWithRunDescriptor:(id)arg1 runSource:(long long)arg2 options:(id)arg3;
- (id)initWithWorkflowIdentifier:(id)arg1 runSource:(long long)arg2 options:(id)arg3;
- (id)initWithWorkflowName:(id)arg1 runSource:(long long)arg2 options:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)pauseRunningShortcut;
- (id)pausedData;
- (void)performSiriRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPausedData:(id)arg1;
- (void)setSiriExecutionMetrics:(id)arg1;
- (id)siriExecutionMetrics;
- (void)start;
- (void)stop;
- (void)willBeginExecutingShortcutStep:(id)arg1;
- (void)willBeginExecutingShortcutWithActionCount:(id)arg1;
- (id)workflowRunSourceForSiriRunSource:(long long)arg1;

@end
