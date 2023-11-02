
@interface WFAddToReadingListAction : WFAction

- (void)addReadingListItem:(id)arg1 title:(id)arg2 previewText:(id)arg3 withService:(id)arg4 error:(id*)arg5;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)service;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
