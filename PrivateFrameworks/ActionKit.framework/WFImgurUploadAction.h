
@interface WFImgurUploadAction : WFAction

- (id)contentDestinationWithError:(id*)arg1;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (bool)isProgressIndeterminate;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)uploadInput:(id)arg1 withAccount:(id)arg2;

@end
