
@protocol WFShojiSystemActionsRunnerClientDelegate <WFWorkflowRunnerClientDelegate>

@optional

- (void)workflowRunnerClient:(WFShojiSystemActionsRunnerClient *)arg1 didFinishRunningAction:(WFContextualAction *)arg2 withReverseAction:(WFReverseContextualAction *)arg3;

@end
