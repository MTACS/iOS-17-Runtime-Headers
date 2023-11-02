
@interface WFCreateFolderAction : WFStorageServiceAction

- (id)filenamePlaceholderText;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (id)minimumSupportedClientVersion;
- (bool)requiresRemoteExecution;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)updatePathPrefix;

@end
