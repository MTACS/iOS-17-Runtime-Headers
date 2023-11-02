
@interface WFAppendDropboxFileAction : WFStorageServiceAction

- (id)filenamePlaceholderText;
- (bool)isProgressIndeterminate;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (id)storageService;

@end
