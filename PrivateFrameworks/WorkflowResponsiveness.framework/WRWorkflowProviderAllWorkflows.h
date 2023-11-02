
@interface WRWorkflowProviderAllWorkflows : WRWorkflowProvider {
    id /* block */  _callback;
    NSArray * _workflows;
}

- (void).cxx_destruct;
- (void)handleTaskingChanged:(bool)arg1;
- (id)initWithQueue:(id)arg1 callback:(id /* block */)arg2;

@end
