
@interface WFGetURLHeadersAction : WFAction

+ (bool)outputIsExemptFromTaintTrackingInheritance;

- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
