
@interface WFContextualActionRunnerClient : WFWorkflowRunnerClient

@property (nonatomic) <WFContextualActionRunnerClientDelegate> *delegate;

- (void)handleWorkflowRunResult:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithContextualAction:(id)arg1 actionContext:(id)arg2;
- (void)start;
- (void)startFromQueue;

@end
