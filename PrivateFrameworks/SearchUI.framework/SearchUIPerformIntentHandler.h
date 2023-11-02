
@interface SearchUIPerformIntentHandler : SearchUIOpenUserActivityHandler <WFWorkflowRunnerClientDelegate> {
    WFWorkflowRunViewSource * _runViewSource;
    WFWorkflowRunnerClient * _runnerClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFWorkflowRunViewSource *runViewSource;
@property (nonatomic, retain) WFWorkflowRunnerClient *runnerClient;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)getUserActivityForCommand:(id)arg1 environment:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 environment:(id)arg3;
- (id)runViewSource;
- (id)runnerClient;
- (void)setRunViewSource:(id)arg1;
- (void)setRunnerClient:(id)arg1;
- (bool)shouldDeselectAfterExecution;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(bool)arg4;
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;

@end
