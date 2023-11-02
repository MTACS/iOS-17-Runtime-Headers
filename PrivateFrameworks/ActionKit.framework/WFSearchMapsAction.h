
@interface WFSearchMapsAction : WFAction

- (id)appIdentifier;
- (id)contentDestinationWithError:(id*)arg1;
- (void)openMapItems:(id)arg1;
- (void)openMapsLink:(id)arg1 inAppNamed:(id)arg2;
- (void)openMapsURL:(id)arg1 withAppIdentifier:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
