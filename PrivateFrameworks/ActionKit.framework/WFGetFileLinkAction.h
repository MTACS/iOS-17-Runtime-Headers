
@interface WFGetFileLinkAction : WFStorageServiceInputAction

- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
