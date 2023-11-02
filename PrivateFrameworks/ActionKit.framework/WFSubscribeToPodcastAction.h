
@interface WFSubscribeToPodcastAction : WFAction

- (id)contentNotFoundError;
- (id)errorSubscribingToPodcast:(unsigned int)arg1;
- (id)genericSubscribeFailedError;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)subscribeToPodcast:(id)arg1 completion:(id /* block */)arg2;

@end
