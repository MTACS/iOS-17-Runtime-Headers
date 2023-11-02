
@interface QLShortcutsActionsRunner : NSObject <WFContextualActionRunnerClientDelegate> {
    id /* block */  _completionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)runAction:(id)arg1 withContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutputFiles:(id)arg2 error:(id)arg3 cancelled:(bool)arg4;

@end
