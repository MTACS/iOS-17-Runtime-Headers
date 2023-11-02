
@interface SBLinkSystemActionExecutor : SBAbstractSystemActionExecutor <WFWorkflowRunnerClientDelegate> {
    <SBSystemActionPreviewInvalidatable> * _previewAssertion;
    NSObject<OS_dispatch_queue> * _prewarmQueue;
    WFStaccatoWorkflowRunnerClient * _runnerClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_beginInteractiveExecutionWithContext:(id)arg1 error:(out id*)arg2;
- (bool)_canBeExecuted;
- (void)_cancelPreviewing;
- (void)_finishExecutingWithResult:(id)arg1;
- (bool)_isExecuting;
- (id)_previewWithCoordinator:(id)arg1;
- (id)initWithSystemAction:(id)arg1;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(bool)arg4;
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;

@end
