
@interface WFAppendFileAction : WFStorageServiceAction

+ (bool)outputIsExemptFromTaintTrackingInheritance;

- (id)contentDestinationWithError:(id*)arg1;
- (id)filenamePlaceholderText;
- (id)minimumSupportedClientVersion;
- (bool)requiresRemoteExecution;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)updatePathPrefix;

@end
