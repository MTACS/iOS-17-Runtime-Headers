
@interface WFRSSFeedExtractAction : WFAction

- (void)addRSSFeedItemsFromHTML:(id)arg1 baseURL:(id)arg2 encoding:(id)arg3;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (void)getURLsFromInputWithCompletionHandler:(id /* block */)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
