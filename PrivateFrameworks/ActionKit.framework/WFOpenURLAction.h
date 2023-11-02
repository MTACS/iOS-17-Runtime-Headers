
@interface WFOpenURLAction : WFHandleCustomIntentAction

- (bool)allowsAnyURLDestinationWhenAddedToWorkflowByUser;
- (id)contentDestinationWithError:(id*)arg1;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)populatesInputFromInputParameter;
- (bool)requiresRemoteExecution;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(id /* block */)arg5;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
