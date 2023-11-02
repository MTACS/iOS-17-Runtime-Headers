
@protocol WFWorkflowRunnerClientDelegate <NSObject>

@optional

- (void)workflowRunnerClient:(WFWorkflowRunnerClient *)arg1 didFinishRunningWorkflowWithAllResults:(NSDictionary *)arg2 error:(NSError *)arg3 cancelled:(bool)arg4;
- (void)workflowRunnerClient:(WFWorkflowRunnerClient *)arg1 didFinishRunningWorkflowWithError:(NSError *)arg2 cancelled:(bool)arg3;
- (void)workflowRunnerClient:(WFWorkflowRunnerClient *)arg1 didFinishRunningWorkflowWithOutput:(WFContentCollection *)arg2 error:(NSError *)arg3 cancelled:(bool)arg4;
- (void)workflowRunnerClient:(WFWorkflowRunnerClient *)arg1 didStartRunningWorkflowWithProgress:(NSProgress *)arg2;

@end
