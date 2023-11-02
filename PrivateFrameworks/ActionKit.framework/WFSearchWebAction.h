
@interface WFSearchWebAction : WFAction

- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (id)getDestinationURLFromInputString:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
