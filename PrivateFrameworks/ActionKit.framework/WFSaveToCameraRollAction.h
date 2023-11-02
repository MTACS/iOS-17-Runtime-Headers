
@interface WFSaveToCameraRollAction : WFAction

- (id)contentDestinationWithError:(id*)arg1;
- (id)fetchOptions;
- (void)runAsynchronouslyWithAssetCollection:(id)arg1 input:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
