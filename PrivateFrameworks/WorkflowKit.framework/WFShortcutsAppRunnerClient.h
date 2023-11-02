
@interface WFShortcutsAppRunnerClient : WFWorkflowRunnerClient

- (id)initWithContextualAction:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 action:(id)arg3 metadata:(id)arg4 runSource:(id)arg5 remoteDialogPresenterEndpoint:(id)arg6;
- (id)initWithWorkflow:(id)arg1 state:(id)arg2 runSource:(id)arg3 input:(id)arg4 remoteDialogPresenterEndpoint:(id)arg5 requestOutput:(bool)arg6;
- (id)initWithWorkflowData:(id)arg1 runSource:(id)arg2;
- (id)runWorkflowWithRequest:(id)arg1 descriptor:(id)arg2 completion:(id /* block */)arg3;

@end
