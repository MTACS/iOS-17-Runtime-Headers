
@interface SearchUIRunShortcutHandler : SearchUIOpenUserActivityHandler <ATXActionSearchResultExecutionDelegate, WFWorkflowRunnerClientDelegate> {
    ATXActionSearchResultExecution * _action;
    WFWorkflowRunViewSource * _runViewSource;
    WFWorkflowRunnerClient * _workFlowRunnerClient;
}

@property (nonatomic, retain) ATXActionSearchResultExecution *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFWorkflowRunViewSource *runViewSource;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFWorkflowRunnerClient *workFlowRunnerClient;

+ (id)fallbackCommandForRowModel:(id)arg1 environment:(id)arg2;

- (void).cxx_destruct;
- (id)action;
- (id /* block */)actionProvider;
- (void)actionSearchResultExecution:(id)arg1 didDismissRemoteAlertWithReason:(long long)arg2 actionCompleted:(bool)arg3 withResult:(long long)arg4 shouldClearAction:(bool)arg5;
- (unsigned long long)destination;
- (void)performCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 environment:(id)arg3;
- (void)removeRowModel;
- (id)runViewSource;
- (void)setAction:(id)arg1;
- (void)setRunViewSource:(id)arg1;
- (void)setWorkFlowRunnerClient:(id)arg1;
- (bool)shouldDeselectAfterExecution;
- (id)workFlowRunnerClient;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(bool)arg4;
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;

@end
