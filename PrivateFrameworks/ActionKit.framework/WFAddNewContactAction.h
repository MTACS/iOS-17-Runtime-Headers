
@interface WFAddNewContactAction : WFAction

+ (void)contactFromParameters:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithoutUI;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
