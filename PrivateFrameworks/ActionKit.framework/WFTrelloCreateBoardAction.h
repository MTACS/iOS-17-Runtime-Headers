
@interface WFTrelloCreateBoardAction : WFAction

- (id)contentDestinationWithError:(id*)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)updateBoardCacheOnAccount:(id)arg1;

@end
