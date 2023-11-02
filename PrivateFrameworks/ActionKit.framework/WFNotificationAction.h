
@interface WFNotificationAction : WFAction

- (id)actionAlert;
- (id)contentDestinationWithError:(id*)arg1;
- (void)getNotificationAttachmentsWithInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithUserNotificationCenterInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
