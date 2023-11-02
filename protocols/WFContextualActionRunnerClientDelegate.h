
@protocol WFContextualActionRunnerClientDelegate <WFWorkflowRunnerClientDelegate>

@optional

- (void)workflowRunnerClient:(WFContextualActionRunnerClient *)arg1 didFinishRunningWorkflowWithOutputFiles:(NSArray *)arg2 error:(NSError *)arg3 cancelled:(bool)arg4;

@end
