
@interface WFWidgetWorkflowRunnerClient : WFWorkflowRunnerClient

@property (nonatomic, readonly) WFWorkflowRunningContext *context;

- (id)initWithWorkflowIdentifier:(id)arg1 location:(long long)arg2;

@end
