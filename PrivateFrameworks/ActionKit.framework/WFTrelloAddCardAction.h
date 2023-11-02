
@interface WFTrelloAddCardAction : WFAction

- (id)contentDestinationWithError:(id*)arg1;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
