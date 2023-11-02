
@interface WFShojiSystemActionsRunnerClient : WFWorkflowRunnerClient

@property (nonatomic) <WFShojiSystemActionsRunnerClientDelegate> *delegate;

- (void)handleWorkflowRunResult:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithContextualAction:(id)arg1;

@end
