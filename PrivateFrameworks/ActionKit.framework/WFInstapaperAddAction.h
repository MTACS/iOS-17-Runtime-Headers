
@interface WFInstapaperAddAction : WFInstapaperAction

- (id)connectionTypes;
- (id)contentDestinationWithError:(id*)arg1;
- (void)engine:(id)arg1 connection:(id)arg2 didAddBookmark:(id)arg3;
- (void)runAsynchronouslyWithInput:(id)arg1 selectedFolder:(id)arg2;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
