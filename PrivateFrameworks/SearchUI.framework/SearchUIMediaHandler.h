
@interface SearchUIMediaHandler : SearchUICommandHandler <WFWorkflowRunnerClientDelegate> {
    NSString * _clientSelectedBundleIdentifier;
    INIntent * _intent;
    SFMediaMetadata * _mediaMetadata;
    bool  _supportsIntentPath;
    WFSpotlightResultWorkflowRunnerClient * _workflowClient;
}

@property (readonly) NSString *clientSelectedBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) INIntent *intent;
@property (readonly) SFMediaMetadata *mediaMetadata;
@property (readonly) Class superclass;
@property (readonly) bool supportsIntentPath;
@property (retain) WFSpotlightResultWorkflowRunnerClient *workflowClient;

- (void).cxx_destruct;
- (id)clientSelectedBundleIdentifier;
- (void)executeFallbackPath;
- (id)intent;
- (id)mediaMetadata;
- (void)performCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 environment:(id)arg3;
- (void)performIntent:(id)arg1 withBundleIdentifier:(id)arg2;
- (bool)prefersModalPresentation;
- (void)setWorkflowClient:(id)arg1;
- (bool)supportsIntentPath;
- (id)workflowClient;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(bool)arg4;

@end
