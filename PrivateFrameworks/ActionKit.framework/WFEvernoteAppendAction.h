
@interface WFEvernoteAppendAction : WFAction

- (id)contentDestinationWithError:(id*)arg1;
- (void)performSearch:(id)arg1 inNotebook:(id)arg2 maxResults:(unsigned long long)arg3;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (id)titleSearch;
- (void)uploadNoteWithContent:(id)arg1 toNotebook:(id)arg2;

@end
