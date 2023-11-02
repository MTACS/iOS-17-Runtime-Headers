
@interface WFShowWebPageAction : WFAction

+ (id)userInterfaceProtocol;

- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
