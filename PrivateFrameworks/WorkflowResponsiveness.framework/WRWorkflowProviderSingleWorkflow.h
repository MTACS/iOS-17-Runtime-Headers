
@interface WRWorkflowProviderSingleWorkflow : WRWorkflowProvider {
    id /* block */  _callback;
    WRWorkflow * _workflow;
    NSString * _workflowName;
}

- (void).cxx_destruct;
- (void)handleTaskingChanged:(bool)arg1;
- (id)initWithWorkflowName:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;

@end
