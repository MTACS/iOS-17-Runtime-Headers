
@interface WorkflowEditor.EditorShortcutRunner : NSObject <WFWorkflowRunnerClientDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _runningState;
    void isRunning;
    void modelerStateObservation;
    void onLifecycleEvent;
    void progress;
    void progressModeler;
    void runnerClient;
    void shortcutRunnerStateObservation;
    void workflow;
}

- (void).cxx_destruct;
- (id)init;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithAllResults:(id)arg2 error:(id)arg3 cancelled:(bool)arg4;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(bool)arg4;
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;

@end
